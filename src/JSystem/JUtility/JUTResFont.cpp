//
// Generated By: dol2asm
// Translation Unit: JUTResFont
//

#include "JSystem/JUtility/JUTResFont.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JSupport/JSupport.h"
#include "JSystem/JUtility/JUTAssert.h"
#include "JSystem/JUtility/JUTConsole.h"
#include "dolphin/gx.h"

#define suAboutEncoding_ 3

/* 802DEF48-802DEF94 2D9888 004C+00 0/0 1/1 0/0 .text            __ct__10JUTResFontFv */
JUTResFont::JUTResFont() {
    initialize_state();
    JUTFont::initialize_state();
}

/* 802DEF94-802DF000 2D98D4 006C+00 0/0 10/10 0/0 .text __ct__10JUTResFontFPC7ResFONTP7JKRHeap */
JUTResFont::JUTResFont(const ResFONT* pFont, JKRHeap* pHeap) {
    initialize_state();
    JUTFont::initialize_state();
    initiate(pFont, pHeap);
}

/* 802DF000-802DF08C 2D9940 008C+00 1/0 2/2 0/0 .text            __dt__10JUTResFontFv */
JUTResFont::~JUTResFont() {
    if (mValid) {
        deleteMemBlocks_ResFont();
        initialize_state();
        JUTFont::initialize_state();
    }
}

/* 802DF08C-802DF0B0 2D99CC 0024+00 3/3 3/3 0/0 .text deleteMemBlocks_ResFont__10JUTResFontFv */
void JUTResFont::deleteMemBlocks_ResFont() {
    delete[] mMemBlocks;
}

/* 802DF0B0-802DF0DC 2D99F0 002C+00 5/5 3/3 0/0 .text            initialize_state__10JUTResFontFv */
void JUTResFont::initialize_state() {
    mResFont = NULL;
    mMemBlocks = NULL;
    mpWidthBlocks = NULL;
    mpGlyphBlocks = NULL;
    mpMapBlocks = NULL;
    mWidth = 0;
    mHeight = 0;
    mTexPageIdx = -1;
}

/* 802DF0DC-802DF13C 2D9A1C 0060+00 1/1 0/0 0/0 .text initiate__10JUTResFontFPC7ResFONTP7JKRHeap
 */
bool JUTResFont::initiate(const ResFONT* pFont, JKRHeap* pHeap) {
    if (!protected_initiate(pFont, pHeap)) {
        deleteMemBlocks_ResFont();
        initialize_state();
        JUTFont::initialize_state();
        mValid = false;
        return false;
    }
    return true;
}

/* 802DF13C-802DF248 2D9A7C 010C+00 1/1 0/0 0/0 .text
 * protected_initiate__10JUTResFontFPC7ResFONTP7JKRHeap         */
bool JUTResFont::protected_initiate(const ResFONT* pFont, JKRHeap* pHeap) {
    void** p;
    delete_and_initialize();
    JUTFont::initialize_state();

    if (!pFont) {
        return false;
    }
    mResFont = pFont;
    mValid = true;

    countBlock();
    mMemBlocks = new (pHeap, 0) void*[mWid1BlockNum + mGly1BlockNum + mMap1BlockNum];
    p = mMemBlocks;

    if (!mMemBlocks) {
        return false;
    } else {
        if (mWid1BlockNum != 0) {
            mpWidthBlocks = (ResFONT::WID1**)p;
            p += mWid1BlockNum;
        }
        if (mGly1BlockNum != 0) {
            mpGlyphBlocks = (ResFONT::GLY1**)p;
            p += mGly1BlockNum;
        }
        if (mMap1BlockNum != 0) {
            mpMapBlocks = (ResFONT::MAP1**)p;
        }
        setBlock();
        return true;
    }
}

