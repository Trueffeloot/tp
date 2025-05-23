//
// Generated By: dol2asm
// Translation Unit: J2DMaterialFactory
//

#include "JSystem/J2DGraph/J2DMaterialFactory.h"
#include "JSystem/J2DGraph/J2DMaterial.h"
#include "JSystem/J2DGraph/J2DScreen.h"
#include "JSystem/JSupport/JSupport.h"
#include "JSystem/JUtility/JUTResource.h"
#include "string.h"
#include "dolphin/types.h"

/* 802F2AD0-802F2C94 2ED410 01C4+00 0/0 1/1 0/0 .text
 * __ct__18J2DMaterialFactoryFRC16J2DMaterialBlock              */
J2DMaterialFactory::J2DMaterialFactory(J2DMaterialBlock const& param_0) {
    field_0x0 = param_0.field_0x8;
    field_0x4 = JSUConvertOffsetToPtr<J2DMaterialInitData>(&param_0, (void*)param_0.field_0xc);
    field_0x8 = JSUConvertOffsetToPtr<u16>(&param_0, (void*)param_0.field_0x10);
    if (param_0.field_0x18 && param_0.field_0x18 - param_0.field_0x14 > 4) {
        field_0xc = JSUConvertOffsetToPtr<J2DIndInitData>(&param_0, (void*)param_0.field_0x18);
    }
    else {
        field_0xc = NULL;
    }
    field_0x30 = JSUConvertOffsetToPtr<_GXCullMode>(&param_0, (void*)param_0.field_0x1c);
    field_0x10 = JSUConvertOffsetToPtr<GXColor>(&param_0, (void*)param_0.field_0x20);
    field_0x14 = JSUConvertOffsetToPtr<u8>(&param_0, (void*)param_0.field_0x24);
    field_0x18 = JSUConvertOffsetToPtr<J2DColorChanInfo>(&param_0, (void*)param_0.field_0x28);
    field_0x1c = JSUConvertOffsetToPtr<u8>(&param_0, (void*)param_0.field_0x2c);
    field_0x20 = JSUConvertOffsetToPtr<J2DTexCoordInfo>(&param_0, (void*)param_0.field_0x30);
    field_0x24 = JSUConvertOffsetToPtr<J2DTexMtxInfo>(&param_0, (void*)param_0.field_0x34);
    field_0x28 = JSUConvertOffsetToPtr<u16>(&param_0, (void*)param_0.field_0x38);
    field_0x2c = JSUConvertOffsetToPtr<u16>(&param_0, (void*)param_0.field_0x3c);
    field_0x34 = JSUConvertOffsetToPtr<J2DTevOrderInfo>(&param_0, (void*)param_0.field_0x40);
    field_0x38 = JSUConvertOffsetToPtr<_GXColorS10>(&param_0, (void*)param_0.field_0x44);
    field_0x3c = JSUConvertOffsetToPtr<GXColor>(&param_0, (void*)param_0.field_0x48);
    field_0x40 = JSUConvertOffsetToPtr<u8>(&param_0, (void*)param_0.field_0x4c);
    field_0x44 = JSUConvertOffsetToPtr<J2DTevStageInfo>(&param_0, (void*)param_0.field_0x50);
    field_0x48 = JSUConvertOffsetToPtr<J2DTevSwapModeInfo>(&param_0, (void*)param_0.field_0x54);
    field_0x4c = JSUConvertOffsetToPtr<J2DTevSwapModeTableInfo>(&param_0, (void*)param_0.field_0x58);
    field_0x50 = JSUConvertOffsetToPtr<J2DAlphaCompInfo>(&param_0, (void*)param_0.field_0x5c);
    field_0x54 = JSUConvertOffsetToPtr<J2DBlendInfo>(&param_0, (void*)param_0.field_0x60);
    field_0x58 = JSUConvertOffsetToPtr<u8>(&param_0, (void*)param_0.field_0x64);
}

