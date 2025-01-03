/**
 * @file d_a_b_gm.cpp
 * 
*/

#include "d/actor/d_a_b_gm.h"
#include "d/d_cc_d.h"
#include "dol2asm.h"
#include "d/d_camera.h"
#include "d/actor/d_a_obj_ystone.h"




//
// Forward References:
//

extern "C" void __ct__12daB_GM_HIO_cFv();
extern "C" static void anm_init__FP10b_gm_classifUcf();
extern "C" static void nodeCallBack__FP8J3DJointi();
extern "C" static void daB_GM_Draw__FP10b_gm_class();
extern "C" void __dt__4cXyzFv();
extern "C" static void s_ko_del__FPvPv();
extern "C" static void damage_check__FP10b_gm_class();
extern "C" static void bg_check__FP10b_gm_class();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" static void s_ko_sub__FPvPv();
extern "C" static void s_ko2_move__FPvPv();
extern "C" static void s_ko2_get__FPvPv();
extern "C" static void s_ko_move__FPvPv();
extern "C" static void b_gm_wait__FP10b_gm_class();
extern "C" static void b_gm_move__FP10b_gm_class();
extern "C" static void b_gm_beam__FP10b_gm_class();
extern "C" static void b_gm_kogoma__FP10b_gm_class();
extern "C" static void b_gm_damage__FP10b_gm_class();
extern "C" static void b_gm_drop__FP10b_gm_class();
extern "C" static void action__FP10b_gm_class();
extern "C" static void foot_IK__FP10b_gm_classP9b_gm_foot();
extern "C" static void foot_IK_main__FP10b_gm_class();
extern "C" static void anm_se_set__FP10b_gm_class();
extern "C" static void cam_3d_morf__FP10b_gm_classf();
extern "C" static void cam_spd_set__FP10b_gm_class();
extern "C" static void demo_camera__FP10b_gm_class();
extern "C" static void daB_GM_Execute__FP10b_gm_class();
extern "C" static bool daB_GM_IsDelete__FP10b_gm_class();
extern "C" static void daB_GM_Delete__FP10b_gm_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daB_GM_Create__FP10fopAc_ac_c();
extern "C" void __ct__10b_gm_classFv();
extern "C" void __dt__9b_gm_footFv();
extern "C" void __ct__9b_gm_footFv();
extern "C" void __ct__8dCcD_SphFv();
extern "C" void __dt__8dCcD_SphFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__12daB_GM_HIO_cFv();
extern "C" void __sinit_d_a_b_gm_cpp();
extern "C" static void func_805F40C0();
extern "C" static void func_805F40C8();
extern "C" void setCurrentPos__16obj_ystone_classF4cXyz();
extern "C" static void dComIfGp_particle_set__FUsPC4cXyzPC5csXyzPC4cXyz();
extern "C" void changeDemoMode__9daPy_py_cFUliis();
extern "C" extern char const* const d_a_b_gm__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotS__FPA4_fs();
extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void
__ct__14mDoExt_McaMorfFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiiPvUlUl();
extern "C" void play__14mDoExt_McaMorfFP3VecUlSc();
extern "C" void entryDL__14mDoExt_McaMorfFv();
extern "C" void modelCalc__14mDoExt_McaMorfFv();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void updateDL__16mDoExt_McaMorfSOFv();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void cDmrNowMidnaTalk__Fv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopAcM_createChild__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void fopAcM_createItemForBoss__FPC4cXyziiPC5csXyzPC4cXyzffi();
extern "C" void fopAcM_createWarpHole__FPC4cXyzPC5csXyziUcUcUc();
extern "C" void fopAcM_createDisappear__FPC10fopAc_ac_cPC4cXyzUcUcUc();
extern "C" void fopAcM_effSmokeSet1__FPUlPUlPC4cXyzPC5csXyzfPC12dKy_tevstr_ci();
extern "C" void fopMsgM_messageSetDemo__FUl();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcSch_JudgeForPName__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGs_onOneZoneSwitch__Fii();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void onDungeonItem__12dSv_memBit_cFi();
extern "C" void isDungeonItem__12dSv_memBit_cCFi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void dEv_noFinishSkipProc__FPvi();
extern "C" void setSkipProc__14dEvt_control_cFPvPFPvi_ii();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void def_se_set__FP10Z2CreatureP8cCcD_ObjUlP10fopAc_ac_c();
extern "C" void cc_at_check__FP10fopAc_ac_cP11dCcU_AtInfo();
extern "C" void Start__9dCamera_cFv();
extern "C" void Stop__9dCamera_cFv();
extern "C" void SetTrimSize__9dCamera_cFl();
extern "C" void Set__9dCamera_cF4cXyz4cXyzfs();
extern "C" void Reset__9dCamera_cF4cXyz4cXyz();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_custom_colset__FUcUcf();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void __ct__5csXyzFsss();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxScale__FfffUc();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void bgmStart__8Z2SeqMgrFUlUll();
extern "C" void bgmStop__8Z2SeqMgrFUll();
extern "C" void subBgmStart__8Z2SeqMgrFUl();
extern "C" void subBgmStop__8Z2SeqMgrFv();
extern "C" void bgmStreamPrepare__8Z2SeqMgrFUl();
extern "C" void bgmStreamPlay__8Z2SeqMgrFv();
extern "C" void changeBgmStatus__8Z2SeqMgrFl();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void __construct_array();
extern "C" void _savegpr_19();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_19();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 805F4188-805F418C 000000 0004+00 18/18 0/0 0/0 .rodata          @3774 */
SECTION_RODATA static f32 const lit_3774 = 1.0f;
COMPILER_STRIP_GATE(0x805F4188, &lit_3774);

/* 805F418C-805F4190 000004 0004+00 0/1 0/0 0/0 .rodata          @3775 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3775 = 1.5f;
COMPILER_STRIP_GATE(0x805F418C, &lit_3775);
#pragma pop

/* 805F4190-805F4194 000008 0004+00 0/1 0/0 0/0 .rodata          @3776 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3776 = 35.0f;
COMPILER_STRIP_GATE(0x805F4190, &lit_3776);
#pragma pop

/* 805F4194-805F4198 00000C 0004+00 1/4 0/0 0/0 .rodata          @3777 */
SECTION_RODATA static f32 const lit_3777 = 15.0f;
COMPILER_STRIP_GATE(0x805F4194, &lit_3777);

/* 805F4198-805F419C 000010 0004+00 0/1 0/0 0/0 .rodata          @3778 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3778 = 1300.0f;
COMPILER_STRIP_GATE(0x805F4198, &lit_3778);
#pragma pop

/* 805F419C-805F41A0 000014 0004+00 0/1 0/0 0/0 .rodata          @3779 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3779 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x805F419C, &lit_3779);
#pragma pop

/* 805F41A0-805F41A4 000018 0004+00 1/4 0/0 0/0 .rodata          @3780 */
SECTION_RODATA static f32 const lit_3780 = -1.0f;
COMPILER_STRIP_GATE(0x805F41A0, &lit_3780);

/* 805F4390-805F439C 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 805F439C-805F43B0 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};
#pragma pop

/* 805F43B0-805F43B8 000020 0006+02 1/1 0/0 0/0 .data            name$4019 */
SECTION_DATA static u8 name_4019[6 + 2 /* padding */] = {
    0x8B,
    0x8C,
    0x8B,
    0x8D,
    0x8B,
    0x8E,
    /* padding */
    0x00,
    0x00,
};

