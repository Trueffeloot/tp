#include "JSystem/JKernel/JKRAramStream.h"
#include "JSystem/JKernel/JKRAramPiece.h"
#include "JSystem/JSupport/JSUFileStream.h"
#include "JSystem/JUtility/JUTException.h"

/* ############################################################################################## */
/* 80451408-8045140C 000908 0004+00 1/1 0/0 0/0 .sbss            sAramStreamObject__13JKRAramStream
 */
JKRAramStream* JKRAramStream::sAramStreamObject;

/* 802D3B48-802D3BB8 2CE488 0070+00 0/0 1/1 0/0 .text            create__13JKRAramStreamFl */
JKRAramStream* JKRAramStream::create(s32 priority) {
    if (!sAramStreamObject) {
        sAramStreamObject = new (JKRGetSystemHeap(), 0) JKRAramStream(priority);
        setTransBuffer(NULL, 0, NULL);
    }

    return sAramStreamObject;
}

/* ############################################################################################## */
/* 803CC188-803CC198 0292A8 0010+00 1/1 0/0 0/0 .data            sMessageBuffer__13JKRAramStream */
void* JKRAramStream::sMessageBuffer[4] = {
    NULL,
    NULL,
    NULL,
    NULL,
};

/* 803CC198-803CC1B8 0292B8 0020+00 2/2 0/0 0/0 .data            sMessageQueue__13JKRAramStream */
OSMessageQueue JKRAramStream::sMessageQueue = {0};

/* 802D3BB8-802D3C08 2CE4F8 0050+00 1/1 0/0 0/0 .text            __ct__13JKRAramStreamFl */
JKRAramStream::JKRAramStream(s32 priority) : JKRThread(0xc00, 0x10, priority) {
    resume();
}

/* 802D3C08-802D3C68 2CE548 0060+00 1/0 0/0 0/0 .text            __dt__13JKRAramStreamFv */
JKRAramStream::~JKRAramStream() {}

/* 802D3C68-802D3CD8 2CE5A8 0070+00 1/0 0/0 0/0 .text            run__13JKRAramStreamFv */
void* JKRAramStream::run() {
    OSInitMessageQueue(&sMessageQueue, sMessageBuffer, ARRAY_SIZE(sMessageBuffer));

    for (;;) {
        OSMessage message;
        OSReceiveMessage(&sMessageQueue, &message, OS_MESSAGE_BLOCK);
        JKRAramStreamCommand* command = (JKRAramStreamCommand*)message;

        switch (command->mType) {
        case JKRAramStreamCommand::READ:
            readFromAram();
            break;
        case JKRAramStreamCommand::WRITE:
            writeToAram(command);
            break;
        }
    }
}

/* 802D3CD8-802D3CE0 2CE618 0008+00 1/1 0/0 0/0 .text            readFromAram__13JKRAramStreamFv */
s32 JKRAramStream::readFromAram() {
    return 1;
}

/* ############################################################################################## */
/* 8039D120-8039D120 029780 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
s32 JKRAramStream::writeToAram(JKRAramStreamCommand* command) {
    u32 dstSize = command->mSize;
    u32 offset = command->mOffset;
    u32 writtenLength = 0;
    u32 destination = command->mAddress;
    u8* buffer = command->mTransferBuffer;
    u32 bufferSize = command->mTransferBufferSize;
    JKRHeap* heap = command->mHeap;

    if (buffer) {
        bufferSize = (bufferSize) ? bufferSize : 0x8000;

        command->mTransferBufferSize = bufferSize;
        command->mAllocatedTransferBuffer = false;
    } else {
        bufferSize = (bufferSize) ? bufferSize : 0x8000;

        if (heap) {
            buffer = (u8*)JKRAllocFromHeap(heap, bufferSize, -0x20);
            command->mTransferBuffer = buffer;
        } else {
            buffer = (u8*)JKRAllocFromSysHeap(bufferSize, -0x20);
            command->mTransferBuffer = buffer;
        }

        command->mTransferBufferSize = bufferSize;
        command->mAllocatedTransferBuffer = true;
    }

    if (!buffer) {
        if (!heap) {
            JKRGetCurrentHeap()->dump();
        } else {
            heap->dump();
        }

        JUTException::panic(__FILE__, 172, ":::Cannot alloc memory\n");
    }

    if (buffer) {
        command->mStream->seek(offset, JSUStreamSeekFrom_SET);
        while (dstSize != 0) {
            u32 length = (dstSize > bufferSize) ? bufferSize : dstSize;

            s32 readLength = command->mStream->read(buffer, length);
            if (readLength == 0) {
                writtenLength = 0;
                break;
            }

            JKRAramPcs(0, (u32)buffer, destination, length, NULL);
            dstSize -= length;
            writtenLength += length;
            destination += length;

            if (command->mReturnSize) {
                *command->mReturnSize += length;
            }
        }

        if (command->mAllocatedTransferBuffer) {
            JKRFree(buffer);
            command->mAllocatedTransferBuffer = false;
        }
    }

    OSSendMessage(&command->mMessageQueue, (OSMessage)writtenLength, OS_MESSAGE_NOBLOCK);
    return writtenLength;
}

/* ############################################################################################## */
/* 8045140C-80451410 00090C 0004+00 2/2 0/0 0/0 .sbss            transBuffer__13JKRAramStream */
u8* JKRAramStream::transBuffer;