/* 802F2C94-802F2D1C 2ED5D4 0088+00 1/1 0/0 0/0 .text countStages__18J2DMaterialFactoryCFi */
u32 J2DMaterialFactory::countStages(int param_0) const {
    J2DMaterialInitData* iVar5 = &field_0x4[field_0x8[param_0]];
    u32 uVar4 = 0;
    u32 uVar3 = 0;
    if (iVar5->field_0x4 != 0xff) {
        uVar3 = field_0x40[iVar5->field_0x4];
    }
    for (int i = 0; i < 8; i++) {
        if (iVar5->field_0x38[i] != 0xffff) {
            uVar4++;
        }
    }
    if ((uVar3 != uVar4 && uVar4 != 0)) {
        if (uVar3 > uVar4) {
            return uVar3;
        }
        return uVar4;
    }
    return uVar3;
}

/* 802F2D1C-802F362C 2ED65C 0910+00 0/0 1/1 0/0 .text
 * create__18J2DMaterialFactoryCFP11J2DMaterialiUlP15J2DResReferenceP15J2DResReferenceP10JKRArchive
 */
// NONMATCHING - Stack issues
J2DMaterial* J2DMaterialFactory::create(J2DMaterial* param_0, int index, u32 param_2,
                                    J2DResReference* param_3, J2DResReference* param_4,
                                    JKRArchive* param_5) const {
    u32 stages = countStages(index);
    u32 uVar1 = ((param_2 & 0x1f0000) >> 16);
    u32 r28 = stages > uVar1 ? stages : uVar1;

    u32 r25 = r28 <= 8 ? r28 : 8;

    s32 local_3bc = ((param_2 & 0x1000000) != 0);
    s32 local_3c0 = (param_2 & 0x1f0000) ? local_3bc : 0;
    bool temp = (param_2 & 0x1f0000);
    u16 tevBlockNum = r28;
    param_0->mTevBlock = J2DMaterial::createTevBlock(tevBlockNum, temp);
    param_0->mIndBlock = J2DMaterial::createIndBlock(local_3c0, temp);
    param_0->mIndex = index;
    param_0->field_0x8 = getMaterialMode(index);
    param_0->getColorBlock()->setColorChanNum(newColorChanNum(index));
    param_0->getColorBlock()->setCullMode(newCullMode(index));
    param_0->getTexGenBlock()->setTexGenNum(newTexGenNum(index));
    param_0->getPEBlock()->setAlphaComp(newAlphaComp(index));
    param_0->getPEBlock()->setBlend(newBlend(index));
    param_0->getPEBlock()->setDither(newDither(index));
    param_0->getTevBlock()->setTevStageNum(newTevStageNum(index));
    param_0->mMaterialAlphaCalc = getMaterialAlphaCalc(index);

    JUTResReference aJStack_12c;
    for (u8 i = 0; i < r25; i++) {
        u16 texNo = newTexNo(index, i);
        s8* local_37c = param_3->getResReference(texNo);
        void* local_380 = NULL;
        if (local_37c != NULL) {
            local_380 = aJStack_12c.getResource(local_37c, 'TIMG', param_5);
            if (local_380 == NULL && param_5 != NULL) {
                local_380 = aJStack_12c.getResource(local_37c, 'TIMG', NULL);
            }
            if (local_380 == NULL && J2DScreen::getDataManage() != NULL) {
                char acStack_230[257];
                strcpy(acStack_230, param_3->getName(texNo));
                local_380 = J2DScreen::getDataManage()->get(acStack_230);
            }
        }
        param_0->getTevBlock()->insertTexture(i, (ResTIMG*)local_380);
        param_0->getTevBlock()->setTexNo(i, texNo);
    }
    u16 fontNo = newFontNo(index);
    param_0->getTevBlock()->setFontNo(fontNo);
    
    s8* local_384 = param_4->getResReference(param_0->getTevBlock()->getFontNo());
    void* local_388 = NULL;
    if (local_384 != NULL) {
        local_388 = aJStack_12c.getResource(local_384, 'FONT', param_5);
        if (local_388 == NULL && param_5 != NULL) {
            local_388 = aJStack_12c.getResource(local_384, 'FONT', NULL);
        }
        if (local_388 == NULL && J2DScreen::getDataManage() != NULL) {
            char* pcVar9 = param_4->getName(param_0->getTevBlock()->getFontNo());
            char acStack_334[257];
            strcpy(acStack_334, pcVar9);
            local_388 = J2DScreen::getDataManage()->get(acStack_334);
        }
    }

    param_0->getTevBlock()->setFont((ResFONT*)local_388);
    for (u8 i = 0; i < r28; i++) {
        param_0->getTevBlock()->setTevOrder(i, newTevOrder(index, i));
    }
    for (u8 i = 0; i < r28; i++) {
        J2DMaterialInitData* local_38c = &field_0x4[field_0x8[index]];
        param_0->getTevBlock()->setTevStage(i, newTevStage(index, i));
        if (local_38c->field_0xba[i] != 0xffff) {
            param_0->getTevBlock()->getTevStage(i)->setTexSel(field_0x48[local_38c->field_0xba[i]].mTexSel);
            param_0->getTevBlock()->getTevStage(i)->setRasSel(field_0x48[local_38c->field_0xba[i]].mRasSel);
        }
    }
    for (u8 i = 0; i < 4; i++) {
        param_0->getTevBlock()->setTevKColor(i, newTevKColor(index, i));
    }
    for (u8 i = 0; i < 4; i++) {
        J2DTevBlock* block = param_0->getTevBlock();
        block->setTevColor(i, newTevColor(index, i));
    }
    for (u8 i = 0; i < 4; i++) {
        param_0->getTevBlock()->setTevSwapModeTable(i, newTevSwapModeTable(index, i));
    }
    for (u8 i = 0; i < 2; i++) {
        param_0->getColorBlock()->setMatColor(i, newMatColor(index, i));
    }
    for (u8 i = 0; i < 4; i++) {
        param_0->getColorBlock()->setColorChan(i, newColorChan(index, i));
    }
    for (u8 i = 0; i < 8; i++) {
        param_0->getTexGenBlock()->setTexCoord(i, newTexCoord(index, i));
    }
    for (u8 i = 0; i < 8; i++) {
        param_0->getTexGenBlock()->setTexMtx(i, newTexMtx(index, i));
    }
    J2DMaterialInitData* local_394 = &field_0x4[field_0x8[index]];
    for (u8 i = 0; i < r28; i++) {
        param_0->getTevBlock()->setTevKColorSel(i, local_394->field_0x52[i]);
    }
    for (u8 i = 0; i < r28; i++) {
        param_0->getTevBlock()->setTevKAlphaSel(i, local_394->field_0x62[i]);
    }
    if (field_0xc != NULL || local_3c0 != 0) {
        u8 local_410 = newIndTexStageNum(index);
        param_0->mIndBlock->setIndTexStageNum(local_410);
        for (u8 i = 0; i < local_410; i++) {
            param_0->getIndBlock()->setIndTexMtx(i, newIndTexMtx(index, i));
        }
        for (u8 i = 0; i < local_410; i++) {
            param_0->getIndBlock()->setIndTexOrder(i, newIndTexOrder(index, i));
        }
        for (u8 i = 0; i < local_410; i++) {
            param_0->getIndBlock()->setIndTexCoordScale(i, newIndTexCoordScale(index, i));
        }
        for (u8 i = 0; i < r28; i++) {
            param_0->getTevBlock()->setIndTevStage(i, newIndTevStage(index, i));
        }
    }
    return param_0;
}