/* 805F43B8-805F43C0 000028 0008+00 1/1 0/0 0/0 .data            name$4042 */
SECTION_DATA static u8 name_4042[8] = {
    0x8A, 0xF6, 0x8A, 0xF7, 0x8A, 0xF8, 0x8A, 0xF9,
};

/* 805F43C0-805F43EC -00001 002C+00 1/2 0/0 0/0 .data            @4354 */
SECTION_DATA static void* lit_4354[11] = {
    (void*)(((char*)b_gm_move__FP10b_gm_class) + 0x60),
    (void*)(((char*)b_gm_move__FP10b_gm_class) + 0x84),
    (void*)(((char*)b_gm_move__FP10b_gm_class) + 0x1A4),
    (void*)(((char*)b_gm_move__FP10b_gm_class) + 0x258),
    (void*)(((char*)b_gm_move__FP10b_gm_class) + 0x438),
    (void*)(((char*)b_gm_move__FP10b_gm_class) + 0x4F0),
    (void*)(((char*)b_gm_move__FP10b_gm_class) + 0x4F0),
    (void*)(((char*)b_gm_move__FP10b_gm_class) + 0x4F0),
    (void*)(((char*)b_gm_move__FP10b_gm_class) + 0x4F0),
    (void*)(((char*)b_gm_move__FP10b_gm_class) + 0x4F0),
    (void*)(((char*)b_gm_move__FP10b_gm_class) + 0x4DC),
};

/* 805F43EC-805F4444 -00001 0058+00 1/1 0/0 0/0 .data            @4619 */
SECTION_DATA static void* lit_4619[22] = {
    (void*)(((char*)b_gm_drop__FP10b_gm_class) + 0x44),
    (void*)(((char*)b_gm_drop__FP10b_gm_class) + 0x54),
    (void*)(((char*)b_gm_drop__FP10b_gm_class) + 0x130),
    (void*)(((char*)b_gm_drop__FP10b_gm_class) + 0x1C8),
    (void*)(((char*)b_gm_drop__FP10b_gm_class) + 0x27C),
    (void*)(((char*)b_gm_drop__FP10b_gm_class) + 0x374),
    (void*)(((char*)b_gm_drop__FP10b_gm_class) + 0x374),
    (void*)(((char*)b_gm_drop__FP10b_gm_class) + 0x374),
    (void*)(((char*)b_gm_drop__FP10b_gm_class) + 0x374),
    (void*)(((char*)b_gm_drop__FP10b_gm_class) + 0x374),
    (void*)(((char*)b_gm_drop__FP10b_gm_class) + 0x2B4),
    (void*)(((char*)b_gm_drop__FP10b_gm_class) + 0x2D0),
    (void*)(((char*)b_gm_drop__FP10b_gm_class) + 0x374),
    (void*)(((char*)b_gm_drop__FP10b_gm_class) + 0x374),
    (void*)(((char*)b_gm_drop__FP10b_gm_class) + 0x374),
    (void*)(((char*)b_gm_drop__FP10b_gm_class) + 0x374),
    (void*)(((char*)b_gm_drop__FP10b_gm_class) + 0x374),
    (void*)(((char*)b_gm_drop__FP10b_gm_class) + 0x374),
    (void*)(((char*)b_gm_drop__FP10b_gm_class) + 0x374),
    (void*)(((char*)b_gm_drop__FP10b_gm_class) + 0x374),
    (void*)(((char*)b_gm_drop__FP10b_gm_class) + 0x32C),
    (void*)(((char*)b_gm_drop__FP10b_gm_class) + 0x348),
};

/* 805F4444-805F4474 -00001 0030+00 1/1 0/0 0/0 .data            @4656 */
SECTION_DATA static void* lit_4656[12] = {
    (void*)(((char*)action__FP10b_gm_class) + 0x70),
    (void*)(((char*)action__FP10b_gm_class) + 0x7C),
    (void*)(((char*)action__FP10b_gm_class) + 0xB4),
    (void*)(((char*)action__FP10b_gm_class) + 0xB4),
    (void*)(((char*)action__FP10b_gm_class) + 0xB4),
    (void*)(((char*)action__FP10b_gm_class) + 0x88),
    (void*)(((char*)action__FP10b_gm_class) + 0x94),
    (void*)(((char*)action__FP10b_gm_class) + 0xB4),
    (void*)(((char*)action__FP10b_gm_class) + 0xB4),
    (void*)(((char*)action__FP10b_gm_class) + 0xB4),
    (void*)(((char*)action__FP10b_gm_class) + 0xA0),
    (void*)(((char*)action__FP10b_gm_class) + 0xAC),
};

/* 805F4474-805F449C 0000E4 0028+00 2/2 0/0 0/0 .data            top_j */
SECTION_DATA static u8 top_j[40] = {
    0x00, 0x00, 0x00, 0x1B, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00,
    0x00, 0x27, 0x00, 0x00, 0x00, 0x2B, 0x00, 0x00, 0x00, 0x2F, 0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x00, 0x37, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x41,
};

/* 805F449C-805F456C -00001 00D0+00 1/1 0/0 0/0 .data            @5519 */
SECTION_DATA static void* lit_5519[52] = {
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x6C),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x19C),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x2E8),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x3D4),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x5B8),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x624),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x758),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x7BC),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x8D0),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x9A4),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0xC24),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0xE54),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0xF20),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1048),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x122C),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1660),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1400),
    (void*)(((char*)demo_camera__FP10b_gm_class) + 0x1464),
};

/* 805F456C-805F4574 0001DC 0008+00 1/1 0/0 0/0 .data            name$5641 */
SECTION_DATA static u8 name_5641[8] = {
    0x8A, 0xF2, 0x8A, 0xF3, 0x8A, 0xF4, 0x8A, 0xF5,
};

/* 805F4574-805F45B4 0001E4 0040+00 0/1 0/0 0/0 .data            body_sph_src$6272 */
#pragma push
#pragma force_active on
static dCcD_SrcSph body_sph_src = {
    {
        {0x0, {{0x0, 0x0, 0xd}, {0xd8fbfdff, 0x43}, 0x75}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_METAL, 0x2, 0x0, 0x0, 0x3}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 40.0f} // mSph
    } // mSphAttr
};
#pragma pop

/* 805F45B4-805F45F4 000224 0040+00 0/1 0/0 0/0 .data            core_sph_src$6273 */
#pragma push
#pragma force_active on
static dCcD_SrcSph core_sph_src = {
    {
        {0x0, {{0x0, 0x0, 0xd}, {0x2000, 0x43}, 0x75}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 40.0f} // mSph
    } // mSphAttr
};
#pragma pop

/* 805F45F4-805F4634 000264 0040+00 0/1 0/0 0/0 .data            hand_sph_src$6274 */
#pragma push
#pragma force_active on
static dCcD_SrcSph hand_sph_src = {
    {
        {0x0, {{AT_TYPE_CSTATUE_SWING, 0x2, 0xd}, {0xd8fbfdff, 0x43}, 0x0}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_METAL, 0x2, 0x0, 0x0, 0x3}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 30.0f} // mSph
    } // mSphAttr
};
#pragma pop

