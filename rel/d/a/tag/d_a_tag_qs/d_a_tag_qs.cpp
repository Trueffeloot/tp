/**
 * d_a_tag_qs.cpp
 * Tag - Quick Sand
*/

#include "rel/d/a/tag/d_a_tag_qs/d_a_tag_qs.h"
#include "d/cc/d_cc_d.h"
#include "dol2asm.h"
#include "d/com/d_com_inf_game.h"
#include "f_op/f_op_actor_mng.h"
#include "d/d_procname.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "d/a/d_a_item_static.h"
#include "SSystem/SComponent/c_math.h"

class daTagQs_c : public fopAc_ac_c {
public:
    /* 80D5DE78 */ ~daTagQs_c();
    /* 80D5DFB0 */ int create();
    /* 80D5E1FC */ f32 getPower();
    /* 80D5E220 */ f32 getSafeArea();
    /* 80D5E244 */ f32 getPower80();
    /* 80D5E268 */ f32 getCenterPower();
    /* 80D5E28C */ f32 calcPower(f32, f32);
    /* 80D5E9F8 */ int execute();
    /* 80D5EBF8 */ int draw();

    s32 getSwNo() { return fopAcM_GetParamBit(this, 1, 8); }
    u32 getType() { return fopAcM_GetParamBit(this, 0, 1); }

    /* 0x568 */ f32 field_0x568;
    /* 0x56C */ f32 field_0x56c;
    /* 0x570 */ s32 field_0x570;
    /* 0x574 */ s32 field_0x574;
    /* 0x578 */ dCcD_Cyl mCyl;
    /* 0x6B4 */ dCcD_Stts mStts;
};

//
// Forward References:
//