/* 80451410-80451414 000910 0004+00 2/2 0/0 0/0 .sbss            transSize__13JKRAramStream */
u32 JKRAramStream::transSize;

/* 80451414-80451418 000914 0004+00 2/2 0/0 0/0 .sbss            transHeap__13JKRAramStream */
JKRHeap* JKRAramStream::transHeap;

/* 802D3ED0-802D3FA0 2CE810 00D0+00 0/0 1/1 0/0 .text
 * write_StreamToAram_Async__13JKRAramStreamFP18JSUFileInputStreamUlUlUlPUl */
JKRAramStreamCommand* JKRAramStream::write_StreamToAram_Async(JSUFileInputStream* stream, u32 addr,
                                                              u32 size, u32 offset,
                                                              u32* returnSize) {
    JKRAramStreamCommand* command = new (JKRGetSystemHeap(), -4) JKRAramStreamCommand();
    command->mType = JKRAramStreamCommand::WRITE;
    command->mAddress = addr;
    command->mSize = size;
    command->mStream = stream;
    command->field_0x2c = 0;
    command->mOffset = offset;
    command->mTransferBuffer = transBuffer;
    command->mHeap = transHeap;
    command->mTransferBufferSize = transSize;
    command->mReturnSize = returnSize;
    if (returnSize) {
        *returnSize = 0;
    }

    OSInitMessageQueue(&command->mMessageQueue, &command->mMessage, 1);
    OSSendMessage(&sMessageQueue, command, OS_MESSAGE_BLOCK);
    return command;
}

/* 802D3FA0-802D4034 2CE8E0 0094+00 0/0 1/1 0/0 .text
 * sync__13JKRAramStreamFP20JKRAramStreamCommandi               */
JKRAramStreamCommand* JKRAramStream::sync(JKRAramStreamCommand* command, BOOL isNonBlocking) {
    OSMessage message;
    if (isNonBlocking == 0) {
        OSReceiveMessage(&command->mMessageQueue, &message, OS_MESSAGE_BLOCK);
        if (message == NULL) {
            command = NULL;
            return command;
        } else {
            return command;
        }
    } else {
        BOOL receiveResult =
            OSReceiveMessage(&command->mMessageQueue, &message, OS_MESSAGE_NOBLOCK);
        if (receiveResult == FALSE) {
            command = NULL;
            return command;
        } else if (message == NULL) {
            command = NULL;
            return command;
        } else {
            return command;
        }
    }
}

/* 802D4034-802D4088 2CE974 0054+00 1/1 1/1 0/0 .text
 * setTransBuffer__13JKRAramStreamFPUcUlP7JKRHeap               */
void JKRAramStream::setTransBuffer(u8* buffer, u32 bufferSize, JKRHeap* heap) {
    transBuffer = NULL;
    transSize = 0x8000;
    transHeap = NULL;

    if (buffer) {
        transBuffer = (u8*)ALIGN_NEXT((u32)buffer, 0x20);
    }

    if (bufferSize) {
        transSize = ALIGN_PREV(bufferSize, 0x20);
    }

    if (heap && !buffer) {
        transHeap = heap;
    }
}

/* 802D4088-802D4094 2CE9C8 000C+00 1/1 0/0 0/0 .text            __ct__20JKRAramStreamCommandFv */
JKRAramStreamCommand::JKRAramStreamCommand() {
    mAllocatedTransferBuffer = false;
}

/* 802D4094-802D40F0 2CE9D4 005C+00 0/0 3/0 0/0 .text getAvailable__20JSURandomInputStreamCFv */
// s32 JSURandomInputStream::getAvailable() const {
// should be an inline function
extern "C" s32 getAvailable__20JSURandomInputStreamCFv(JSURandomInputStream* self) {
    return self->getLength() - self->getPosition();
}