/* 805F4634-805F4674 0002A4 0040+00 0/1 0/0 0/0 .data            foot_sph_src$6275 */
#pragma push
#pragma force_active on
static dCcD_SrcSph foot_sph_src = {
    {
        {0x0, {{AT_TYPE_CSTATUE_SWING, 0x1, 0x1f}, {0xd8fbfdff, 0x43}, 0x75}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_METAL, 0x2, 0x0, 0x0, 0x3}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 40.0f} // mSph
    } // mSphAttr
};
#pragma pop

/* 805F4674-805F46B4 0002E4 0040+00 0/1 0/0 0/0 .data            beam_sph_src$6276 */
#pragma push
#pragma force_active on
static dCcD_SrcSph beam_sph_src = {
    {
        {0x0, {{AT_TYPE_CSTATUE_SWING, 0x4, 0x1f}, {0x0, 0x0}, 0x0}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x1, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 20.0f} // mSph
    } // mSphAttr
};
#pragma pop

/* 805F46B4-805F46D4 -00001 0020+00 1/0 0/0 0/0 .data            l_daB_GM_Method */
static actor_method_class l_daB_GM_Method = {
    (process_method_func)daB_GM_Create__FP10fopAc_ac_c,
    (process_method_func)daB_GM_Delete__FP10b_gm_class,
    (process_method_func)daB_GM_Execute__FP10b_gm_class,
    (process_method_func)daB_GM_IsDelete__FP10b_gm_class,
    (process_method_func)daB_GM_Draw__FP10b_gm_class,
};

/* 805F46D4-805F4704 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_B_GM */
extern actor_process_profile_definition g_profile_B_GM = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_B_GM,              // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(b_gm_class),     // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  213,                    // mPriority
  &l_daB_GM_Method,       // sub_method
  0x00044000,             // mStatus
  fopAc_ENEMY_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 805F4704-805F4710 000374 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 805F4710-805F471C 000380 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 805F471C-805F4728 00038C 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 805F4728-805F4734 000398 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 805F4734-805F4740 0003A4 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 805F4740-805F4764 0003B0 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_805F40C8,
    (void*)NULL,
    (void*)NULL,
    (void*)func_805F40C0,
};

/* 805F4764-805F4770 0003D4 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 805F4770-805F477C 0003E0 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGPla */
SECTION_DATA extern void* __vt__8cM3dGPla[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGPlaFv,
};

/* 805F477C-805F4788 0003EC 000C+00 2/2 0/0 0/0 .data            __vt__12daB_GM_HIO_c */
SECTION_DATA extern void* __vt__12daB_GM_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daB_GM_HIO_cFv,
};

/* 805ED94C-805ED9FC 0000EC 00B0+00 1/1 0/0 0/0 .text            __ct__12daB_GM_HIO_cFv */
daB_GM_HIO_c::daB_GM_HIO_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805F41A4-805F41A8 00001C 0004+00 5/18 0/0 0/0 .rodata          @3794 */
SECTION_RODATA static u8 const lit_3794[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x805F41A4, &lit_3794);

/* 805F4388-805F4388 000200 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_805F4388 = "B_gm";
#pragma pop

/* 805ED9FC-805EDAA8 00019C 00AC+00 6/6 0/0 0/0 .text            anm_init__FP10b_gm_classifUcf */
static void anm_init(b_gm_class* param_0, int param_1, f32 param_2, u8 param_3, f32 param_4) {
    // NONMATCHING
}