/* 802DF248-802DF344 2D9B88 00FC+00 1/1 0/0 0/0 .text            countBlock__10JUTResFontFv */
void JUTResFont::countBlock() {
    mWid1BlockNum = 0;
    mGly1BlockNum = 0;
    mMap1BlockNum = 0;

    u8* pData = (u8*)&mResFont->data;
    for (u32 i = 0; i < mResFont->numBlocks; i++, pData += ((BlockHeader*)pData)->size) {
        int magic = ((BlockHeader*)pData)->magic;
        switch (magic) {
        case 'WID1':
            mWid1BlockNum++;
            break;
        case 'GLY1':
            mGly1BlockNum++;
            break;
        case 'MAP1':
            mMap1BlockNum++;
            break;
        case 'INF1':
            break;
        default:
            JUTReportConsole("JUTResFont: Unknown data block\n");
        }
    }
}

/* ############################################################################################## */
/* 8039D390-8039D39C -00001 000C+00 1/1 1/1 0/0 .rodata          saoAboutEncoding___10JUTResFont */
IsLeadByte_func const JUTResFont::saoAboutEncoding_[3] = {
    JUTFont::isLeadByte_1Byte,
    JUTFont::isLeadByte_2Byte,
    JUTFont::isLeadByte_ShiftJIS,
};

/* 802DF344-802DF48C 2D9C84 0148+00 1/0 0/0 0/0 .text            setBlock__10JUTResFontFv */
void JUTResFont::setBlock() {
	s32 widthNum, glyphNum, mapNum;
	widthNum = 0;
    glyphNum = 0;
    mapNum = 0;
    mMaxCode = -1;

	BlockHeader* data = (BlockHeader*)mResFont->data;
	for (u32 i = 0; i < mResFont->numBlocks; i++, data = (BlockHeader*)data->getNext()) {
		switch (data->magic) {
		case 'INF1':
			mInf1Ptr  = (ResFONT::INF1*)data;
            u32 u = mInf1Ptr->fontType;
            JUT_ASSERT(244, u < suAboutEncoding_);
            mIsLeadByte = &saoAboutEncoding_[u];
			break;

		case 'WID1':
			mpWidthBlocks[widthNum] = (ResFONT::WID1*)data;
			widthNum++;
			break;

		case 'GLY1':
			mpGlyphBlocks[glyphNum] = (ResFONT::GLY1*)data;
			glyphNum++;
			break;

		case 'MAP1':
			mpMapBlocks[mapNum] = (ResFONT::MAP1*)data;
			if (mMaxCode > mpMapBlocks[mapNum]->startCode) {
				mMaxCode = mpMapBlocks[mapNum]->startCode;
			}
			mapNum++;
			break;

		default:
			JUTReportConsole("Unknown data block\n");
			break;
		}
	}
}

/* 802DF48C-802DF584 2D9DCC 00F8+00 1/0 1/0 0/0 .text            setGX__10JUTResFontFv */
void JUTResFont::setGX() {
    GXSetNumChans(1);
    GXSetNumTevStages(1);
    GXSetNumTexGens(1);
    GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR0A0);
    GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, GX_LIGHT_NULL, GX_DF_NONE,
                  GX_AF_NONE);
    GXSetTevOp(GX_TEVSTAGE0, GX_MODULATE);
    GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_SET);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_CLR_RGBA, GX_RGBA4, 0);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_CLR_RGBA, GX_RGBA8, 0);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_CLR_RGBA, GX_RGBX8, 15);
    GXClearVtxDesc();
    GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
    GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
    GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
}

/* 802DF584-802DF7C4 2D9EC4 0240+00 1/0 1/0 0/0 .text
 * setGX__10JUTResFontFQ28JUtility6TColorQ28JUtility6TColor     */