/* 802F362C-802F36CC 2EDF6C 00A0+00 1/1 0/0 0/0 .text newMatColor__18J2DMaterialFactoryCFii */
JUtility::TColor J2DMaterialFactory::newMatColor(int param_0, int param_1) const {
    GXColor color = {0xff,0xff,0xff,0xff};
    JUtility::TColor local_20 = GXColor(color);
    J2DMaterialInitData* iVar2 = &field_0x4[field_0x8[param_0]];
    if (iVar2->field_0x8[param_1] != 0xffff) {
        return field_0x10[iVar2->field_0x8[param_1]];
    }
    return local_20;
}

/* 802F36CC-802F3704 2EE00C 0038+00 1/1 0/0 0/0 .text newColorChanNum__18J2DMaterialFactoryCFi */
u8 J2DMaterialFactory::newColorChanNum(int param_0) const {
    J2DMaterialInitData* iVar2 = &field_0x4[field_0x8[param_0]];
    if (iVar2->field_0x2 != 0xff) {
        return field_0x14[iVar2->field_0x2];
    }
    return 0;
}

/* 802F3704-802F3758 2EE044 0054+00 1/1 0/0 0/0 .text newColorChan__18J2DMaterialFactoryCFii */
J2DColorChan J2DMaterialFactory::newColorChan(int param_0, int param_1) const {
    J2DMaterialInitData* iVar2 = &field_0x4[field_0x8[param_0]];
    if (iVar2->field_0xc[param_1] != 0xffff) {
        return J2DColorChan(field_0x18[iVar2->field_0xc[param_1]]);
    }
    return J2DColorChan();
}