extern "C" void __dt__9daTagQs_cFv();
extern "C" void create__9daTagQs_cFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void getPower__9daTagQs_cFv();
extern "C" void getSafeArea__9daTagQs_cFv();
extern "C" void getPower80__9daTagQs_cFv();
extern "C" void getCenterPower__9daTagQs_cFv();
extern "C" void calcPower__9daTagQs_cFff();
extern "C" static void hikiyose__FP4cXyzP4cXyzP4cXyzf();
extern "C" static void search__FPvPv();
extern "C" void execute__9daTagQs_cFv();
extern "C" bool draw__9daTagQs_cFv();
extern "C" static void daTagQs_Draw__FP9daTagQs_c();
extern "C" static void daTagQs_Execute__FP9daTagQs_c();
extern "C" static bool daTagQs_IsDelete__FP9daTagQs_c();
extern "C" static void daTagQs_Delete__FP9daTagQs_c();
extern "C" static void daTagQs_Create__FP10fopAc_ac_c();
extern "C" void __dt__10cCcD_GSttsFv();

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGs_BossLife_public_Set__FSc();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getItemNo__12daItemBase_cFv();
extern "C" void startCtrl__8daItem_cFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void normalize__4cXyzFv();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndFX__Ff();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80D5ED44-80D5ED88 000000 0044+00 1/1 0/0 0/0 .data            l_cc_cyl_src */
static dCcD_SrcCyl l_cc_cyl_src = {
    {
        {0x0, {{AT_TYPE_CSTATUE_SWING, 0x0, 0x11}, {0x0, 0x0}, 0x0}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x5, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {0.0f, 0.0f, 0.0f}, // mCenter
        50.0f, // mRadius
        50.0f // mHeight
    } // mCyl
};

/* 80D5ED88-80D5EDA8 -00001 0020+00 1/0 0/0 0/0 .data            l_daTagQs_Method */
SECTION_DATA static void* l_daTagQs_Method[8] = {
    (void*)daTagQs_Create__FP10fopAc_ac_c,
    (void*)daTagQs_Delete__FP9daTagQs_c,
    (void*)daTagQs_Execute__FP9daTagQs_c,
    (void*)daTagQs_IsDelete__FP9daTagQs_c,
    (void*)daTagQs_Draw__FP9daTagQs_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D5EDA8-80D5EDD8 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_TAG_QS */
SECTION_DATA extern void* g_profile_TAG_QS[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02230000, (void*)&g_fpcLf_Method,
    (void*)0x000006F0, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01120000, (void*)&l_daTagQs_Method,
    (void*)0x00040000, (void*)NULL,
};

/* 80D5EDD8-80D5EDE4 000094 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80D5EDE4-80D5EDF0 0000A0 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80D5EDF0-80D5EDFC 0000AC 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80D5EDFC-80D5EE08 0000B8 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80D5DE78-80D5DFB0 000078 0138+00 1/1 0/0 0/0 .text            __dt__9daTagQs_cFv */
#ifdef NONMATCHING
daTagQs_c::~daTagQs_c() {}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTagQs_c::~daTagQs_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_qs/d_a_tag_qs/__dt__9daTagQs_cFv.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 80D5ECE0-80D5ECE4 000000 0004+00 5/5 0/0 0/0 .rodata          @3734 */
SECTION_RODATA static f32 const lit_3734 = 1.0f;
COMPILER_STRIP_GATE(0x80D5ECE0, &lit_3734);

/* 80D5ECE4-80D5ECE8 000004 0004+00 1/3 0/0 0/0 .rodata          @3735 */
SECTION_RODATA static f32 const lit_3735 = 20.0f;
COMPILER_STRIP_GATE(0x80D5ECE4, &lit_3735);

/* 80D5ECE8-80D5ECEC 000008 0004+00 0/1 0/0 0/0 .rodata          @3736 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3736 = 50.0f;
COMPILER_STRIP_GATE(0x80D5ECE8, &lit_3736);
#pragma pop

/* 80D5DFB0-80D5E110 0001B0 0160+00 1/1 0/0 0/0 .text            create__9daTagQs_cFv */
// Matches with literals and vtable
#ifdef NONMATCHING
int daTagQs_c::create() {
    fopAcM_SetupActor(this, daTagQs_c);

    f32 scale = getType() == 0 ? 1.0f : 20.0f;

    field_0x568 = mScale.x * 50.0f * scale;
    field_0x56c = mScale.y * 50.0f * scale;
    field_0x570 = 0;
    field_0x574 = 0;
    mStts.Init(0xff, 0, this);
    mCyl.Set(l_cc_cyl_src);
    mCyl.SetStts(&mStts);
    return cPhs_COMPLEATE_e;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daTagQs_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_qs/d_a_tag_qs/create__9daTagQs_cFv.s"
}
#pragma pop
#endif

/* 80D5E110-80D5E16C 000310 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_GStts::~dCcD_GStts() {
extern "C" asm void __dt__10dCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_qs/d_a_tag_qs/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80D5E16C-80D5E1B4 00036C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGCyl::~cM3dGCyl() {
extern "C" asm void __dt__8cM3dGCylFv() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_qs/d_a_tag_qs/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80D5E1B4-80D5E1FC 0003B4 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_qs/d_a_tag_qs/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80D5E1FC-80D5E220 0003FC 0024+00 2/2 0/0 0/0 .text            getPower__9daTagQs_cFv */
f32 daTagQs_c::getPower() {
    if (getType() == 0) {
        return 4.0f;
    } 
    return 5.0f;
}

/* 80D5E220-80D5E244 000420 0024+00 1/1 0/0 0/0 .text            getSafeArea__9daTagQs_cFv */
f32 daTagQs_c::getSafeArea() {
    if (getType() == 0) {
        return 0.8f;
    }
    return 0.5f;
}

/* 80D5E244-80D5E268 000444 0024+00 1/1 0/0 0/0 .text            getPower80__9daTagQs_cFv */
f32 daTagQs_c::getPower80() {
    if (getType() == 0) {
        return 6.0f;
    }
    return 10.0f;
}

/* ############################################################################################## */
/* 80D5ED04-80D5ED08 000024 0004+00 1/1 0/0 0/0 .rodata          @3843 */
SECTION_RODATA static f32 const lit_3843 = 12.0f;
COMPILER_STRIP_GATE(0x80D5ED04, &lit_3843);

/* 80D5E268-80D5E28C 000468 0024+00 1/1 0/0 0/0 .text            getCenterPower__9daTagQs_cFv */
// Matches with literals
#ifdef NONMATCHING
f32 daTagQs_c::getCenterPower() {
    if (getType() == 0) {
        return 12.0f;
    }
    return 20.0f;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm f32 daTagQs_c::getCenterPower() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_qs/d_a_tag_qs/getCenterPower__9daTagQs_cFv.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 80D5ED08-80D5ED10 000028 0004+04 0/2 0/0 0/0 .rodata          @3863 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3863[1 + 1 /* padding */] = {
    30.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80D5ED08, &lit_3863);
#pragma pop

/* 80D5ED10-80D5ED18 000030 0008+00 0/2 0/0 0/0 .rodata          @3865 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3865[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D5ED10, &lit_3865);
#pragma pop

/* 80D5E28C-80D5E3F8 00048C 016C+00 1/1 0/0 0/0 .text            calcPower__9daTagQs_cFff */
// Matches with literals
#ifdef NONMATCHING
f32 daTagQs_c::calcPower(f32 param_0, f32 param_1) {
    
    f32 fVar = 1.0f;
    if (getSwNo() != 0xff) {
        if (i_fopAcM_isSwitch(this, getSwNo())) {
            fVar = field_0x570 / 30.0f;
        } else {
            fVar = (0x1e - field_0x574) / 30.0f;
        }
    }
    if (param_1 > param_0 * 0.8f) {
        return fVar * getPower();
    }
    f32 power = getPower80() + (1.0f - (param_1 / (param_0 * getSafeArea()))) * (getCenterPower() - getPower80());
    return fVar * (power);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm f32 daTagQs_c::calcPower(f32 param_0, f32 param_1) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_qs/d_a_tag_qs/calcPower__9daTagQs_cFff.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 80D5ED18-80D5ED1C 000038 0004+00 0/2 0/0 0/0 .rodata          @3934 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3934[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80D5ED18, &lit_3934);
#pragma pop

/* 80D5ED1C-80D5ED20 00003C 0004+00 0/2 0/0 0/0 .rodata          @3935 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3935 = 100.0f;
COMPILER_STRIP_GATE(0x80D5ED1C, &lit_3935);
#pragma pop

/* 80D5ED20-80D5ED28 000040 0008+00 0/2 0/0 0/0 .rodata          @3936 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3936[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D5ED20, &lit_3936);
#pragma pop

/* 80D5ED28-80D5ED30 000048 0008+00 0/2 0/0 0/0 .rodata          @3937 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3937[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D5ED28, &lit_3937);
#pragma pop

/* 80D5ED30-80D5ED38 000050 0008+00 0/2 0/0 0/0 .rodata          @3938 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3938[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D5ED30, &lit_3938);
#pragma pop

/* 80D5E3F8-80D5E64C 0005F8 0254+00 1/1 0/0 0/0 .text            hikiyose__FP4cXyzP4cXyzP4cXyzf */
// Later
#ifdef NONMATCHING
// hikiyose = pull towards
static int hikiyose(cXyz* param_0, cXyz* param_1, cXyz* param_2, f32 param_3) {
    cXyz sub = *param_2 - *param_1;
    cXyz copy = sub;
    copy.y = 0.0f;
    f32 absf = fabsf(copy.getSquareMag());
    if (absf < 4.0f) {
        param_2->x = param_1->x + cM_rndFX(1.0f);
        param_2->y -= 0.5f;
        param_2->z = param_1->z + cM_rndFX(1.0f);
        param_0->y = param_2->y;
        if (param_2->y < param_1->y - 100.0f) {
            return 2;
        }
        return 1;
    }

    if (sub.abs() < param_3) {
        param_2->x = param_1->x;
        param_2->y = param_1->y;
        param_2->z = param_1->z;
    } else {
        sub.normalize();
        sub *= param_3;
        *param_2 += sub;
    }
    return 0;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void hikiyose(cXyz* param_0, cXyz* param_1, cXyz* param_2, f32 param_3) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_qs/d_a_tag_qs/hikiyose__FP4cXyzP4cXyzP4cXyzf.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 80D5ED38-80D5ED3C 000058 0004+00 0/1 0/0 0/0 .rodata          @4042 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4042 = 110.0f;
COMPILER_STRIP_GATE(0x80D5ED38, &lit_4042);
#pragma pop

/* 80D5ED3C-80D5ED40 00005C 0004+00 0/1 0/0 0/0 .rodata          @4043 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4043 = 9.0f / 10.0f;
COMPILER_STRIP_GATE(0x80D5ED3C, &lit_4043);
#pragma pop

/* 80D5E64C-80D5E9F8 00084C 03AC+00 1/1 0/0 0/0 .text            search__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void search(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_qs/d_a_tag_qs/search__FPvPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D5ED40-80D5ED44 000060 0004+00 0/1 0/0 0/0 .rodata          @4090 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4090 = -1.0f;
COMPILER_STRIP_GATE(0x80D5ED40, &lit_4090);
#pragma pop

/* 80D5E9F8-80D5EBF8 000BF8 0200+00 1/1 0/0 0/0 .text            execute__9daTagQs_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daTagQs_c::execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_qs/d_a_tag_qs/execute__9daTagQs_cFv.s"
}
#pragma pop

/* 80D5EBF8-80D5EC00 000DF8 0008+00 1/1 0/0 0/0 .text            draw__9daTagQs_cFv */
int daTagQs_c::draw() {
    return 1;
}

/* 80D5EC00-80D5EC20 000E00 0020+00 1/0 0/0 0/0 .text            daTagQs_Draw__FP9daTagQs_c */
static int daTagQs_Draw(daTagQs_c* i_this) {
    return i_this->draw();
}

/* 80D5EC20-80D5EC40 000E20 0020+00 1/0 0/0 0/0 .text            daTagQs_Execute__FP9daTagQs_c */
static int daTagQs_Execute(daTagQs_c* i_this) {
    return i_this->execute();
}

/* 80D5EC40-80D5EC48 000E40 0008+00 1/0 0/0 0/0 .text            daTagQs_IsDelete__FP9daTagQs_c */
static int daTagQs_IsDelete(daTagQs_c* i_this) {
    return 1;
}

/* 80D5EC48-80D5EC70 000E48 0028+00 1/0 0/0 0/0 .text            daTagQs_Delete__FP9daTagQs_c */
static int daTagQs_Delete(daTagQs_c* i_this) {
    i_this->~daTagQs_c();
    return 1;
}

/* 80D5EC70-80D5EC90 000E70 0020+00 1/0 0/0 0/0 .text            daTagQs_Create__FP10fopAc_ac_c */
static int daTagQs_Create(fopAc_ac_c* i_this) {
    return static_cast<daTagQs_c*>(i_this)->create();
}

/* 80D5EC90-80D5ECD8 000E90 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cCcD_GStts::~cCcD_GStts() {
extern "C" asm void __dt__10cCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_qs/d_a_tag_qs/__dt__10cCcD_GSttsFv.s"
}
#pragma pop