void JUTResFont::setGX(JUtility::TColor col1, JUtility::TColor col2) {
    if (col1 == 0 && col2 == -1) {
        setGX();
    } else {
        GXSetNumChans(1);
        GXSetNumTevStages(2);
        GXSetNumTexGens(1);
        GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR_NULL);
        GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, GX_LIGHT_NULL, GX_DF_NONE,
                      GX_AF_NONE);
        GXSetTevColor(GX_TEVREG0, col1);
        GXSetTevColor(GX_TEVREG1, col2);
        GXSetTevColorIn(GX_TEVSTAGE0, GX_CC_C0, GX_CC_C1, GX_CC_TEXC, GX_CC_ZERO);
        GXSetTevAlphaIn(GX_TEVSTAGE0, GX_CA_A0, GX_CA_A1, GX_CA_TEXA, GX_CA_ZERO);
        GXSetTevColorOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
        GXSetTevAlphaOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
        GXSetTevOrder(GX_TEVSTAGE1, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
        GXSetTevColorIn(GX_TEVSTAGE1, GX_CC_ZERO, GX_CC_CPREV, GX_CC_RASC, GX_CC_ZERO);
        GXSetTevAlphaIn(GX_TEVSTAGE1, GX_CA_ZERO, GX_CA_APREV, GX_CA_RASA, GX_CA_ZERO);
        GXSetTevColorOp(GX_TEVSTAGE1, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
        GXSetTevAlphaOp(GX_TEVSTAGE1, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
        GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_SET);
        GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_CLR_RGBA, GX_RGBA4, 0);
        GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_CLR_RGBA, GX_RGBA8, 0);
        GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_CLR_RGBA, GX_RGBX8, 15);
        GXClearVtxDesc();
        GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
        GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
        GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
    }
}

/* 802DF7C4-802DFBE8 2DA104 0424+00 1/0 1/0 0/0 .text            drawChar_scale__10JUTResFontFffffib
 */
f32 JUTResFont::drawChar_scale(f32 pos_x, f32 pos_y, f32 scale_x, f32 scale_y, int str_int,
                               bool flag) {
    f32 x1;
    f32 y1;
    f32 scaled_height;
    f32 x2;

    JUT_ASSERT(378, mValid);
    JUTFont::TWidth width;
    loadFont(str_int, GX_TEXMAP0, &width);

    if ((mFixed) || (!flag)) {
        x1 = pos_x;
    } else {
        x1 = (pos_x - width.field_0x0 * (scale_x / getCellWidth()));
    }
    f32 retval = mFixedWidth * (scale_x / getCellWidth());
    if (mFixed == false) {
        if (!flag) {
            retval = (width.field_0x1 + width.field_0x0) * (scale_x / getCellWidth());
        } else {
            retval = width.field_0x1 * (scale_x / getCellWidth());
        }
    }
    x2 = x1 + scale_x;
    y1 = pos_y - getAscent() * (scale_y / getHeight());
    scaled_height = scale_y / getHeight();
    f32 descent = getDescent();
    f32 y2 = descent * scaled_height + pos_y;

    s32 u1 = (mWidth * 0x8000) / mpGlyphBlocks[field_0x66]->textureWidth;
    s32 v1 = (mHeight * 0x8000) / mpGlyphBlocks[field_0x66]->textureHeight;
    s32 u2 = ((mWidth + mpGlyphBlocks[field_0x66]->cellWidth) * 0x8000) / mpGlyphBlocks[field_0x66]->textureWidth;
    s32 v2 = ((mHeight + mpGlyphBlocks[field_0x66]->cellHeight) * 0x8000) / mpGlyphBlocks[field_0x66]->textureHeight;

    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
    GXBegin(GX_QUADS, GX_VTXFMT0, 4);

    // Bottom Left
    GXPosition3f32(x1, y1, 0.0f);
    GXColor1u32(mColor1);
    GXTexCoord2u16(u1, v1);

    // Bottom Right
    GXPosition3f32(x2, y1, 0.0f);
    GXColor1u32(mColor2);
    GXTexCoord2u16(u2, v1);

    // Top Right
    GXPosition3f32(x2, y2, 0.0f);
    GXColor1u32(mColor4);
    GXTexCoord2u16(u2, v2);

    // Top Left
    GXPosition3f32(x1, y2, 0.0f);
    GXColor1u32(mColor3);
    GXTexCoord2u16(u1, v2);

    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_S16, 0);

    return retval;
}

/* 802DFBE8-802DFC64 2DA528 007C+00 1/1 0/0 0/0 .text
 * loadFont__10JUTResFontFi11_GXTexMapIDPQ27JUTFont6TWidth      */
void JUTResFont::loadFont(int code, GXTexMapID texMapID, JUTFont::TWidth* pDstWidth) {
    if (pDstWidth != 0) {
        getWidthEntry(code, pDstWidth);
    }

    int fontCode = getFontCode(code);
    loadImage(fontCode, texMapID);
}