/* 802F3758-802F3790 2EE098 0038+00 1/1 0/0 0/0 .text newTexGenNum__18J2DMaterialFactoryCFi */
u32 J2DMaterialFactory::newTexGenNum(int param_0) const {
    J2DMaterialInitData* iVar2 = &field_0x4[field_0x8[param_0]];
    if (iVar2->field_0x3 != 0xff) {
        return field_0x1c[iVar2->field_0x3];
    }
    return 0;
}

/* 802F3790-802F3804 2EE0D0 0074+00 1/1 0/0 0/0 .text newTexCoord__18J2DMaterialFactoryCFii */
J2DTexCoord J2DMaterialFactory::newTexCoord(int param_0, int param_1) const {
    J2DMaterialInitData* iVar2 = &field_0x4[field_0x8[param_0]];
    if (iVar2->field_0x14[param_1] != 0xffff) {
        return J2DTexCoord(field_0x20[iVar2->field_0x14[param_1]]);
    }
    return J2DTexCoord();
}

/* 802F3804-802F38E0 2EE144 00DC+00 1/1 0/0 0/0 .text            newTexMtx__18J2DMaterialFactoryCFii
 */
J2DTexMtx* J2DMaterialFactory::newTexMtx(int param_0, int param_1) const {
    J2DTexMtx* rv = NULL;
    J2DMaterialInitData* iVar2 = &field_0x4[field_0x8[param_0]];
    if (iVar2->field_0x24[param_1] != 0xffff) {
        rv = new J2DTexMtx(field_0x24[iVar2->field_0x24[param_1]]);
        rv->calc();
    }
    return rv;
}

/* 802F38E0-802F3920 2EE220 0040+00 1/1 0/0 0/0 .text newCullMode__18J2DMaterialFactoryCFi */
u8 J2DMaterialFactory::newCullMode(int param_0) const {
    J2DMaterialInitData* iVar2 = &field_0x4[field_0x8[param_0]];
    if (iVar2->field_0x1 != 0xff) {
        return field_0x30[iVar2->field_0x1];
    }
    return 0xff;
}

/* 802F3920-802F3968 2EE260 0048+00 1/1 0/0 0/0 .text            newTexNo__18J2DMaterialFactoryCFii
 */
u16 J2DMaterialFactory::newTexNo(int param_0, int param_1) const {
    J2DMaterialInitData* iVar2 = &field_0x4[field_0x8[param_0]];
    if (iVar2->field_0x38[param_1] != 0xffff) {
        return field_0x28[iVar2->field_0x38[param_1]];
    }
    return 0x1FFFF;
}

/* 802F3968-802F39A8 2EE2A8 0040+00 1/1 0/0 0/0 .text            newFontNo__18J2DMaterialFactoryCFi
 */
u16 J2DMaterialFactory::newFontNo(int param_0) const {
    J2DMaterialInitData* iVar2 = &field_0x4[field_0x8[param_0]];
    if (iVar2->field_0x48 != 0xffff) {
        return field_0x2c[iVar2->field_0x48];
    }
    return 0x1FFFF;
}