/* 805EDAA8-805EDDA8 000248 0300+00 1/1 0/0 0/0 .text            nodeCallBack__FP8J3DJointi */
static void nodeCallBack(J3DJoint* param_0, int param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805F41A8-805F41AC 000020 0004+00 0/5 0/0 0/0 .rodata          @3987 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3987 = 400.0f;
COMPILER_STRIP_GATE(0x805F41A8, &lit_3987);
#pragma pop

/* 805F41AC-805F41B0 000024 0004+00 0/1 0/0 0/0 .rodata          @3988 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3988 = 3000.0f;
COMPILER_STRIP_GATE(0x805F41AC, &lit_3988);
#pragma pop

/* 805F41B0-805F41B4 000028 0004+00 0/3 0/0 0/0 .rodata          @3989 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3989 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x805F41B0, &lit_3989);
#pragma pop

/* 805F4790-805F4794 000008 0001+03 1/1 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 805F4794-805F4798 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 805F4798-805F479C 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 805F479C-805F47A0 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 805F47A0-805F47A4 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 805F47A4-805F47A8 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 805F47A8-805F47AC 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 805F47AC-805F47B0 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 805F47B0-805F47B4 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 805F47B4-805F47B8 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 805F47B8-805F47BC 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 805F47BC-805F47C0 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 805F47C0-805F47C4 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 805F47C4-805F47C8 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 805F47C8-805F47CC 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 805F47CC-805F47D0 -00001 0004+00 2/2 0/0 0/0 .bss             None */
/* 805F47CC 0001+00 data_805F47CC @1009 */
/* 805F47CD 0003+00 data_805F47CD None */
static u8 struct_805F47CC[4];

/* 805F47D0-805F47DC 000048 000C+00 0/1 0/0 0/0 .bss             @3769 */
#pragma push
#pragma force_active on
static u8 lit_3769[12];
#pragma pop

/* 805F47DC-805F4828 000054 004C+00 11/12 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[76];

/* 805EDDA8-805EE020 000548 0278+00 1/0 0/0 0/0 .text            daB_GM_Draw__FP10b_gm_class */
static void daB_GM_Draw(b_gm_class* param_0) {
    // NONMATCHING
}

/* 805EE020-805EE05C 0007C0 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
// cXyz::~cXyz() {
extern "C" void __dt__4cXyzFv() {
    // NONMATCHING
}

/* 805EE05C-805EE0B4 0007FC 0058+00 1/1 0/0 0/0 .text            s_ko_del__FPvPv */
static void s_ko_del(void* param_0, void* param_1) {
    // NONMATCHING
}

/* 805EE0B4-805EE438 000854 0384+00 1/1 0/0 0/0 .text            damage_check__FP10b_gm_class */
static void damage_check(b_gm_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805F41B4-805F41B8 00002C 0004+00 1/3 0/0 0/0 .rodata          @4154 */
SECTION_RODATA static f32 const lit_4154 = 180.0f;
COMPILER_STRIP_GATE(0x805F41B4, &lit_4154);

/* 805F41B8-805F41BC 000030 0004+00 0/1 0/0 0/0 .rodata          @4155 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4155 = 600.0f;
COMPILER_STRIP_GATE(0x805F41B8, &lit_4155);
#pragma pop

/* 805EE438-805EE5D8 000BD8 01A0+00 1/1 0/0 0/0 .text            bg_check__FP10b_gm_class */
static void bg_check(b_gm_class* param_0) {
    // NONMATCHING
}

/* 805EE5D8-805EE620 000D78 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGPlaFv */
// cM3dGPla::~cM3dGPla() {
extern "C" void __dt__8cM3dGPlaFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805F4828-805F482C 0000A0 0004+00 2/2 0/0 0/0 .bss             ko_ct */
static u8 ko_ct[4];

/* 805EE620-805EE678 000DC0 0058+00 1/1 0/0 0/0 .text            s_ko_sub__FPvPv */
static void s_ko_sub(void* param_0, void* param_1) {
    // NONMATCHING
}

/* 805EE678-805EE6E0 000E18 0068+00 1/1 0/0 0/0 .text            s_ko2_move__FPvPv */
static void s_ko2_move(void* param_0, void* param_1) {
    // NONMATCHING
}

/* 805EE6E0-805EE738 000E80 0058+00 1/1 0/0 0/0 .text            s_ko2_get__FPvPv */
static void s_ko2_get(void* param_0, void* param_1) {
    // NONMATCHING
}

/* 805EE738-805EE7B0 000ED8 0078+00 1/1 0/0 0/0 .text            s_ko_move__FPvPv */
static void s_ko_move(void* param_0, void* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805F41BC-805F41C0 000034 0004+00 0/2 0/0 0/0 .rodata          @4214 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4214 = 20.0f;
COMPILER_STRIP_GATE(0x805F41BC, &lit_4214);
#pragma pop

/* 805F41C0-805F41C4 000038 0004+00 0/4 0/0 0/0 .rodata          @4215 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4215 = 100.0f;
COMPILER_STRIP_GATE(0x805F41C0, &lit_4215);
#pragma pop

/* 805F41C4-805F41C8 00003C 0004+00 0/4 0/0 0/0 .rodata          @4216 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4216 = 4.0f;
COMPILER_STRIP_GATE(0x805F41C4, &lit_4216);
#pragma pop

/* 805EE7B0-805EE888 000F50 00D8+00 1/1 0/0 0/0 .text            b_gm_wait__FP10b_gm_class */
static void b_gm_wait(b_gm_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805F41C8-805F41CC 000040 0004+00 0/8 0/0 0/0 .rodata          @4341 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4341 = 10.0f;
COMPILER_STRIP_GATE(0x805F41C8, &lit_4341);
#pragma pop

/* 805F41CC-805F41D0 000044 0004+00 0/1 0/0 0/0 .rodata          @4342 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4342 = 17.0f / 10.0f;
COMPILER_STRIP_GATE(0x805F41CC, &lit_4342);
#pragma pop

/* 805F41D0-805F41D4 000048 0004+00 0/1 0/0 0/0 .rodata          @4343 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4343 = -16384.0f;
COMPILER_STRIP_GATE(0x805F41D0, &lit_4343);
#pragma pop

/* 805F41D4-805F41D8 00004C 0004+00 0/2 0/0 0/0 .rodata          @4344 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4344 = -32768.0f;
COMPILER_STRIP_GATE(0x805F41D4, &lit_4344);
#pragma pop

/* 805F41D8-805F41DC 000050 0004+00 0/1 0/0 0/0 .rodata          @4345 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4345 = -49152.0f;
COMPILER_STRIP_GATE(0x805F41D8, &lit_4345);
#pragma pop

/* 805F41DC-805F41E0 000054 0004+00 0/1 0/0 0/0 .rodata          @4346 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4346 = -65536.0f;
COMPILER_STRIP_GATE(0x805F41DC, &lit_4346);
#pragma pop

/* 805F41E0-805F41E8 000058 0004+04 0/0 0/0 0/0 .rodata          @4347 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4347[1 + 1 /* padding */] = {
    1024.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x805F41E0, &lit_4347);
#pragma pop

/* 805F41E8-805F41F0 000060 0008+00 0/2 0/0 0/0 .rodata          @4348 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4348[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x805F41E8, &lit_4348);
#pragma pop

/* 805F41F0-805F41F8 000068 0008+00 0/2 0/0 0/0 .rodata          @4349 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4349[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x805F41F0, &lit_4349);
#pragma pop

/* 805F41F8-805F4200 000070 0008+00 0/2 0/0 0/0 .rodata          @4350 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4350[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x805F41F8, &lit_4350);
#pragma pop

/* 805F4200-805F4204 000078 0004+00 0/3 0/0 0/0 .rodata          @4351 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4351 = 200.0f;
COMPILER_STRIP_GATE(0x805F4200, &lit_4351);
#pragma pop

/* 805F4204-805F4208 00007C 0004+00 0/3 0/0 0/0 .rodata          @4352 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4352 = 0.5f;
COMPILER_STRIP_GATE(0x805F4204, &lit_4352);
#pragma pop

/* 805F482C-805F4838 0000A4 000C+00 0/1 0/0 0/0 .bss             @4218 */
#pragma push
#pragma force_active on
static u8 lit_4218[12];
#pragma pop

/* 805F4838-805F4844 0000B0 000C+00 0/1 0/0 0/0 .bss             @4219 */
#pragma push
#pragma force_active on
static u8 lit_4219[12];
#pragma pop

/* 805F4844-805F4850 0000BC 000C+00 0/1 0/0 0/0 .bss             @4220 */
#pragma push
#pragma force_active on
static u8 lit_4220[12];
#pragma pop

/* 805F4850-805F485C 0000C8 000C+00 0/1 0/0 0/0 .bss             @4221 */
#pragma push
#pragma force_active on
static u8 lit_4221[12];
#pragma pop

/* 805F485C-805F488C 0000D4 0030+00 2/3 0/0 0/0 .bss             target_pos */
static u8 target_pos[48];

/* 805EE888-805EEE50 001028 05C8+00 2/2 0/0 0/0 .text            b_gm_move__FP10b_gm_class */
static void b_gm_move(b_gm_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805F4208-805F420C 000080 0004+00 0/0 0/0 0/0 .rodata          @4353 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4353 = 0x403F5C29;
COMPILER_STRIP_GATE(0x805F4208, &lit_4353);
#pragma pop

/* 805F420C-805F4210 000084 0004+00 0/2 0/0 0/0 .rodata          @4390 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4390 = 2.0f;
COMPILER_STRIP_GATE(0x805F420C, &lit_4390);
#pragma pop

/* 805F4210-805F4214 000088 0004+00 0/3 0/0 0/0 .rodata          @4391 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4391 = 5.0f;
COMPILER_STRIP_GATE(0x805F4210, &lit_4391);
#pragma pop

/* 805EEE50-805EF010 0015F0 01C0+00 1/1 0/0 0/0 .text            b_gm_beam__FP10b_gm_class */
static void b_gm_beam(b_gm_class* param_0) {
    // NONMATCHING
}

/* 805EF010-805EF504 0017B0 04F4+00 1/2 0/0 0/0 .text            b_gm_kogoma__FP10b_gm_class */
static void b_gm_kogoma(b_gm_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805F4214-805F4218 00008C 0004+00 0/2 0/0 0/0 .rodata          @4540 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4540 = 3.0f;
COMPILER_STRIP_GATE(0x805F4214, &lit_4540);
#pragma pop

/* 805F4218-805F421C 000090 0004+00 0/1 0/0 0/0 .rodata          @4541 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4541 = -100.0f;
COMPILER_STRIP_GATE(0x805F4218, &lit_4541);
#pragma pop

/* 805EF504-805EF630 001CA4 012C+00 1/1 0/0 0/0 .text            b_gm_damage__FP10b_gm_class */
static void b_gm_damage(b_gm_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805F421C-805F4220 000094 0004+00 0/1 0/0 0/0 .rodata          @4615 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4615 = 1200.0f;
COMPILER_STRIP_GATE(0x805F421C, &lit_4615);
#pragma pop

/* 805EF630-805EF9BC 001DD0 038C+00 2/1 0/0 0/0 .text            b_gm_drop__FP10b_gm_class */
static void b_gm_drop(b_gm_class* param_0) {
    // NONMATCHING
}

/* 805EF9BC-805EFB28 00215C 016C+00 2/1 0/0 0/0 .text            action__FP10b_gm_class */
static void action(b_gm_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805F4220-805F4224 000098 0004+00 0/1 0/0 0/0 .rodata          @4616 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4616 = -400.0f;
COMPILER_STRIP_GATE(0x805F4220, &lit_4616);
#pragma pop

/* 805F4224-805F4228 00009C 0004+00 0/1 0/0 0/0 .rodata          @4617 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4617 = 160.0f;
COMPILER_STRIP_GATE(0x805F4224, &lit_4617);
#pragma pop

/* 805F4228-805F422C 0000A0 0004+00 0/0 0/0 0/0 .rodata          @4618 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4618 = -30.0f;
COMPILER_STRIP_GATE(0x805F4228, &lit_4618);
#pragma pop

/* 805F422C-805F4230 0000A4 0004+00 0/2 0/0 0/0 .rodata          @4703 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4703 = 20000.0f;
COMPILER_STRIP_GATE(0x805F422C, &lit_4703);
#pragma pop

/* 805F4230-805F4234 0000A8 0004+00 0/2 0/0 0/0 .rodata          @4704 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4704 = 1000.0f;
COMPILER_STRIP_GATE(0x805F4230, &lit_4704);
#pragma pop

/* 805F4234-805F4238 0000AC 0004+00 0/2 0/0 0/0 .rodata          @4705 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4705 = 50.0f;
COMPILER_STRIP_GATE(0x805F4234, &lit_4705);
#pragma pop

/* 805EFB28-805EFDD4 0022C8 02AC+00 1/1 0/0 0/0 .text            foot_IK__FP10b_gm_classP9b_gm_foot
 */
static void foot_IK(b_gm_class* param_0, b_gm_foot* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805F488C-805F4898 000104 000C+00 0/1 0/0 0/0 .bss             @4708 */
#pragma push
#pragma force_active on
static u8 lit_4708[12];
#pragma pop

/* 805F4898-805F48A4 000110 000C+00 0/1 0/0 0/0 .bss             @4709 */
#pragma push
#pragma force_active on
static u8 lit_4709[12];
#pragma pop

/* 805F48A4-805F48B0 00011C 000C+00 0/1 0/0 0/0 .bss             @4710 */
#pragma push
#pragma force_active on
static u8 lit_4710[12];
#pragma pop

/* 805F48B0-805F48BC 000128 000C+00 0/1 0/0 0/0 .bss             @4711 */
#pragma push
#pragma force_active on
static u8 lit_4711[12];
#pragma pop

/* 805F48BC-805F48EC 000134 0030+00 1/2 0/0 0/0 .bss             top_pos_data */
static u8 top_pos_data[48];

/* 805EFDD4-805EFF50 002574 017C+00 1/1 0/0 0/0 .text            foot_IK_main__FP10b_gm_class */
static void foot_IK_main(b_gm_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805F4238-805F423C 0000B0 0004+00 0/1 0/0 0/0 .rodata          @4910 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4910 = 6.0f;
COMPILER_STRIP_GATE(0x805F4238, &lit_4910);
#pragma pop

/* 805F423C-805F4240 0000B4 0004+00 0/1 0/0 0/0 .rodata          @4911 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4911 = 8.0f;
COMPILER_STRIP_GATE(0x805F423C, &lit_4911);
#pragma pop

/* 805F4240-805F4244 0000B8 0004+00 0/1 0/0 0/0 .rodata          @4912 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4912 = 11.0f;
COMPILER_STRIP_GATE(0x805F4240, &lit_4912);
#pragma pop

/* 805F4244-805F4248 0000BC 0004+00 0/1 0/0 0/0 .rodata          @4913 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4913 = 14.0f;
COMPILER_STRIP_GATE(0x805F4244, &lit_4913);
#pragma pop

/* 805F4248-805F424C 0000C0 0004+00 0/1 0/0 0/0 .rodata          @4914 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4914 = 18.0f;
COMPILER_STRIP_GATE(0x805F4248, &lit_4914);
#pragma pop

/* 805F424C-805F4250 0000C4 0004+00 0/1 0/0 0/0 .rodata          @4915 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4915 = 19.0f;
COMPILER_STRIP_GATE(0x805F424C, &lit_4915);
#pragma pop

/* 805F4250-805F4254 0000C8 0004+00 0/1 0/0 0/0 .rodata          @4916 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4916 = 21.0f;
COMPILER_STRIP_GATE(0x805F4250, &lit_4916);
#pragma pop

/* 805F4254-805F4258 0000CC 0004+00 0/1 0/0 0/0 .rodata          @4917 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4917 = 23.0f;
COMPILER_STRIP_GATE(0x805F4254, &lit_4917);
#pragma pop

/* 805F4258-805F425C 0000D0 0004+00 0/1 0/0 0/0 .rodata          @4918 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4918 = 25.0f;
COMPILER_STRIP_GATE(0x805F4258, &lit_4918);
#pragma pop

/* 805F425C-805F4260 0000D4 0004+00 0/1 0/0 0/0 .rodata          @4919 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4919 = 26.0f;
COMPILER_STRIP_GATE(0x805F425C, &lit_4919);
#pragma pop

/* 805F4260-805F4264 0000D8 0004+00 0/1 0/0 0/0 .rodata          @4920 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4920 = 29.0f;
COMPILER_STRIP_GATE(0x805F4260, &lit_4920);
#pragma pop

/* 805EFF50-805F053C 0026F0 05EC+00 1/1 0/0 0/0 .text            anm_se_set__FP10b_gm_class */
static void anm_se_set(b_gm_class* param_0) {
    // NONMATCHING
}

/* 805F053C-805F0620 002CDC 00E4+00 1/1 0/0 0/0 .text            cam_3d_morf__FP10b_gm_classf */
static void cam_3d_morf(b_gm_class* param_0, f32 param_1) {
    // NONMATCHING
}

/* 805F0620-805F06C0 002DC0 00A0+00 1/1 0/0 0/0 .text            cam_spd_set__FP10b_gm_class */
static void cam_spd_set(b_gm_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805F4264-805F4268 0000DC 0004+00 0/1 0/0 0/0 .rodata          @5466 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5466 = 55.0f;
COMPILER_STRIP_GATE(0x805F4264, &lit_5466);
#pragma pop

/* 805F4268-805F426C 0000E0 0004+00 0/1 0/0 0/0 .rodata          @5467 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5467 = 2418.0f;
COMPILER_STRIP_GATE(0x805F4268, &lit_5467);
#pragma pop

/* 805F426C-805F4270 0000E4 0004+00 0/1 0/0 0/0 .rodata          @5468 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5468 = 130.0f;
COMPILER_STRIP_GATE(0x805F426C, &lit_5468);
#pragma pop

/* 805F4270-805F4274 0000E8 0004+00 0/1 0/0 0/0 .rodata          @5469 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5469 = 1883.0f;
COMPILER_STRIP_GATE(0x805F4270, &lit_5469);
#pragma pop

/* 805F4274-805F4278 0000EC 0004+00 0/1 0/0 0/0 .rodata          @5470 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5470 = 197.0f;
COMPILER_STRIP_GATE(0x805F4274, &lit_5470);
#pragma pop

/* 805F4278-805F427C 0000F0 0004+00 0/1 0/0 0/0 .rodata          @5471 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5471 = 2680.0f;
COMPILER_STRIP_GATE(0x805F4278, &lit_5471);
#pragma pop

/* 805F427C-805F4280 0000F4 0004+00 0/1 0/0 0/0 .rodata          @5472 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5472 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x805F427C, &lit_5472);
#pragma pop

/* 805F4280-805F4284 0000F8 0004+00 0/1 0/0 0/0 .rodata          @5473 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5473 = 1.0f / 25.0f;
COMPILER_STRIP_GATE(0x805F4280, &lit_5473);
#pragma pop

/* 805F4284-805F4288 0000FC 0004+00 0/1 0/0 0/0 .rodata          @5474 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5474 = -781.0f;
COMPILER_STRIP_GATE(0x805F4284, &lit_5474);
#pragma pop

/* 805F4288-805F428C 000100 0004+00 0/1 0/0 0/0 .rodata          @5475 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5475 = -601.0f;
COMPILER_STRIP_GATE(0x805F4288, &lit_5475);
#pragma pop

/* 805F428C-805F4290 000104 0004+00 0/1 0/0 0/0 .rodata          @5476 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5476 = -1267.0f;
COMPILER_STRIP_GATE(0x805F428C, &lit_5476);
#pragma pop

/* 805F4290-805F4294 000108 0004+00 0/1 0/0 0/0 .rodata          @5477 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5477 = -1208.0f;
COMPILER_STRIP_GATE(0x805F4290, &lit_5477);
#pragma pop

/* 805F4294-805F4298 00010C 0004+00 0/1 0/0 0/0 .rodata          @5478 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5478 = -1090.0f;
COMPILER_STRIP_GATE(0x805F4294, &lit_5478);
#pragma pop

/* 805F4298-805F429C 000110 0004+00 0/1 0/0 0/0 .rodata          @5479 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5479 = 227.0f;
COMPILER_STRIP_GATE(0x805F4298, &lit_5479);
#pragma pop

/* 805F429C-805F42A0 000114 0004+00 0/1 0/0 0/0 .rodata          @5480 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5480 = -1070.0f;
COMPILER_STRIP_GATE(0x805F429C, &lit_5480);
#pragma pop

/* 805F42A0-805F42A4 000118 0004+00 0/1 0/0 0/0 .rodata          @5481 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5481 = -688.0f;
COMPILER_STRIP_GATE(0x805F42A0, &lit_5481);
#pragma pop

/* 805F42A4-805F42A8 00011C 0004+00 0/1 0/0 0/0 .rodata          @5482 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5482 = 155.0f;
COMPILER_STRIP_GATE(0x805F42A4, &lit_5482);
#pragma pop

/* 805F42A8-805F42AC 000120 0004+00 0/1 0/0 0/0 .rodata          @5483 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5483 = -680.0f;
COMPILER_STRIP_GATE(0x805F42A8, &lit_5483);
#pragma pop

/* 805F06C0-805F1F58 002E60 1898+00 2/1 0/0 0/0 .text            demo_camera__FP10b_gm_class */
static void demo_camera(b_gm_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805F42AC-805F42B0 000124 0004+00 0/0 0/0 0/0 .rodata          @5484 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5484 = 317.0f;
COMPILER_STRIP_GATE(0x805F42AC, &lit_5484);
#pragma pop

/* 805F42B0-805F42B4 000128 0004+00 0/0 0/0 0/0 .rodata          @5485 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5485 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x805F42B0, &lit_5485);
#pragma pop

/* 805F42B4-805F42B8 00012C 0004+00 0/0 0/0 0/0 .rodata          @5486 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5486 = -973.0f;
COMPILER_STRIP_GATE(0x805F42B4, &lit_5486);
#pragma pop

/* 805F42B8-805F42BC 000130 0004+00 0/0 0/0 0/0 .rodata          @5487 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5487 = 192.0f;
COMPILER_STRIP_GATE(0x805F42B8, &lit_5487);
#pragma pop

/* 805F42BC-805F42C0 000134 0004+00 0/0 0/0 0/0 .rodata          @5488 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5488 = -991.0f;
COMPILER_STRIP_GATE(0x805F42BC, &lit_5488);
#pragma pop

/* 805F42C0-805F42C4 000138 0004+00 0/0 0/0 0/0 .rodata          @5489 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5489 = -1368.0f;
COMPILER_STRIP_GATE(0x805F42C0, &lit_5489);
#pragma pop

/* 805F42C4-805F42C8 00013C 0004+00 0/0 0/0 0/0 .rodata          @5490 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5490 = 158.0f;
COMPILER_STRIP_GATE(0x805F42C4, &lit_5490);
#pragma pop

/* 805F42C8-805F42CC 000140 0004+00 0/0 0/0 0/0 .rodata          @5491 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5491 = -1397.0f;
COMPILER_STRIP_GATE(0x805F42C8, &lit_5491);
#pragma pop

/* 805F42CC-805F42D0 000144 0004+00 0/0 0/0 0/0 .rodata          @5492 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5492 = 780.0f;
COMPILER_STRIP_GATE(0x805F42CC, &lit_5492);
#pragma pop

/* 805F42D0-805F42D4 000148 0004+00 0/1 0/0 0/0 .rodata          @5493 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5493 = 40.0f;
COMPILER_STRIP_GATE(0x805F42D0, &lit_5493);
#pragma pop

/* 805F42D4-805F42D8 00014C 0004+00 0/0 0/0 0/0 .rodata          @5494 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5494 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x805F42D4, &lit_5494);
#pragma pop

/* 805F42D8-805F42DC 000150 0004+00 0/0 0/0 0/0 .rodata          @5495 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5495 = 1.0f / 50.0f;
COMPILER_STRIP_GATE(0x805F42D8, &lit_5495);
#pragma pop

/* 805F42DC-805F42E0 000154 0004+00 0/0 0/0 0/0 .rodata          @5496 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5496 = 900.0f;
COMPILER_STRIP_GATE(0x805F42DC, &lit_5496);
#pragma pop

/* 805F42E0-805F42E4 000158 0004+00 0/0 0/0 0/0 .rodata          @5497 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5497 = -1500.0f;
COMPILER_STRIP_GATE(0x805F42E0, &lit_5497);
#pragma pop

/* 805F42E4-805F42E8 00015C 0004+00 0/0 0/0 0/0 .rodata          @5498 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5498 = -900.0f;
COMPILER_STRIP_GATE(0x805F42E4, &lit_5498);
#pragma pop

/* 805F42E8-805F42EC 000160 0004+00 0/0 0/0 0/0 .rodata          @5499 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5499 = 12.0f;
COMPILER_STRIP_GATE(0x805F42E8, &lit_5499);
#pragma pop

/* 805F42EC-805F42F0 000164 0004+00 0/0 0/0 0/0 .rodata          @5500 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5500 = 30.0f;
COMPILER_STRIP_GATE(0x805F42EC, &lit_5500);
#pragma pop

/* 805F42F0-805F42F4 000168 0004+00 0/1 0/0 0/0 .rodata          @5501 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5501 = 300.0f;
COMPILER_STRIP_GATE(0x805F42F0, &lit_5501);
#pragma pop

/* 805F42F4-805F42F8 00016C 0004+00 0/0 0/0 0/0 .rodata          @5502 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5502 = 350.0f;
COMPILER_STRIP_GATE(0x805F42F4, &lit_5502);
#pragma pop

/* 805F42F8-805F42FC 000170 0004+00 0/0 0/0 0/0 .rodata          @5503 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5503 = 1800.0f;
COMPILER_STRIP_GATE(0x805F42F8, &lit_5503);
#pragma pop

/* 805F42FC-805F4300 000174 0004+00 0/0 0/0 0/0 .rodata          @5504 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5504 = 1100.0f;
COMPILER_STRIP_GATE(0x805F42FC, &lit_5504);
#pragma pop

/* 805F4300-805F4304 000178 0004+00 0/0 0/0 0/0 .rodata          @5505 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5505 = -1000.0f;
COMPILER_STRIP_GATE(0x805F4300, &lit_5505);
#pragma pop

/* 805F4304-805F4308 00017C 0004+00 0/0 0/0 0/0 .rodata          @5506 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5506 = 230.0f;
COMPILER_STRIP_GATE(0x805F4304, &lit_5506);
#pragma pop

/* 805F4308-805F430C 000180 0004+00 0/0 0/0 0/0 .rodata          @5507 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5507 = 93.0f;
COMPILER_STRIP_GATE(0x805F4308, &lit_5507);
#pragma pop

/* 805F430C-805F4310 000184 0004+00 0/0 0/0 0/0 .rodata          @5508 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5508 = 65.0f;
COMPILER_STRIP_GATE(0x805F430C, &lit_5508);
#pragma pop

/* 805F4310-805F4314 000188 0004+00 0/0 0/0 0/0 .rodata          @5509 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5509 = 90.0f;
COMPILER_STRIP_GATE(0x805F4310, &lit_5509);
#pragma pop

/* 805F4314-805F4318 00018C 0004+00 0/0 0/0 0/0 .rodata          @5510 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5510 = 110.0f;
COMPILER_STRIP_GATE(0x805F4314, &lit_5510);
#pragma pop

/* 805F4318-805F431C 000190 0004+00 0/0 0/0 0/0 .rodata          @5511 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5511 = 140.0f;
COMPILER_STRIP_GATE(0x805F4318, &lit_5511);
#pragma pop

/* 805F431C-805F4320 000194 0004+00 0/0 0/0 0/0 .rodata          @5512 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5512 = 65536.0f;
COMPILER_STRIP_GATE(0x805F431C, &lit_5512);
#pragma pop

/* 805F4320-805F4324 000198 0004+00 0/0 0/0 0/0 .rodata          @5513 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5513 = 45.0f;
COMPILER_STRIP_GATE(0x805F4320, &lit_5513);
#pragma pop

/* 805F4324-805F4328 00019C 0004+00 0/0 0/0 0/0 .rodata          @5514 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5514 = 0x3A83126F;
COMPILER_STRIP_GATE(0x805F4324, &lit_5514);
#pragma pop

/* 805F4328-805F432C 0001A0 0004+00 0/1 0/0 0/0 .rodata          @5515 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5515 = 60.0f;
COMPILER_STRIP_GATE(0x805F4328, &lit_5515);
#pragma pop

/* 805F432C-805F4330 0001A4 0004+00 0/0 0/0 0/0 .rodata          @5516 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5516 = 7.0f / 10.0f;
COMPILER_STRIP_GATE(0x805F432C, &lit_5516);
#pragma pop

/* 805F4330-805F4334 0001A8 0004+00 0/0 0/0 0/0 .rodata          @5517 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5517 = -250.0f;
COMPILER_STRIP_GATE(0x805F4330, &lit_5517);
#pragma pop

/* 805F4334-805F4338 0001AC 0004+00 0/1 0/0 0/0 .rodata          @5518 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5518 = 120.0f;
COMPILER_STRIP_GATE(0x805F4334, &lit_5518);
#pragma pop

/* 805F4338-805F4340 0001B0 0008+00 0/1 0/0 0/0 .rodata          @5522 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5522[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x805F4338, &lit_5522);
#pragma pop

/* 805F4340-805F4344 0001B8 0004+00 0/1 0/0 0/0 .rodata          @6079 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6079 = 500.0f;
COMPILER_STRIP_GATE(0x805F4340, &lit_6079);
#pragma pop

/* 805F4344-805F4348 0001BC 0004+00 0/1 0/0 0/0 .rodata          @6080 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6080 = -20.0f;
COMPILER_STRIP_GATE(0x805F4344, &lit_6080);
#pragma pop

/* 805F4348-805F434C 0001C0 0004+00 0/1 0/0 0/0 .rodata          @6081 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6081 = 70.0f;
COMPILER_STRIP_GATE(0x805F4348, &lit_6081);
#pragma pop

/* 805F434C-805F4350 0001C4 0004+00 0/1 0/0 0/0 .rodata          @6082 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6082 = 170.0f;
COMPILER_STRIP_GATE(0x805F434C, &lit_6082);
#pragma pop

/* 805F4350-805F4354 0001C8 0004+00 0/1 0/0 0/0 .rodata          @6083 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6083 = 190.0f;
COMPILER_STRIP_GATE(0x805F4350, &lit_6083);
#pragma pop

/* 805F4354-805F4358 0001CC 0004+00 0/1 0/0 0/0 .rodata          @6084 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6084 = 150.0f;
COMPILER_STRIP_GATE(0x805F4354, &lit_6084);
#pragma pop

/* 805F4358-805F435C 0001D0 0004+00 0/1 0/0 0/0 .rodata          @6085 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6085 = -20000.0f;
COMPILER_STRIP_GATE(0x805F4358, &lit_6085);
#pragma pop

/* 805F435C-805F4360 0001D4 0004+00 0/1 0/0 0/0 .rodata          @6086 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6086 = 80.0f;
COMPILER_STRIP_GATE(0x805F435C, &lit_6086);
#pragma pop

/* 805F4360-805F4364 0001D8 0004+00 0/1 0/0 0/0 .rodata          @6087 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6087 = 6000.0f;
COMPILER_STRIP_GATE(0x805F4360, &lit_6087);
#pragma pop

/* 805F4364-805F4368 0001DC 0004+00 0/1 0/0 0/0 .rodata          @6088 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6088 = 2400.0f;
COMPILER_STRIP_GATE(0x805F4364, &lit_6088);
#pragma pop

/* 805F4368-805F436C 0001E0 0004+00 0/1 0/0 0/0 .rodata          @6089 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_6089 = 0x3C54FDF4;
COMPILER_STRIP_GATE(0x805F4368, &lit_6089);
#pragma pop

/* 805F1F58-805F30A0 0046F8 1148+00 2/1 0/0 0/0 .text            daB_GM_Execute__FP10b_gm_class */
static void daB_GM_Execute(b_gm_class* param_0) {
    // NONMATCHING
}

/* 805F30A0-805F30A8 005840 0008+00 1/0 0/0 0/0 .text            daB_GM_IsDelete__FP10b_gm_class */
static bool daB_GM_IsDelete(b_gm_class* param_0) {
    return true;
}

/* 805F30A8-805F3118 005848 0070+00 1/0 0/0 0/0 .text            daB_GM_Delete__FP10b_gm_class */
static void daB_GM_Delete(b_gm_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805F436C-805F4370 0001E4 0004+00 1/1 0/0 0/0 .rodata          @6249 */
SECTION_RODATA static f32 const lit_6249 = 3.0f / 5.0f;
COMPILER_STRIP_GATE(0x805F436C, &lit_6249);

/* 805F3118-805F3560 0058B8 0448+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
static void useHeapInit(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 805F3560-805F35A8 005D00 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
// J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" void __dt__12J3DFrameCtrlFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805F4370-805F4374 0001E8 0004+00 0/1 0/0 0/0 .rodata          @6363 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6363 = 31.0f;
COMPILER_STRIP_GATE(0x805F4370, &lit_6363);
#pragma pop

/* 805F4374-805F4378 0001EC 0004+00 0/1 0/0 0/0 .rodata          @6364 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6364 = 2520.0f;
COMPILER_STRIP_GATE(0x805F4374, &lit_6364);
#pragma pop

/* 805F35A8-805F38E4 005D48 033C+00 1/0 0/0 0/0 .text            daB_GM_Create__FP10fopAc_ac_c */
static void daB_GM_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 805F38E4-805F3AC0 006084 01DC+00 1/1 0/0 0/0 .text            __ct__10b_gm_classFv */
b_gm_class::b_gm_class() {
    // NONMATCHING
}

/* 805F3AC0-805F3AFC 006260 003C+00 1/1 0/0 0/0 .text            __dt__9b_gm_footFv */
b_gm_foot::~b_gm_foot() {
    // NONMATCHING
}

/* 805F3AFC-805F3B00 00629C 0004+00 1/1 0/0 0/0 .text            __ct__9b_gm_footFv */
b_gm_foot::b_gm_foot() {
    /* empty function */
}

/* 805F3B00-805F3B84 0062A0 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_SphFv */
// dCcD_Sph::dCcD_Sph() {
extern "C" void __ct__8dCcD_SphFv() {
    // NONMATCHING
}

/* 805F3B84-805F3C50 006324 00CC+00 1/1 0/0 0/0 .text            __dt__8dCcD_SphFv */
// dCcD_Sph::~dCcD_Sph() {
extern "C" void __dt__8dCcD_SphFv() {
    // NONMATCHING
}

/* 805F3C50-805F3C98 0063F0 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
// cM3dGSph::~cM3dGSph() {
extern "C" void __dt__8cM3dGSphFv() {
    // NONMATCHING
}

/* 805F3C98-805F3CE0 006438 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 805F3CE0-805F3D3C 006480 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 805F3D3C-805F3DAC 0064DC 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 805F3DAC-805F3E1C 00654C 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
// dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" void __dt__12dBgS_AcchCirFv() {
    // NONMATCHING
}

/* 805F3E1C-805F3E64 0065BC 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 805F3E64-805F3EAC 006604 0048+00 2/1 0/0 0/0 .text            __dt__12daB_GM_HIO_cFv */
daB_GM_HIO_c::~daB_GM_HIO_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805F4378-805F437C 0001F0 0004+00 0/1 0/0 0/0 .rodata          @6595 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6595 = -1350.0f;
COMPILER_STRIP_GATE(0x805F4378, &lit_6595);
#pragma pop

/* 805F437C-805F4380 0001F4 0004+00 0/1 0/0 0/0 .rodata          @6596 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6596 = 1350.0f;
COMPILER_STRIP_GATE(0x805F437C, &lit_6596);
#pragma pop

/* 805F4380-805F4384 0001F8 0004+00 0/1 0/0 0/0 .rodata          @6597 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6597 = 260.0f;
COMPILER_STRIP_GATE(0x805F4380, &lit_6597);
#pragma pop

/* 805F4384-805F4388 0001FC 0004+00 0/1 0/0 0/0 .rodata          @6598 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6598 = 280.0f;
COMPILER_STRIP_GATE(0x805F4384, &lit_6598);
#pragma pop

/* 805F3EAC-805F40C0 00664C 0214+00 0/0 1/0 0/0 .text            __sinit_d_a_b_gm_cpp */
void __sinit_d_a_b_gm_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x805F3EAC, __sinit_d_a_b_gm_cpp);
#pragma pop

/* 805F40C0-805F40C8 006860 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_805F40C0() {
    // NONMATCHING
}

/* 805F40C8-805F40D0 006868 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_805F40C8() {
    // NONMATCHING
}

/* 805F40D0-805F40EC 006870 001C+00 1/1 0/0 0/0 .text setCurrentPos__16obj_ystone_classF4cXyz */
// void obj_ystone_class::setCurrentPos(cXyz param_0) {
extern "C" void setCurrentPos__16obj_ystone_classF4cXyz() {
    // NONMATCHING
}

/* 805F40EC-805F4160 00688C 0074+00 1/1 0/0 0/0 .text
 * dComIfGp_particle_set__FUsPC4cXyzPC5csXyzPC4cXyz             */
static void dComIfGp_particle_set(u16 param_0, cXyz const* param_1, csXyz const* param_2,
                                      cXyz const* param_3) {
    // NONMATCHING
}

/* 805F4160-805F4174 006900 0014+00 1/1 0/0 0/0 .text            changeDemoMode__9daPy_py_cFUliis */
// void daPy_py_c::changeDemoMode(u32 param_0, int param_1, int param_2, s16 param_3) {
extern "C" void changeDemoMode__9daPy_py_cFUliis() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805F48EC-805F48F0 000164 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_805F48EC[4];
#pragma pop

/* 805F48F0-805F48F4 000168 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_805F48F0[4];
#pragma pop

/* 805F48F4-805F48F8 00016C 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_805F48F4[4];
#pragma pop

/* 805F48F8-805F48FC 000170 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_805F48F8[4];
#pragma pop

/* 805F48FC-805F4900 000174 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805F48FC[4];
#pragma pop

/* 805F4900-805F4904 000178 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805F4900[4];
#pragma pop

/* 805F4904-805F4908 00017C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_805F4904[4];
#pragma pop

/* 805F4908-805F490C 000180 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_805F4908[4];
#pragma pop

/* 805F490C-805F4910 000184 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_805F490C[4];
#pragma pop

/* 805F4910-805F4914 000188 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_805F4910[4];
#pragma pop

/* 805F4914-805F4918 00018C 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_805F4914[4];
#pragma pop

/* 805F4918-805F491C 000190 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_805F4918[4];
#pragma pop

/* 805F491C-805F4920 000194 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_805F491C[4];
#pragma pop

/* 805F4920-805F4924 000198 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805F4920[4];
#pragma pop

/* 805F4924-805F4928 00019C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_805F4924[4];
#pragma pop

/* 805F4928-805F492C 0001A0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_805F4928[4];
#pragma pop

/* 805F492C-805F4930 0001A4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_805F492C[4];
#pragma pop

/* 805F4930-805F4934 0001A8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_805F4930[4];
#pragma pop

/* 805F4934-805F4938 0001AC 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_805F4934[4];
#pragma pop

/* 805F4938-805F493C 0001B0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_805F4938[4];
#pragma pop

/* 805F493C-805F4940 0001B4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_805F493C[4];
#pragma pop

/* 805F4940-805F4944 0001B8 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805F4940[4];
#pragma pop

/* 805F4944-805F4948 0001BC 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805F4944[4];
#pragma pop

/* 805F4948-805F494C 0001C0 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805F4948[4];
#pragma pop

/* 805F494C-805F4950 0001C4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_805F494C[4];
#pragma pop

/* 805F4388-805F4388 000200 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