/* 802DFC64-802DFD0C 2DA5A4 00A8+00 1/0 1/0 0/0 .text
 * getWidthEntry__10JUTResFontCFiPQ27JUTFont6TWidth             */
void JUTResFont::getWidthEntry(int code, JUTFont::TWidth* i_width) const {
    int fontCode = getFontCode(code);
    i_width->field_0x0 = 0;
    i_width->field_0x1 = mInf1Ptr->width;

    for (int i = 0; i < mWid1BlockNum; i++) {
        if (mpWidthBlocks[i]->startCode <= fontCode && fontCode <= mpWidthBlocks[i]->endCode) {
            u8* ptr = &mpWidthBlocks[i]->mChunkNum[(fontCode - mpWidthBlocks[i]->startCode) * 2];
            i_width->field_0x0 = ptr[0];
            i_width->field_0x1 = ptr[1];
            break;
        }
    }
}

/* 802DFD0C-802DFD58 2DA64C 004C+00 1/0 1/0 0/0 .text            getCellWidth__10JUTResFontCFv */
s32 JUTResFont::getCellWidth() const {
    if (mpGlyphBlocks) {
        ResFONT::GLY1* glyphBlock = *mpGlyphBlocks;
        if (glyphBlock) {
            return glyphBlock->cellWidth;
        }
    }

    return getWidth();
}

/* 802DFD58-802DFDA4 2DA698 004C+00 1/0 1/0 0/0 .text            getCellHeight__10JUTResFontCFv */
s32 JUTResFont::getCellHeight() const {
    if (mpGlyphBlocks) {
        ResFONT::GLY1* glyphBlock = *mpGlyphBlocks;
        if (glyphBlock) {
            return glyphBlock->cellHeight;
        }
    }

    return getHeight();
}

/* 802DFDA4-802DFDD8 2DA6E4 0034+00 1/0 1/0 0/0 .text            isLeadByte__10JUTResFontCFi */
bool JUTResFont::isLeadByte(int chr) const {
    return (*mIsLeadByte)(chr);
}

/* ############################################################################################## */
/* 8039D39C-8039D45C 0299FC 00BE+02 1/1 0/0 0/0 .rodata          halftofull$726 */
static const u16 halftofull[95] = {
    0x8140, 0x8149, 0x8168, 0x8194, 0x8190, 0x8193, 0x8195, 0x8166, 0x8169, 0x816A, 0x8196, 0x817B,
    0x8143, 0x817C, 0x8144, 0x815E, 0x824F, 0x8250, 0x8251, 0x8252, 0x8253, 0x8254, 0x8255, 0x8256,
    0x8257, 0x8258, 0x8146, 0x8147, 0x8183, 0x8181, 0x8184, 0x8148, 0x8197, 0x8260, 0x8261, 0x8262,
    0x8263, 0x8264, 0x8265, 0x8266, 0x8267, 0x8268, 0x8269, 0x826A, 0x826B, 0x826C, 0x826D, 0x826E,
    0x826F, 0x8270, 0x8271, 0x8272, 0x8273, 0x8274, 0x8275, 0x8276, 0x8277, 0x8278, 0x8279, 0x816D,
    0x818F, 0x816E, 0x814F, 0x8151, 0x8165, 0x8281, 0x8282, 0x8283, 0x8284, 0x8285, 0x8286, 0x8287,
    0x8288, 0x8289, 0x828A, 0x828B, 0x828C, 0x828D, 0x828E, 0x828F, 0x8290, 0x8291, 0x8292, 0x8293,
    0x8294, 0x8295, 0x8296, 0x8297, 0x8298, 0x8299, 0x829A, 0x816F, 0x8162, 0x8170, 0x8160,
};