/* 802F39A8-802F3A1C 2EE2E8 0074+00 1/1 0/0 0/0 .text newTevOrder__18J2DMaterialFactoryCFii */
J2DTevOrder J2DMaterialFactory::newTevOrder(int param_0, int param_1) const {
    J2DMaterialInitData* iVar2 = &field_0x4[field_0x8[param_0]];
    if (iVar2->field_0x72[param_1] != 0xffff) {
        return J2DTevOrder(field_0x34[iVar2->field_0x72[param_1]]);
    }
    return J2DTevOrder();
}

/* 802F3A1C-802F3AB4 2EE35C 0098+00 1/1 0/0 0/0 .text newTevColor__18J2DMaterialFactoryCFii */
// NONMATCHING - J2DGXColorS10 init issues
J2DGXColorS10 J2DMaterialFactory::newTevColor(int param_0, int param_1) const {
    GXColorS10 color = {0, 0, 0, 0};
    J2DGXColorS10 rv = J2DGXColorS10(color);
    J2DMaterialInitData* iVar2 = &field_0x4[field_0x8[param_0]];
    if (iVar2->field_0x92[param_1] != 0xffff) {
        return field_0x38[iVar2->field_0x92[param_1]];
    }
    return rv;
}

/* ############################################################################################## */

/* 802F3AB4-802F3B54 2EE3F4 00A0+00 1/1 0/0 0/0 .text newTevKColor__18J2DMaterialFactoryCFii */
JUtility::TColor J2DMaterialFactory::newTevKColor(int param_0, int param_1) const {
    GXColor x = {0xFF, 0xFF, 0xFF, 0xFF};
    JUtility::TColor local_20 = GXColor(x);
    J2DMaterialInitData* iVar2 = &field_0x4[field_0x8[param_0]];
    if (iVar2->field_0x4a[param_1] != 0xffff) {
        return field_0x3c[iVar2->field_0x4a[param_1]];
    }
    return local_20;
}

/* 802F3B54-802F3B8C 2EE494 0038+00 1/1 0/0 0/0 .text newTevStageNum__18J2DMaterialFactoryCFi */
u8 J2DMaterialFactory::newTevStageNum(int param_0) const {
    J2DMaterialInitData* iVar2 = &field_0x4[field_0x8[param_0]];
    if (iVar2->field_0x4 != 0xff) {
        return field_0x40[iVar2->field_0x4];
    }
    return 0xFF;
}

/* 802F3B8C-802F3BEC 2EE4CC 0060+00 1/1 0/0 0/0 .text newTevStage__18J2DMaterialFactoryCFii */
J2DTevStage J2DMaterialFactory::newTevStage(int param_0, int param_1) const {
    J2DMaterialInitData* iVar2 = &field_0x4[field_0x8[param_0]];
    if (iVar2->field_0x9a[param_1] != 0xffff) {
        return J2DTevStage(field_0x44[iVar2->field_0x9a[param_1]]);
    }
    return J2DTevStage();
}

/* 802F3BEC-802F3C88 2EE52C 009C+00 1/1 0/0 0/0 .text
 * newTevSwapModeTable__18J2DMaterialFactoryCFii                */
J2DTevSwapModeTable J2DMaterialFactory::newTevSwapModeTable(int param_0, int param_1) const {
    J2DMaterialInitData* iVar2 = &field_0x4[field_0x8[param_0]];
    if (iVar2->field_0xda[param_1] != 0xffff) {
        return J2DTevSwapModeTable(field_0x4c[iVar2->field_0xda[param_1]]);
    }
    return J2DTevSwapModeTable(j2dDefaultTevSwapModeTable);
}

/* 802F3C88-802F3CB8 2EE5C8 0030+00 1/1 0/0 0/0 .text newIndTexStageNum__18J2DMaterialFactoryCFi
 */
u8 J2DMaterialFactory::newIndTexStageNum(int param_0) const {
    if (field_0xc != NULL) {
        if (field_0xc[param_0].field_0x0 == 1) {
            return field_0xc[param_0].field_0x1;
        }
    }
    return 0;
}