/* 802DFDD8-802DFF60 2DA718 0188+00 2/2 0/0 0/0 .text            getFontCode__10JUTResFontCFi */
int JUTResFont::getFontCode(int chr) const {
    int ret = mInf1Ptr->defaultCode;
    if ((getFontType() == 2) && (mMaxCode >= 0x8000U) && (chr >= 0x20) && (chr < 0x7FU)) {
        chr = halftofull[chr - 32];
    }
    for (int i = 0; i < mMap1BlockNum; i++) {
        if ((mpMapBlocks[i]->startCode <= chr) && (chr <= mpMapBlocks[i]->endCode)) {
            if (mpMapBlocks[i]->mappingMethod == 0) {
                ret = chr - mpMapBlocks[i]->startCode;
                break;
            } else if (mpMapBlocks[i]->mappingMethod == 2) {
                ret = *(&mpMapBlocks[i]->mLeading + (chr - mpMapBlocks[i]->startCode));
                break;
            } else if (mpMapBlocks[i]->mappingMethod == 3) {
                u16* leading_temp = &mpMapBlocks[i]->mLeading;
                int phi_r5 = 0;
                int phi_r6_2 = mpMapBlocks[i]->numEntries - 1;

                while (phi_r6_2 >= phi_r5) {
                    int temp_r7 = (phi_r6_2 + phi_r5) / 2;

                    if (chr < leading_temp[temp_r7 * 2]) {
                        phi_r6_2 = temp_r7 - 1;
                        continue;
                    }

                    if (chr > leading_temp[temp_r7 * 2]) {
                        phi_r5 = temp_r7 + 1;
                        continue;
                    }

                    ret = leading_temp[temp_r7 * 2 + 1];
                    break;
                }
            } else if (mpMapBlocks[i]->mappingMethod == 1) {
                u16* phi_r5_2 = NULL;
                if (mpMapBlocks[i]->numEntries == 1) {
                    phi_r5_2 = &mpMapBlocks[i]->mLeading;
                }
                ret = convertSjis(chr, phi_r5_2);
                break;
            }
            break;
        }
    }
    return ret;
}

/* 802DFF60-802E00C4 2DA8A0 0164+00 1/0 0/0 0/0 .text loadImage__10JUTResFontFi11_GXTexMapID */
void JUTResFont::loadImage(int code, GXTexMapID id){
    int i = 0;
    for (; i < mGly1BlockNum; i++)
    {
        if (mpGlyphBlocks[i]->startCode <= code && code <= mpGlyphBlocks[i]->endCode)
        {
            code -= mpGlyphBlocks[i]->startCode;
            break;
        }
    }

    if (i == mGly1BlockNum)
        return;

    s32 pageNumCells = mpGlyphBlocks[i]->numRows * mpGlyphBlocks[i]->numColumns;
    s32 pageIdx = code / pageNumCells;
    s32 cellIdxInPage = code % pageNumCells;
    s32 cellCol = (cellIdxInPage % mpGlyphBlocks[i]->numRows);
    s32 cellRow = (cellIdxInPage / mpGlyphBlocks[i]->numRows);
    mWidth = cellCol * mpGlyphBlocks[i]->cellWidth;
    mHeight = cellRow * mpGlyphBlocks[i]->cellHeight;

    if (pageIdx != mTexPageIdx || i != field_0x66)
    {
        GXInitTexObj(&mTexObj, &mpGlyphBlocks[i]->data[pageIdx * mpGlyphBlocks[i]->textureSize], mpGlyphBlocks[i]->textureWidth,
                     mpGlyphBlocks[i]->textureHeight, (GXTexFmt)mpGlyphBlocks[i]->textureFormat, GX_CLAMP, GX_CLAMP, 0);

        GXInitTexObjLOD(&mTexObj, GX_LINEAR, GX_LINEAR, 0.0f, 0.0f, 0.0f, 0U, 0U, GX_ANISO_1);
        mTexPageIdx = pageIdx;
        field_0x66 = i;
    }

    GXLoadTexObj(&mTexObj, id);
}

/* 802E00C4-802E0108 2DAA04 0044+00 1/1 0/0 0/0 .text            convertSjis__10JUTResFontCFiPUs */
int JUTResFont::convertSjis(int inChr, u16* inLead) const {
    int tmp = JSUHiByte(inChr);
    int tmp2 = JSULoByte(inChr) - 0x40;

    if (0x40 <= tmp2) {
        tmp2--;
    }

    u16 lead = 0x31c;

    if (inLead) {
        lead = *inLead;
    }

    return tmp2 + (tmp - 0x88) * 0xbc + -0x5e + lead;
}

/* 8039D45C-8039D45C 029ABC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