/* 802F3CB8-802F3D20 2EE5F8 0068+00 1/1 0/0 0/0 .text newIndTexOrder__18J2DMaterialFactoryCFii */
J2DIndTexOrder J2DMaterialFactory::newIndTexOrder(int param_0, int param_1) const {
    J2DIndTexOrder rv;
    if (field_0xc != NULL) {
        if (field_0xc[param_0].field_0x0 == 1) {
            return J2DIndTexOrder(field_0xc[param_0].field_0x4[param_1]);
        }
    }
    return rv;
}

/* 802F3D20-802F3E24 2EE660 0104+00 1/1 0/0 0/0 .text newIndTexMtx__18J2DMaterialFactoryCFii */
J2DIndTexMtx J2DMaterialFactory::newIndTexMtx(int param_0, int param_1) const {
    J2DIndTexMtx rv;
    if (field_0xc != NULL) {
        if (field_0xc[param_0].field_0x0 == 1) {
            return J2DIndTexMtx(field_0xc[param_0].field_0xc[param_1]);
        }
    }
    return rv;
}

/* 802F3E24-802F3F78 2EE764 0154+00 1/1 0/0 0/0 .text newIndTevStage__18J2DMaterialFactoryCFii */
J2DIndTevStage J2DMaterialFactory::newIndTevStage(int param_0, int param_1) const {
    J2DIndTevStage rv;
    if (field_0xc != NULL) {
        if (field_0xc[param_0].field_0x0 == 1) {
            return J2DIndTevStage(field_0xc[param_0].field_0x68[param_1]);
        }
    }
    return rv;
}

/* 802F3F78-802F3FE0 2EE8B8 0068+00 1/1 0/0 0/0 .text
 * newIndTexCoordScale__18J2DMaterialFactoryCFii                */
J2DIndTexCoordScale J2DMaterialFactory::newIndTexCoordScale(int param_0, int param_1) const {
    J2DIndTexCoordScale rv;
    if (field_0xc != NULL) {
        if (field_0xc[param_0].field_0x0 == 1) {
            return J2DIndTexCoordScale(field_0xc[param_0].field_0x60[param_1]);
        }
    }
    return rv;
}

/* 802F3FE0-802F405C 2EE920 007C+00 1/1 0/0 0/0 .text newAlphaComp__18J2DMaterialFactoryCFi */
J2DAlphaComp J2DMaterialFactory::newAlphaComp(int param_0) const {
    J2DMaterialInitData* iVar2 = &field_0x4[field_0x8[param_0]];
    if (iVar2->field_0xe2 != 0xffff) {
        return J2DAlphaComp(field_0x50[iVar2->field_0xe2]);
    }
    return J2DAlphaComp();
}

/* 802F405C-802F40D8 2EE99C 007C+00 1/1 0/0 0/0 .text            newBlend__18J2DMaterialFactoryCFi
 */
J2DBlend J2DMaterialFactory::newBlend(int param_0) const {
    J2DMaterialInitData* iVar2 = &field_0x4[field_0x8[param_0]];
    if (iVar2->field_0xe4 != 0xffff) {
        return J2DBlend(field_0x54[iVar2->field_0xe4]);
    }
    return J2DBlend();
}

/* 802F40D8-802F4110 2EEA18 0038+00 1/1 0/0 0/0 .text            newDither__18J2DMaterialFactoryCFi
 */
u8 J2DMaterialFactory::newDither(int param_0) const {
    J2DMaterialInitData* iVar2 = &field_0x4[field_0x8[param_0]];
    if (iVar2->field_0x5 != 0xff) {
        return field_0x58[iVar2->field_0x5];
    }
    return 0;
}

/* 802F4110-802F4170 2EEA50 0060+00 1/1 0/0 0/0 .text __ct__11J2DTevStageFRC15J2DTevStageInfo */
J2DTevStage::J2DTevStage(J2DTevStageInfo const& param_0) {
    setTevStageInfo(param_0);
    setTevSwapModeInfo(j2dDefaultTevSwapMode);
}
