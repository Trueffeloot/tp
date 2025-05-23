/**
 * @file d_a_e_rdb.cpp
 * 
*/

#include "d/actor/d_a_e_rdb.h"
#include "d/d_cc_d.h"
#include "dol2asm.h"
#include "d/d_camera.h"
UNK_REL_DATA;
#include "f_op/f_op_actor_enemy.h"


//
// Forward References:
//

extern "C" void __ct__13daE_RDB_HIO_cFv();
extern "C" static void anm_init__FP11e_rdb_classifUcf();
extern "C" static void nodeCallBack__FP8J3DJointi();
extern "C" static void daE_RDB_Draw__FP11e_rdb_class();
extern "C" static void mtx_to_posAngle__FPA4_fP4cXyzP5csXyz();
extern "C" static void player_way_check__FP11e_rdb_class();
extern "C" static void e_rdb_wait__FP11e_rdb_class();
extern "C" static void e_rdb_fight__FP11e_rdb_class();
extern "C" static void getPolyColor__FR13cBgS_PolyInfoiP8_GXColorP8_GXColorPUcPf();
extern "C" static void e_rdb_attack__FP11e_rdb_class();
extern "C" static void e_rdb_spin_attack__FP11e_rdb_class();
extern "C" static void e_rdb_defence__FP11e_rdb_class();
extern "C" static void e_rdb_damage__FP11e_rdb_class();
extern "C" static void e_rdb_end__FP11e_rdb_class();
extern "C" static void e_rdb_start__FP11e_rdb_class();
extern "C" static void damage_check__FP11e_rdb_class();
extern "C" static void shot_s_sub__FPvPv();
extern "C" static void action__FP11e_rdb_class();
extern "C" static void cam_3d_morf__FP11e_rdb_classf();
extern "C" static void cam_spd_set__FP11e_rdb_class();
extern "C" static void demo_camera__FP11e_rdb_class();
extern "C" static void anm_se_set__FP11e_rdb_class();
extern "C" static void daE_RDB_Execute__FP11e_rdb_class();
extern "C" static bool daE_RDB_IsDelete__FP11e_rdb_class();
extern "C" static void daE_RDB_Delete__FP11e_rdb_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daE_RDB_Create__FP10fopAc_ac_c();
extern "C" void __ct__11e_rdb_classFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__8dCcD_SphFv();
extern "C" void __ct__8dCcD_SphFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__13daE_RDB_HIO_cFv();
extern "C" void __sinit_d_a_e_rdb_cpp();
extern "C" static void func_8076AFE8();
extern "C" static void func_8076AFF0();
extern "C" void __dt__4cXyzFv();
extern "C" extern char const* const d_a_e_rdb__stringBase0;

//
// External References:
//

extern "C" void fadeOut__13mDoGph_gInf_cFfR8_GXColor();
extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void mDoMtx_MtxToRot__FPA4_CfP5csXyz();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void cDmrNowMidnaTalk__Fv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void fopAcM_effSmokeSet1__FPUlPUlPC4cXyzPC5csXyzfPC12dKy_tevstr_ci();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcSch_JudgeForPName__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGs_offOneZoneSwitch__Fii();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void onTbox__12dSv_memBit_cFi();
extern "C" void onDungeonItem__12dSv_memBit_cFi();
extern "C" void isDungeonItem__12dSv_memBit_cCFi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void dEv_noFinishSkipProc__FPvi();
extern "C" void setSkipProc__14dEvt_control_cFPvPFPvi_ii();
extern "C" void setHitMark__13dPa_control_cFUsP10fopAc_ac_cPC4cXyzPC5csXyzPC4cXyzUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void addReal__21dDlst_shadowControl_cFUlP8J3DModel();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void ChkPolySafe__4cBgSFRC13cBgS_PolyInfo();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void StartCAt__8dCcD_SphFR4cXyz();
extern "C" void MoveCAt__8dCcD_SphFR4cXyz();
extern "C" void cc_pl_cut_bit_get__Fv();
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
extern "C" void dKy_pol_eff_prim_get__FPC13cBgS_PolyInfoP8_GXColor();
extern "C" void dKy_pol_eff_env_get__FPC13cBgS_PolyInfoP8_GXColor();
extern "C" void dKy_pol_eff2_prim_get__FPC13cBgS_PolyInfoP8_GXColor();
extern "C" void dKy_pol_eff2_env_get__FPC13cBgS_PolyInfoP8_GXColor();
extern "C" void dKy_pol_eff_alpha_get__FPC13cBgS_PolyInfo();
extern "C" void dKy_pol_eff_ratio_get__FPC13cBgS_PolyInfo();
extern "C" void dKy_pol_eff2_alpha_get__FPC13cBgS_PolyInfo();
extern "C" void dKy_pol_eff2_ratio_get__FPC13cBgS_PolyInfo();
extern "C" void dKy_darkworld_check__Fv();
extern "C" void getStatus__12dMsgObject_cFv();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c();
extern "C" void doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci();
extern "C" void remove__10dMsgFlow_cFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ct__5csXyzFsss();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void subBgmStart__8Z2SeqMgrFUl();
extern "C" void subBgmStop__8Z2SeqMgrFv();
extern "C" void setDemoName__11Z2StatusMgrFPc();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecP3VecUcUcUc();
extern "C" void setLinkSearch__15Z2CreatureEnemyFb();
extern "C" void setEnemyName__15Z2CreatureEnemyFPCc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void __construct_array();
extern "C" void _savegpr_19();
extern "C" void _savegpr_20();
extern "C" void _savegpr_22();
extern "C" void _savegpr_23();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_19();
extern "C" void _restgpr_20();
extern "C" void _restgpr_22();
extern "C" void _restgpr_23();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" u8 m_midnaActor__9daPy_py_c[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 8076B488-8076B48C 00002C 0004+00 1/3 0/0 0/0 .rodata          @4028 */
SECTION_RODATA static f32 const lit_4028 = 31.0f / 20.0f;
COMPILER_STRIP_GATE(0x8076B488, &lit_4028);

/* 8076B730-8076B738 000038 0006+02 1/1 0/0 0/0 .data            ap_name$4291 */
SECTION_DATA static u8 ap_name_4291[6 + 2 /* padding */] = {
    0x8A,
    0x5C,
    0x8A,
    0x5D,
    0x8A,
    0x5E,
    /* padding */
    0x00,
    0x00,
};

/* 8076B738-8076B73C 000040 0004+00 1/1 0/0 0/0 .data            ap_name$4373 */
SECTION_DATA static u8 ap_name_4373[4] = {
    0x8A,
    0x5F,
    0x8A,
    0x60,
};

/* 8076B73C-8076B798 -00001 005C+00 1/1 0/0 0/0 .data            @4656 */
SECTION_DATA static void* lit_4656[23] = {
    (void*)(((char*)e_rdb_end__FP11e_rdb_class) + 0x8C),
    (void*)(((char*)e_rdb_end__FP11e_rdb_class) + 0xC0),
    (void*)(((char*)e_rdb_end__FP11e_rdb_class) + 0x434),
    (void*)(((char*)e_rdb_end__FP11e_rdb_class) + 0x228),
    (void*)(((char*)e_rdb_end__FP11e_rdb_class) + 0x24C),
    (void*)(((char*)e_rdb_end__FP11e_rdb_class) + 0x298),
    (void*)(((char*)e_rdb_end__FP11e_rdb_class) + 0x434),
    (void*)(((char*)e_rdb_end__FP11e_rdb_class) + 0x434),
    (void*)(((char*)e_rdb_end__FP11e_rdb_class) + 0x434),
    (void*)(((char*)e_rdb_end__FP11e_rdb_class) + 0x434),
    (void*)(((char*)e_rdb_end__FP11e_rdb_class) + 0x2A0),
    (void*)(((char*)e_rdb_end__FP11e_rdb_class) + 0x30C),
    (void*)(((char*)e_rdb_end__FP11e_rdb_class) + 0x434),
    (void*)(((char*)e_rdb_end__FP11e_rdb_class) + 0x434),
    (void*)(((char*)e_rdb_end__FP11e_rdb_class) + 0x434),
    (void*)(((char*)e_rdb_end__FP11e_rdb_class) + 0x434),
    (void*)(((char*)e_rdb_end__FP11e_rdb_class) + 0x434),
    (void*)(((char*)e_rdb_end__FP11e_rdb_class) + 0x434),
    (void*)(((char*)e_rdb_end__FP11e_rdb_class) + 0x434),
    (void*)(((char*)e_rdb_end__FP11e_rdb_class) + 0x434),
    (void*)(((char*)e_rdb_end__FP11e_rdb_class) + 0x344),
    (void*)(((char*)e_rdb_end__FP11e_rdb_class) + 0x398),
    (void*)(((char*)e_rdb_end__FP11e_rdb_class) + 0x424),
};

/* 8076B798-8076B7D0 -00001 0038+00 1/1 0/0 0/0 .data            @4730 */
SECTION_DATA static void* lit_4730[14] = {
    (void*)(((char*)e_rdb_start__FP11e_rdb_class) + 0x6C),
    (void*)(((char*)e_rdb_start__FP11e_rdb_class) + 0x374),
    (void*)(((char*)e_rdb_start__FP11e_rdb_class) + 0x8C),
    (void*)(((char*)e_rdb_start__FP11e_rdb_class) + 0xC0),
    (void*)(((char*)e_rdb_start__FP11e_rdb_class) + 0xC8),
    (void*)(((char*)e_rdb_start__FP11e_rdb_class) + 0xF0),
    (void*)(((char*)e_rdb_start__FP11e_rdb_class) + 0x374),
    (void*)(((char*)e_rdb_start__FP11e_rdb_class) + 0x168),
    (void*)(((char*)e_rdb_start__FP11e_rdb_class) + 0x374),
    (void*)(((char*)e_rdb_start__FP11e_rdb_class) + 0x374),
    (void*)(((char*)e_rdb_start__FP11e_rdb_class) + 0x17C),
    (void*)(((char*)e_rdb_start__FP11e_rdb_class) + 0x188),
    (void*)(((char*)e_rdb_start__FP11e_rdb_class) + 0x220),
    (void*)(((char*)e_rdb_start__FP11e_rdb_class) + 0x330),
};

/* 8076B7D0-8076B7F0 -00001 0020+00 1/1 0/0 0/0 .data            @5169 */
SECTION_DATA static void* lit_5169[8] = {
    (void*)(((char*)action__FP11e_rdb_class) + 0x88),
    (void*)(((char*)action__FP11e_rdb_class) + 0x9C),
    (void*)(((char*)action__FP11e_rdb_class) + 0xAC),
    (void*)(((char*)action__FP11e_rdb_class) + 0xBC),
    (void*)(((char*)action__FP11e_rdb_class) + 0xD0),
    (void*)(((char*)action__FP11e_rdb_class) + 0xE4),
    (void*)(((char*)action__FP11e_rdb_class) + 0xF8),
    (void*)(((char*)action__FP11e_rdb_class) + 0x108),
};

/* 8076B7F0-8076B830 -00001 0040+00 1/1 0/0 0/0 .data            @5653 */
SECTION_DATA static void* lit_5653[16] = {
    (void*)(((char*)demo_camera__FP11e_rdb_class) + 0xB98),
    (void*)(((char*)demo_camera__FP11e_rdb_class) + 0x68),
    (void*)(((char*)demo_camera__FP11e_rdb_class) + 0x114),
    (void*)(((char*)demo_camera__FP11e_rdb_class) + 0x340),
    (void*)(((char*)demo_camera__FP11e_rdb_class) + 0xB98),
    (void*)(((char*)demo_camera__FP11e_rdb_class) + 0xB98),
    (void*)(((char*)demo_camera__FP11e_rdb_class) + 0xB98),
    (void*)(((char*)demo_camera__FP11e_rdb_class) + 0xB98),
    (void*)(((char*)demo_camera__FP11e_rdb_class) + 0xB98),
    (void*)(((char*)demo_camera__FP11e_rdb_class) + 0xB98),
    (void*)(((char*)demo_camera__FP11e_rdb_class) + 0x3D4),
    (void*)(((char*)demo_camera__FP11e_rdb_class) + 0x4B8),
    (void*)(((char*)demo_camera__FP11e_rdb_class) + 0x774),
    (void*)(((char*)demo_camera__FP11e_rdb_class) + 0x854),
    (void*)(((char*)demo_camera__FP11e_rdb_class) + 0xA58),
    (void*)(((char*)demo_camera__FP11e_rdb_class) + 0xAA8),
};

/* 8076B830-8076B870 000138 0040+00 0/1 0/0 0/0 .data            cc_sph_src$6434 */
#pragma push
#pragma force_active on
static dCcD_SrcSph cc_sph_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0xd8fafdbf, 0x3}, 0x0}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x102}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 40.0f} // mSph
    } // mSphAttr
};
#pragma pop

/* 8076B870-8076B8B0 000178 0040+00 0/1 0/0 0/0 .data            at_sph_src$6435 */
#pragma push
#pragma force_active on
static dCcD_SrcSph at_sph_src = {
    {
        {0x0, {{AT_TYPE_CSTATUE_SWING, 0xc, 0xd}, {0xd8fafdbf, 0x3}, 0x0}}, // mObj
        {dCcD_SE_METAL, 0x0, 0x2, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x102}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 35.0f} // mSph
    } // mSphAttr
};
#pragma pop

/* 8076B8B0-8076B8F4 0001B8 0044+00 0/1 0/0 0/0 .data            co_cyl_src$6444 */
#pragma push
#pragma force_active on
static dCcD_SrcCyl co_cyl_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0x0, 0x0}, 0x75}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {0.0f, 0.0f, 0.0f}, // mCenter
        100.0f, // mRadius
        200.0f // mHeight
    } // mCyl
};
#pragma pop

/* 8076B8F4-8076B914 -00001 0020+00 1/0 0/0 0/0 .data            l_daE_RDB_Method */
static actor_method_class l_daE_RDB_Method = {
    (process_method_func)daE_RDB_Create__FP10fopAc_ac_c,
    (process_method_func)daE_RDB_Delete__FP11e_rdb_class,
    (process_method_func)daE_RDB_Execute__FP11e_rdb_class,
    (process_method_func)daE_RDB_IsDelete__FP11e_rdb_class,
    (process_method_func)daE_RDB_Draw__FP11e_rdb_class,
};

/* 8076B914-8076B944 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_E_RDB */
extern actor_process_profile_definition g_profile_E_RDB = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_E_RDB,             // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(e_rdb_class),    // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  156,                    // mPriority
  &l_daE_RDB_Method,      // sub_method
  0x00044100,             // mStatus
  fopAc_ENEMY_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 8076B944-8076B950 00024C 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 8076B950-8076B95C 000258 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 8076B95C-8076B968 000264 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 8076B968-8076B974 000270 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 8076B974-8076B980 00027C 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 8076B980-8076B98C 000288 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 8076B98C-8076B9B0 000294 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8076AFF0,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8076AFE8,
};

/* 8076B9B0-8076B9BC 0002B8 000C+00 2/2 0/0 0/0 .data            __vt__13daE_RDB_HIO_c */
SECTION_DATA extern void* __vt__13daE_RDB_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__13daE_RDB_HIO_cFv,
};

/* 807650CC-807650F0 0000EC 0024+00 1/1 0/0 0/0 .text            __ct__13daE_RDB_HIO_cFv */
daE_RDB_HIO_c::daE_RDB_HIO_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8076B48C-8076B490 000030 0004+00 1/3 0/0 0/0 .rodata          @4042 */
SECTION_RODATA static f32 const lit_4042 = -1.0f;
COMPILER_STRIP_GATE(0x8076B48C, &lit_4042);

/* 8076B6C4-8076B6C4 000268 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8076B6C4 = "E_rdb";
#pragma pop

/* 807650F0-8076519C 000110 00AC+00 9/9 0/0 0/0 .text            anm_init__FP11e_rdb_classifUcf */
static void anm_init(e_rdb_class* param_0, int param_1, f32 param_2, u8 param_3, f32 param_4) {
    // NONMATCHING
}

/* 8076519C-80765314 0001BC 0178+00 1/1 0/0 0/0 .text            nodeCallBack__FP8J3DJointi */
static void nodeCallBack(J3DJoint* param_0, int param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8076B490-8076B494 000034 0004+00 0/1 0/0 0/0 .rodata          @4169 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4169 = 1700.0f;
COMPILER_STRIP_GATE(0x8076B490, &lit_4169);
#pragma pop

/* 8076B494-8076B498 000038 0004+00 0/1 0/0 0/0 .rodata          @4170 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4170 = 2700.0f;
COMPILER_STRIP_GATE(0x8076B494, &lit_4170);
#pragma pop

/* 80765314-80765600 000334 02EC+00 1/0 0/0 0/0 .text            daE_RDB_Draw__FP11e_rdb_class */
static void daE_RDB_Draw(e_rdb_class* param_0) {
    // NONMATCHING
}

/* 80765600-8076563C 000620 003C+00 1/1 0/0 0/0 .text mtx_to_posAngle__FPA4_fP4cXyzP5csXyz */
static void mtx_to_posAngle(f32 (*param_0)[4], cXyz* param_1, csXyz* param_2) {
    // NONMATCHING
}

/* 8076563C-80765678 00065C 003C+00 1/1 0/0 0/0 .text            player_way_check__FP11e_rdb_class
 */
static void player_way_check(e_rdb_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8076B498-8076B49C 00003C 0004+00 0/4 0/0 0/0 .rodata          @4228 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4228 = 10.0f;
COMPILER_STRIP_GATE(0x8076B498, &lit_4228);
#pragma pop

/* 8076B49C-8076B4A0 000040 0004+00 0/3 0/0 0/0 .rodata          @4229 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4229 = 20.0f;
COMPILER_STRIP_GATE(0x8076B49C, &lit_4229);
#pragma pop

/* 8076B4A0-8076B4A4 000044 0004+00 0/6 0/0 0/0 .rodata          @4230 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4230 = 5.0f;
COMPILER_STRIP_GATE(0x8076B4A0, &lit_4230);
#pragma pop

/* 8076B4A4-8076B4A8 000048 0004+00 0/2 0/0 0/0 .rodata          @4231 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4231 = 350.0f;
COMPILER_STRIP_GATE(0x8076B4A4, &lit_4231);
#pragma pop

/* 8076B4A8-8076B4AC 00004C 0004+00 0/1 0/0 0/0 .rodata          @4232 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4232 = -2.0f;
COMPILER_STRIP_GATE(0x8076B4A8, &lit_4232);
#pragma pop

/* 8076B4AC-8076B4B0 000050 0004+00 0/3 0/0 0/0 .rodata          @4233 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4233 = 400.0f;
COMPILER_STRIP_GATE(0x8076B4AC, &lit_4233);
#pragma pop

/* 8076B4B0-8076B4B4 000054 0004+00 0/7 0/0 0/0 .rodata          @4234 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4234 = 3.0f;
COMPILER_STRIP_GATE(0x8076B4B0, &lit_4234);
#pragma pop

/* 8076B4B4-8076B4B8 000058 0004+00 0/1 0/0 0/0 .rodata          @4235 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4235 = 420.0f;
COMPILER_STRIP_GATE(0x8076B4B4, &lit_4235);
#pragma pop

/* 8076B4B8-8076B4BC 00005C 0004+00 0/1 0/0 0/0 .rodata          @4236 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4236 = 820.0f;
COMPILER_STRIP_GATE(0x8076B4B8, &lit_4236);
#pragma pop

/* 8076B6C4-8076B6C4 000268 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8076B6CA = "D_MN09";
#pragma pop

/* 80765678-807658E0 000698 0268+00 1/1 0/0 0/0 .text            e_rdb_wait__FP11e_rdb_class */
static void e_rdb_wait(e_rdb_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8076B4BC-8076B4C0 000060 0004+00 0/2 0/0 0/0 .rodata          @4263 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4263 = 700.0f;
COMPILER_STRIP_GATE(0x8076B4BC, &lit_4263);
#pragma pop

/* 8076B4C0-8076B4C4 000064 0004+00 0/3 0/0 0/0 .rodata          @4264 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4264 = 600.0f;
COMPILER_STRIP_GATE(0x8076B4C0, &lit_4264);
#pragma pop

/* 8076B4C4-8076B4C8 000068 0004+00 0/2 0/0 0/0 .rodata          @4265 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4265 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x8076B4C4, &lit_4265);
#pragma pop

/* 807658E0-80765A98 000900 01B8+00 1/1 0/0 0/0 .text            e_rdb_fight__FP11e_rdb_class */
static void e_rdb_fight(e_rdb_class* param_0) {
    // NONMATCHING
}

/* 80765A98-80765B70 000AB8 00D8+00 2/2 0/0 0/0 .text
 * getPolyColor__FR13cBgS_PolyInfoiP8_GXColorP8_GXColorPUcPf    */
static void getPolyColor(cBgS_PolyInfo& param_0, int param_1, _GXColor* param_2,
                             _GXColor* param_3, u8* param_4, f32* param_5) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8076B4C8-8076B4CC 00006C 0004+00 0/1 0/0 0/0 .rodata          @4352 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4352 = 0.5f;
COMPILER_STRIP_GATE(0x8076B4C8, &lit_4352);
#pragma pop

/* 80765B70-80765E70 000B90 0300+00 1/1 0/0 0/0 .text            e_rdb_attack__FP11e_rdb_class */
static void e_rdb_attack(e_rdb_class* param_0) {
    // NONMATCHING
}

/* 80765E70-80766188 000E90 0318+00 1/1 0/0 0/0 .text            e_rdb_spin_attack__FP11e_rdb_class
 */
static void e_rdb_spin_attack(e_rdb_class* param_0) {
    // NONMATCHING
}

/* 80766188-80766294 0011A8 010C+00 1/1 0/0 0/0 .text            e_rdb_defence__FP11e_rdb_class */
static void e_rdb_defence(e_rdb_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8076B4CC-8076B4D0 000070 0004+00 0/1 0/0 0/0 .rodata          @4540 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4540 = 0x409FAE14;
COMPILER_STRIP_GATE(0x8076B4CC, &lit_4540);
#pragma pop

/* 8076B4D0-8076B4D4 000074 0004+00 0/3 0/0 0/0 .rodata          @4541 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4541 = 2.0f;
COMPILER_STRIP_GATE(0x8076B4D0, &lit_4541);
#pragma pop

/* 80766294-807665B4 0012B4 0320+00 1/1 0/0 0/0 .text            e_rdb_damage__FP11e_rdb_class */
static void e_rdb_damage(e_rdb_class* param_0) {
    // NONMATCHING
}

/* 807665B4-80766A1C 0015D4 0468+00 2/1 0/0 0/0 .text            e_rdb_end__FP11e_rdb_class */
static void e_rdb_end(e_rdb_class* param_0) {
    // NONMATCHING
}

/* 80766A1C-80766DB4 001A3C 0398+00 2/1 0/0 0/0 .text            e_rdb_start__FP11e_rdb_class */
static void e_rdb_start(e_rdb_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8076B4D4-8076B4D8 000078 0004+00 0/0 0/0 0/0 .rodata          @4647 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4647 = 25.0f;
COMPILER_STRIP_GATE(0x8076B4D4, &lit_4647);
#pragma pop

/* 8076B4D8-8076B4DC 00007C 0004+00 0/0 0/0 0/0 .rodata          @4648 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4648 = -10.0f;
COMPILER_STRIP_GATE(0x8076B4D8, &lit_4648);
#pragma pop

/* 8076B4DC-8076B4E0 000080 0004+00 0/0 0/0 0/0 .rodata          @4649 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4649 = 2.5f;
COMPILER_STRIP_GATE(0x8076B4DC, &lit_4649);
#pragma pop

/* 8076B4E0-8076B4E4 000084 0004+00 0/1 0/0 0/0 .rodata          @4650 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4650 = 40.0f;
COMPILER_STRIP_GATE(0x8076B4E0, &lit_4650);
#pragma pop

/* 8076B4E4-8076B4E8 000088 0004+00 0/0 0/0 0/0 .rodata          @4651 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4651 = 1470.0f;
COMPILER_STRIP_GATE(0x8076B4E4, &lit_4651);
#pragma pop

/* 8076B4E8-8076B4EC 00008C 0004+00 0/0 0/0 0/0 .rodata          @4652 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4652 = 2130.0f;
COMPILER_STRIP_GATE(0x8076B4E8, &lit_4652);
#pragma pop

/* 8076B4EC-8076B4F0 000090 0004+00 0/2 0/0 0/0 .rodata          @4653 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4653 = 200.0f;
COMPILER_STRIP_GATE(0x8076B4EC, &lit_4653);
#pragma pop

/* 8076B4F0-8076B4F4 000094 0004+00 0/0 0/0 0/0 .rodata          @4654 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4654 = 5000.0f;
COMPILER_STRIP_GATE(0x8076B4F0, &lit_4654);
#pragma pop

/* 8076B4F4-8076B4F8 000098 0004+00 0/0 0/0 0/0 .rodata          @4725 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4725 = 20000.0f;
COMPILER_STRIP_GATE(0x8076B4F4, &lit_4725);
#pragma pop

/* 8076B4F8-8076B4FC 00009C 0004+00 0/1 0/0 0/0 .rodata          @4726 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4726 = 500.0f;
COMPILER_STRIP_GATE(0x8076B4F8, &lit_4726);
#pragma pop

/* 8076B4FC-8076B500 0000A0 0004+00 0/0 0/0 0/0 .rodata          @4727 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4727 = 2000.0f;
COMPILER_STRIP_GATE(0x8076B4FC, &lit_4727);
#pragma pop

/* 8076B500-8076B504 0000A4 0004+00 0/0 0/0 0/0 .rodata          @4728 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4728 = 3.5f;
COMPILER_STRIP_GATE(0x8076B500, &lit_4728);
#pragma pop

/* 8076B504-8076B508 0000A8 0004+00 0/2 0/0 0/0 .rodata          @4853 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4853 = 12.0f;
COMPILER_STRIP_GATE(0x8076B504, &lit_4853);
#pragma pop

/* 8076B508-8076B50C 0000AC 0004+00 0/1 0/0 0/0 .rodata          @4854 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4854 = 120.0f;
COMPILER_STRIP_GATE(0x8076B508, &lit_4854);
#pragma pop

/* 8076B50C-8076B510 0000B0 0004+00 0/1 0/0 0/0 .rodata          @4855 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4855 = 190.0f;
COMPILER_STRIP_GATE(0x8076B50C, &lit_4855);
#pragma pop

/* 8076B510-8076B514 0000B4 0004+00 0/3 0/0 0/0 .rodata          @4856 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4856 = 150.0f;
COMPILER_STRIP_GATE(0x8076B510, &lit_4856);
#pragma pop

/* 80766DB4-80767294 001DD4 04E0+00 1/1 0/0 0/0 .text            damage_check__FP11e_rdb_class */
static void damage_check(e_rdb_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8076B514-8076B518 0000B8 0004+00 0/1 0/0 0/0 .rodata          @4904 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4904 = 1000.0f;
COMPILER_STRIP_GATE(0x8076B514, &lit_4904);
#pragma pop

/* 80767294-80767428 0022B4 0194+00 1/1 0/0 0/0 .text            shot_s_sub__FPvPv */
static void shot_s_sub(void* param_0, void* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8076B9C8-8076B9CC 000008 0001+03 1/1 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 8076B9CC-8076B9D0 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 8076B9D0-8076B9D4 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 8076B9D4-8076B9D8 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 8076B9D8-8076B9DC 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 8076B9DC-8076B9E0 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 8076B9E0-8076B9E4 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 8076B9E4-8076B9E8 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 8076B9E8-8076B9EC 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 8076B9EC-8076B9F0 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 8076B9F0-8076B9F4 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 8076B9F4-8076B9F8 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 8076B9F8-8076B9FC 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 8076B9FC-8076BA00 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 8076BA00-8076BA04 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 8076BA04-8076BA08 -00001 0004+00 2/2 0/0 0/0 .bss             None */
/* 8076BA04 0001+00 data_8076BA04 @1009 */
/* 8076BA05 0003+00 data_8076BA05 None */
static u8 struct_8076BA04[4];

/* 8076BA08-8076BA14 000048 000C+00 1/1 0/0 0/0 .bss             @4023 */
static u8 lit_4023[12];

/* 8076BA14-8076BA20 000054 000C+00 3/4 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[12];

/* 80767428-80767CD0 002448 08A8+00 2/1 0/0 0/0 .text            action__FP11e_rdb_class */
static void action(e_rdb_class* param_0) {
    // NONMATCHING
}

/* 80767CD0-80767DB4 002CF0 00E4+00 1/1 0/0 0/0 .text            cam_3d_morf__FP11e_rdb_classf */
static void cam_3d_morf(e_rdb_class* param_0, f32 param_1) {
    // NONMATCHING
}

/* 80767DB4-80767E54 002DD4 00A0+00 1/1 0/0 0/0 .text            cam_spd_set__FP11e_rdb_class */
static void cam_spd_set(e_rdb_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8076B518-8076B51C 0000BC 0004+00 0/0 0/0 0/0 .rodata          @5163 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5163 = -5.0f;
COMPILER_STRIP_GATE(0x8076B518, &lit_5163);
#pragma pop

/* 8076B51C-8076B520 0000C0 0004+00 0/0 0/0 0/0 .rodata          @5164 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5164 = 36.0f / 25.0f;
COMPILER_STRIP_GATE(0x8076B51C, &lit_5164);
#pragma pop

/* 8076B520-8076B524 0000C4 0004+00 0/1 0/0 0/0 .rodata          @5165 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5165 = -80.0f;
COMPILER_STRIP_GATE(0x8076B520, &lit_5165);
#pragma pop

/* 8076B524-8076B528 0000C8 0004+00 0/1 0/0 0/0 .rodata          @5166 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5166 = -150.0f;
COMPILER_STRIP_GATE(0x8076B524, &lit_5166);
#pragma pop

/* 8076B528-8076B52C 0000CC 0004+00 0/3 0/0 0/0 .rodata          @5167 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5167 = 50.0f;
COMPILER_STRIP_GATE(0x8076B528, &lit_5167);
#pragma pop

/* 8076B52C-8076B534 0000D0 0004+04 0/1 0/0 0/0 .rodata          @5168 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5168[1 + 1 /* padding */] = {
    1.5f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x8076B52C, &lit_5168);
#pragma pop

/* 8076B534-8076B53C 0000D8 0008+00 0/1 0/0 0/0 .rodata          @5171 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5171[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8076B534, &lit_5171);
#pragma pop

/* 8076B53C-8076B540 0000E0 0004+00 0/1 0/0 0/0 .rodata          @5616 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5616 = 55.0f;
COMPILER_STRIP_GATE(0x8076B53C, &lit_5616);
#pragma pop

/* 8076B540-8076B544 0000E4 0004+00 0/1 0/0 0/0 .rodata          @5617 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5617 = 330.0f;
COMPILER_STRIP_GATE(0x8076B540, &lit_5617);
#pragma pop

/* 8076B544-8076B548 0000E8 0004+00 0/1 0/0 0/0 .rodata          @5618 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5618 = 140.0f;
COMPILER_STRIP_GATE(0x8076B544, &lit_5618);
#pragma pop

/* 8076B548-8076B54C 0000EC 0004+00 0/2 0/0 0/0 .rodata          @5619 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5619 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x8076B548, &lit_5619);
#pragma pop

/* 8076B54C-8076B550 0000F0 0004+00 0/1 0/0 0/0 .rodata          @5620 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5620 = -7627.0f;
COMPILER_STRIP_GATE(0x8076B54C, &lit_5620);
#pragma pop

/* 8076B550-8076B554 0000F4 0004+00 0/1 0/0 0/0 .rodata          @5621 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5621 = 153.0f;
COMPILER_STRIP_GATE(0x8076B550, &lit_5621);
#pragma pop

/* 8076B554-8076B558 0000F8 0004+00 0/1 0/0 0/0 .rodata          @5622 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5622 = -5371.0f;
COMPILER_STRIP_GATE(0x8076B554, &lit_5622);
#pragma pop

/* 8076B558-8076B55C 0000FC 0004+00 0/1 0/0 0/0 .rodata          @5623 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5623 = -7470.0f;
COMPILER_STRIP_GATE(0x8076B558, &lit_5623);
#pragma pop

/* 8076B55C-8076B560 000100 0004+00 0/1 0/0 0/0 .rodata          @5624 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5624 = 144.0f;
COMPILER_STRIP_GATE(0x8076B55C, &lit_5624);
#pragma pop

/* 8076B560-8076B564 000104 0004+00 0/1 0/0 0/0 .rodata          @5625 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5625 = -5071.0f;
COMPILER_STRIP_GATE(0x8076B560, &lit_5625);
#pragma pop

/* 8076B6C4-8076B6C4 000268 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8076B6D1 = "force_start";
SECTION_DEAD static char const* const stringBase_8076B6DD = "force_end";
#pragma pop

/* 80767E54-80768B90 002E74 0D3C+00 2/1 0/0 0/0 .text            demo_camera__FP11e_rdb_class */
static void demo_camera(e_rdb_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8076B564-8076B568 000108 0004+00 0/0 0/0 0/0 .rodata          @5626 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5626 = 3.0f / 100.0f;
COMPILER_STRIP_GATE(0x8076B564, &lit_5626);
#pragma pop

/* 8076B568-8076B56C 00010C 0004+00 0/0 0/0 0/0 .rodata          @5627 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5627 = 0x3B449BA6;
COMPILER_STRIP_GATE(0x8076B568, &lit_5627);
#pragma pop

/* 8076B56C-8076B570 000110 0004+00 0/0 0/0 0/0 .rodata          @5628 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5628 = 230.0f;
COMPILER_STRIP_GATE(0x8076B56C, &lit_5628);
#pragma pop

/* 8076B570-8076B574 000114 0004+00 0/0 0/0 0/0 .rodata          @5629 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5629 = 220.0f;
COMPILER_STRIP_GATE(0x8076B570, &lit_5629);
#pragma pop

/* 8076B574-8076B578 000118 0004+00 0/1 0/0 0/0 .rodata          @5630 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5630 = 30.0f;
COMPILER_STRIP_GATE(0x8076B574, &lit_5630);
#pragma pop

/* 8076B578-8076B57C 00011C 0004+00 0/1 0/0 0/0 .rodata          @5631 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5631 = 300.0f;
COMPILER_STRIP_GATE(0x8076B578, &lit_5631);
#pragma pop

/* 8076B57C-8076B580 000120 0004+00 0/0 0/0 0/0 .rodata          @5632 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5632 = 145.0f;
COMPILER_STRIP_GATE(0x8076B57C, &lit_5632);
#pragma pop

/* 8076B580-8076B584 000124 0004+00 0/0 0/0 0/0 .rodata          @5633 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5633 = 170.0f;
COMPILER_STRIP_GATE(0x8076B580, &lit_5633);
#pragma pop

/* 8076B584-8076B588 000128 0004+00 0/0 0/0 0/0 .rodata          @5634 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5634 = 70.0f;
COMPILER_STRIP_GATE(0x8076B584, &lit_5634);
#pragma pop

/* 8076B588-8076B58C 00012C 0004+00 0/1 0/0 0/0 .rodata          @5635 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5635 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x8076B588, &lit_5635);
#pragma pop

/* 8076B58C-8076B590 000130 0004+00 0/0 0/0 0/0 .rodata          @5636 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5636 = 0.25f;
COMPILER_STRIP_GATE(0x8076B58C, &lit_5636);
#pragma pop

/* 8076B590-8076B594 000134 0004+00 0/0 0/0 0/0 .rodata          @5637 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5637 = -7080.0f;
COMPILER_STRIP_GATE(0x8076B590, &lit_5637);
#pragma pop

/* 8076B594-8076B598 000138 0004+00 0/0 0/0 0/0 .rodata          @5638 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5638 = -6634.0f;
COMPILER_STRIP_GATE(0x8076B594, &lit_5638);
#pragma pop

/* 8076B598-8076B59C 00013C 0004+00 0/0 0/0 0/0 .rodata          @5639 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5639 = -10008.0f;
COMPILER_STRIP_GATE(0x8076B598, &lit_5639);
#pragma pop

/* 8076B59C-8076B5A0 000140 0004+00 0/0 0/0 0/0 .rodata          @5640 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5640 = -2729.0f;
COMPILER_STRIP_GATE(0x8076B59C, &lit_5640);
#pragma pop

/* 8076B5A0-8076B5A4 000144 0004+00 0/0 0/0 0/0 .rodata          @5641 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5641 = -7530.0f;
COMPILER_STRIP_GATE(0x8076B5A0, &lit_5641);
#pragma pop

/* 8076B5A4-8076B5A8 000148 0004+00 0/0 0/0 0/0 .rodata          @5642 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5642 = -5451.0f;
COMPILER_STRIP_GATE(0x8076B5A4, &lit_5642);
#pragma pop

/* 8076B5A8-8076B5AC 00014C 0004+00 0/0 0/0 0/0 .rodata          @5643 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5643 = -7661.0f;
COMPILER_STRIP_GATE(0x8076B5A8, &lit_5643);
#pragma pop

/* 8076B5AC-8076B5B0 000150 0004+00 0/0 0/0 0/0 .rodata          @5644 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5644 = 323.0f;
COMPILER_STRIP_GATE(0x8076B5AC, &lit_5644);
#pragma pop

/* 8076B5B0-8076B5B4 000154 0004+00 0/0 0/0 0/0 .rodata          @5645 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5645 = -5684.0f;
COMPILER_STRIP_GATE(0x8076B5B0, &lit_5645);
#pragma pop

/* 8076B5B4-8076B5B8 000158 0004+00 0/0 0/0 0/0 .rodata          @5646 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5646 = -7382.0f;
COMPILER_STRIP_GATE(0x8076B5B4, &lit_5646);
#pragma pop

/* 8076B5B8-8076B5BC 00015C 0004+00 0/0 0/0 0/0 .rodata          @5647 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5647 = 185.0f;
COMPILER_STRIP_GATE(0x8076B5B8, &lit_5647);
#pragma pop

/* 8076B5BC-8076B5C0 000160 0004+00 0/0 0/0 0/0 .rodata          @5648 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5648 = -5360.0f;
COMPILER_STRIP_GATE(0x8076B5BC, &lit_5648);
#pragma pop

/* 8076B5C0-8076B5C4 000164 0004+00 0/0 0/0 0/0 .rodata          @5649 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5649 = -1.0f / 20.0f;
COMPILER_STRIP_GATE(0x8076B5C0, &lit_5649);
#pragma pop

/* 8076B5C4-8076B5C8 000168 0004+00 0/0 0/0 0/0 .rodata          @5650 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5650 = -7738.0f;
COMPILER_STRIP_GATE(0x8076B5C4, &lit_5650);
#pragma pop

/* 8076B5C8-8076B5CC 00016C 0004+00 0/0 0/0 0/0 .rodata          @5651 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5651 = -5086.0f;
COMPILER_STRIP_GATE(0x8076B5C8, &lit_5651);
#pragma pop

/* 8076B5CC-8076B5D0 000170 0004+00 0/0 0/0 0/0 .rodata          @5652 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5652 = 0x3BA3D70A;
COMPILER_STRIP_GATE(0x8076B5CC, &lit_5652);
#pragma pop

/* 8076B5D0-8076B5D4 000174 0004+00 0/1 0/0 0/0 .rodata          @5833 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5833 = 29.0f;
COMPILER_STRIP_GATE(0x8076B5D0, &lit_5833);
#pragma pop

/* 8076B5D4-8076B5D8 000178 0004+00 0/1 0/0 0/0 .rodata          @5834 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5834 = 59.0f;
COMPILER_STRIP_GATE(0x8076B5D4, &lit_5834);
#pragma pop

/* 8076B5D8-8076B5DC 00017C 0004+00 0/1 0/0 0/0 .rodata          @5835 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5835 = 17.0f;
COMPILER_STRIP_GATE(0x8076B5D8, &lit_5835);
#pragma pop

/* 8076B5DC-8076B5E0 000180 0004+00 0/1 0/0 0/0 .rodata          @5836 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5836 = 15.0f;
COMPILER_STRIP_GATE(0x8076B5DC, &lit_5836);
#pragma pop

/* 8076B5E0-8076B5E4 000184 0004+00 0/2 0/0 0/0 .rodata          @5837 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5837 = 35.0f;
COMPILER_STRIP_GATE(0x8076B5E0, &lit_5837);
#pragma pop

/* 8076B5E4-8076B5E8 000188 0004+00 0/1 0/0 0/0 .rodata          @5838 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5838 = 58.0f;
COMPILER_STRIP_GATE(0x8076B5E4, &lit_5838);
#pragma pop

/* 8076B5E8-8076B5EC 00018C 0004+00 0/1 0/0 0/0 .rodata          @5839 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5839 = 61.0f;
COMPILER_STRIP_GATE(0x8076B5E8, &lit_5839);
#pragma pop

/* 8076B5EC-8076B5F0 000190 0004+00 0/1 0/0 0/0 .rodata          @5840 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5840 = 110.0f;
COMPILER_STRIP_GATE(0x8076B5EC, &lit_5840);
#pragma pop

/* 8076B5F0-8076B5F4 000194 0004+00 0/1 0/0 0/0 .rodata          @5841 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5841 = 4.0f;
COMPILER_STRIP_GATE(0x8076B5F0, &lit_5841);
#pragma pop

/* 8076B5F4-8076B5F8 000198 0004+00 0/1 0/0 0/0 .rodata          @5842 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5842 = 50.5f;
COMPILER_STRIP_GATE(0x8076B5F4, &lit_5842);
#pragma pop

/* 8076B5F8-8076B5FC 00019C 0004+00 0/1 0/0 0/0 .rodata          @5843 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5843 = 31.0f;
COMPILER_STRIP_GATE(0x8076B5F8, &lit_5843);
#pragma pop

/* 8076B5FC-8076B600 0001A0 0004+00 0/1 0/0 0/0 .rodata          @5844 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5844 = 52.0f;
COMPILER_STRIP_GATE(0x8076B5FC, &lit_5844);
#pragma pop

/* 8076B600-8076B604 0001A4 0004+00 0/1 0/0 0/0 .rodata          @5845 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5845 = 77.0f;
COMPILER_STRIP_GATE(0x8076B600, &lit_5845);
#pragma pop

/* 8076B604-8076B608 0001A8 0004+00 0/1 0/0 0/0 .rodata          @5846 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5846 = 11.0f;
COMPILER_STRIP_GATE(0x8076B604, &lit_5846);
#pragma pop

/* 8076B608-8076B60C 0001AC 0004+00 0/1 0/0 0/0 .rodata          @5847 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5847 = 83.0f;
COMPILER_STRIP_GATE(0x8076B608, &lit_5847);
#pragma pop

/* 8076B60C-8076B610 0001B0 0004+00 0/1 0/0 0/0 .rodata          @5848 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5848 = 124.0f;
COMPILER_STRIP_GATE(0x8076B60C, &lit_5848);
#pragma pop

/* 8076B610-8076B614 0001B4 0004+00 0/1 0/0 0/0 .rodata          @5849 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5849 = 142.0f;
COMPILER_STRIP_GATE(0x8076B610, &lit_5849);
#pragma pop

/* 8076B614-8076B618 0001B8 0004+00 0/1 0/0 0/0 .rodata          @5850 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5850 = 176.0f;
COMPILER_STRIP_GATE(0x8076B614, &lit_5850);
#pragma pop

/* 8076B618-8076B61C 0001BC 0004+00 0/1 0/0 0/0 .rodata          @5851 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5851 = 13.0f;
COMPILER_STRIP_GATE(0x8076B618, &lit_5851);
#pragma pop

/* 8076B61C-8076B620 0001C0 0004+00 0/1 0/0 0/0 .rodata          @5852 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5852 = 39.0f;
COMPILER_STRIP_GATE(0x8076B61C, &lit_5852);
#pragma pop

/* 8076B620-8076B624 0001C4 0004+00 0/1 0/0 0/0 .rodata          @5853 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5853 = 18.0f;
COMPILER_STRIP_GATE(0x8076B620, &lit_5853);
#pragma pop

/* 8076B624-8076B628 0001C8 0004+00 0/1 0/0 0/0 .rodata          @5854 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5854 = 36.0f;
COMPILER_STRIP_GATE(0x8076B624, &lit_5854);
#pragma pop

/* 8076B628-8076B62C 0001CC 0004+00 0/1 0/0 0/0 .rodata          @5855 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5855 = 43.0f;
COMPILER_STRIP_GATE(0x8076B628, &lit_5855);
#pragma pop

/* 80768B90-80769324 003BB0 0794+00 1/1 0/0 0/0 .text            anm_se_set__FP11e_rdb_class */
static void anm_se_set(e_rdb_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8076B62C-8076B630 0001D0 0004+00 0/1 0/0 0/0 .rodata          @6322 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6322 = -20000.0f;
COMPILER_STRIP_GATE(0x8076B62C, &lit_6322);
#pragma pop

/* 8076B630-8076B634 0001D4 0004+00 0/1 0/0 0/0 .rodata          @6323 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6323 = 12000.0f;
COMPILER_STRIP_GATE(0x8076B630, &lit_6323);
#pragma pop

/* 8076B634-8076B638 0001D8 0004+00 0/1 0/0 0/0 .rodata          @6324 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6324 = 30000.0f;
COMPILER_STRIP_GATE(0x8076B634, &lit_6324);
#pragma pop

/* 8076B638-8076B63C 0001DC 0004+00 0/1 0/0 0/0 .rodata          @6325 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6325 = 2834.0f;
COMPILER_STRIP_GATE(0x8076B638, &lit_6325);
#pragma pop

/* 8076B63C-8076B640 0001E0 0004+00 0/1 0/0 0/0 .rodata          @6326 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6326 = 993.0f;
COMPILER_STRIP_GATE(0x8076B63C, &lit_6326);
#pragma pop

/* 8076B640-8076B644 0001E4 0004+00 0/1 0/0 0/0 .rodata          @6327 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6327 = -60.0f;
COMPILER_STRIP_GATE(0x8076B640, &lit_6327);
#pragma pop

/* 8076B644-8076B648 0001E8 0004+00 0/1 0/0 0/0 .rodata          @6328 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6328 = -10000.0f;
COMPILER_STRIP_GATE(0x8076B644, &lit_6328);
#pragma pop

/* 8076B648-8076B64C 0001EC 0004+00 0/1 0/0 0/0 .rodata          @6329 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6329 = 1.0f / 50.0f;
COMPILER_STRIP_GATE(0x8076B648, &lit_6329);
#pragma pop

/* 8076B64C-8076B650 0001F0 0004+00 0/1 0/0 0/0 .rodata          @6330 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6330 = 2573.0f;
COMPILER_STRIP_GATE(0x8076B64C, &lit_6330);
#pragma pop

/* 8076B650-8076B654 0001F4 0004+00 0/1 0/0 0/0 .rodata          @6331 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6331 = 370.0f;
COMPILER_STRIP_GATE(0x8076B650, &lit_6331);
#pragma pop

/* 8076B654-8076B658 0001F8 0004+00 0/1 0/0 0/0 .rodata          @6332 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6332 = 2200.0f;
COMPILER_STRIP_GATE(0x8076B654, &lit_6332);
#pragma pop

/* 8076B658-8076B65C 0001FC 0004+00 0/1 0/0 0/0 .rodata          @6333 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6333 = 2901.0f;
COMPILER_STRIP_GATE(0x8076B658, &lit_6333);
#pragma pop

/* 8076B65C-8076B660 000200 0004+00 0/1 0/0 0/0 .rodata          @6334 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6334 = 3100.0f;
COMPILER_STRIP_GATE(0x8076B65C, &lit_6334);
#pragma pop

/* 8076B660-8076B664 000204 0004+00 0/1 0/0 0/0 .rodata          @6335 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6335 = 222.0f;
COMPILER_STRIP_GATE(0x8076B660, &lit_6335);
#pragma pop

/* 8076B664-8076B668 000208 0004+00 0/1 0/0 0/0 .rodata          @6336 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6336 = 1888.0f;
COMPILER_STRIP_GATE(0x8076B664, &lit_6336);
#pragma pop

/* 8076B668-8076B66C 00020C 0004+00 0/1 0/0 0/0 .rodata          @6337 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6337 = 1900.0f;
COMPILER_STRIP_GATE(0x8076B668, &lit_6337);
#pragma pop

/* 8076B66C-8076B670 000210 0004+00 0/1 0/0 0/0 .rodata          @6338 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6338 = 555.0f;
COMPILER_STRIP_GATE(0x8076B66C, &lit_6338);
#pragma pop

/* 8076B670-8076B674 000214 0004+00 0/1 0/0 0/0 .rodata          @6339 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6339 = 1600.0f;
COMPILER_STRIP_GATE(0x8076B670, &lit_6339);
#pragma pop

/* 8076B674-8076B678 000218 0004+00 0/1 0/0 0/0 .rodata          @6340 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6340 = 1783.0f;
COMPILER_STRIP_GATE(0x8076B674, &lit_6340);
#pragma pop

/* 8076B678-8076B67C 00021C 0004+00 0/1 0/0 0/0 .rodata          @6341 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6341 = 355.0f;
COMPILER_STRIP_GATE(0x8076B678, &lit_6341);
#pragma pop

/* 8076B67C-8076B680 000220 0004+00 0/1 0/0 0/0 .rodata          @6342 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6342 = 1555.0f;
COMPILER_STRIP_GATE(0x8076B67C, &lit_6342);
#pragma pop

/* 8076B680-8076B684 000224 0004+00 0/1 0/0 0/0 .rodata          @6343 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6343 = 1332.0f;
COMPILER_STRIP_GATE(0x8076B680, &lit_6343);
#pragma pop

/* 8076B684-8076B688 000228 0004+00 0/1 0/0 0/0 .rodata          @6344 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6344 = 550.0f;
COMPILER_STRIP_GATE(0x8076B684, &lit_6344);
#pragma pop

/* 8076B688-8076B68C 00022C 0004+00 0/1 0/0 0/0 .rodata          @6345 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6345 = 1070.0f;
COMPILER_STRIP_GATE(0x8076B688, &lit_6345);
#pragma pop

/* 8076B68C-8076B690 000230 0004+00 0/1 0/0 0/0 .rodata          @6346 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6346 = 1375.0f;
COMPILER_STRIP_GATE(0x8076B68C, &lit_6346);
#pragma pop

/* 8076B690-8076B694 000234 0004+00 0/1 0/0 0/0 .rodata          @6347 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6347 = 250.0f;
COMPILER_STRIP_GATE(0x8076B690, &lit_6347);
#pragma pop

/* 8076B694-8076B698 000238 0004+00 0/1 0/0 0/0 .rodata          @6348 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6348 = 850.0f;
COMPILER_STRIP_GATE(0x8076B694, &lit_6348);
#pragma pop

/* 8076B698-8076B69C 00023C 0004+00 0/1 0/0 0/0 .rodata          @6349 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6349 = 1165.0f;
COMPILER_STRIP_GATE(0x8076B698, &lit_6349);
#pragma pop

/* 8076B69C-8076B6A0 000240 0004+00 0/1 0/0 0/0 .rodata          @6350 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6350 = 430.0f;
COMPILER_STRIP_GATE(0x8076B69C, &lit_6350);
#pragma pop

/* 8076B6A0-8076B6A4 000244 0004+00 0/1 0/0 0/0 .rodata          @6351 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6351 = 450.0f;
COMPILER_STRIP_GATE(0x8076B6A0, &lit_6351);
#pragma pop

/* 8076B6A4-8076B6A8 000248 0004+00 0/1 0/0 0/0 .rodata          @6352 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6352 = 260.0f;
COMPILER_STRIP_GATE(0x8076B6A4, &lit_6352);
#pragma pop

/* 8076B6A8-8076B6AC 00024C 0004+00 0/1 0/0 0/0 .rodata          @6353 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6353 = 522.0f;
COMPILER_STRIP_GATE(0x8076B6A8, &lit_6353);
#pragma pop

/* 8076B6AC-8076B6B0 000250 0004+00 0/1 0/0 0/0 .rodata          @6354 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6354 = 1632.0f;
COMPILER_STRIP_GATE(0x8076B6AC, &lit_6354);
#pragma pop

/* 8076B6B0-8076B6B4 000254 0004+00 0/1 0/0 0/0 .rodata          @6355 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6355 = 180.0f;
COMPILER_STRIP_GATE(0x8076B6B0, &lit_6355);
#pragma pop

/* 8076B6C4-8076B6C4 000268 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8076B6E7 = "T_DESER";
SECTION_DEAD static char const* const stringBase_8076B6EF = "F_SP118";
#pragma pop

/* 8076BA20-8076BA30 000060 000C+04 0/1 0/0 0/0 .bss             @5932 */
#pragma push
#pragma force_active on
static u8 lit_5932[12 + 4 /* padding */];
#pragma pop

/* 8076BA30-8076BA3C 000070 000C+00 0/1 0/0 0/0 .bss             @5935 */
#pragma push
#pragma force_active on
static u8 lit_5935[12];
#pragma pop

/* 8076BA3C-8076BA48 00007C 000C+00 0/1 0/0 0/0 .bss             @5936 */
#pragma push
#pragma force_active on
static u8 lit_5936[12];
#pragma pop

/* 8076BA48-8076BA54 000088 000C+00 0/1 0/0 0/0 .bss             @5937 */
#pragma push
#pragma force_active on
static u8 lit_5937[12];
#pragma pop

/* 8076BA54-8076BA60 000094 000C+00 0/1 0/0 0/0 .bss             @5938 */
#pragma push
#pragma force_active on
static u8 lit_5938[12];
#pragma pop

/* 8076BA60-8076BA6C 0000A0 000C+00 0/1 0/0 0/0 .bss             @5939 */
#pragma push
#pragma force_active on
static u8 lit_5939[12];
#pragma pop

/* 8076BA6C-8076BA78 0000AC 000C+00 0/1 0/0 0/0 .bss             @5940 */
#pragma push
#pragma force_active on
static u8 lit_5940[12];
#pragma pop

/* 8076BA78-8076BA84 0000B8 000C+00 0/1 0/0 0/0 .bss             @5941 */
#pragma push
#pragma force_active on
static u8 lit_5941[12];
#pragma pop

/* 8076BA84-8076BA90 0000C4 000C+00 0/1 0/0 0/0 .bss             @5942 */
#pragma push
#pragma force_active on
static u8 lit_5942[12];
#pragma pop

/* 8076BA90-8076BA9C 0000D0 000C+00 0/1 0/0 0/0 .bss             @5943 */
#pragma push
#pragma force_active on
static u8 lit_5943[12];
#pragma pop

/* 8076BA9C-8076BAA8 0000DC 000C+00 0/1 0/0 0/0 .bss             @5944 */
#pragma push
#pragma force_active on
static u8 lit_5944[12];
#pragma pop

/* 8076BAA8-8076BAB4 0000E8 000C+00 0/1 0/0 0/0 .bss             @5945 */
#pragma push
#pragma force_active on
static u8 lit_5945[12];
#pragma pop

/* 8076BAB4-8076BAC0 0000F4 000C+00 0/1 0/0 0/0 .bss             @5946 */
#pragma push
#pragma force_active on
static u8 lit_5946[12];
#pragma pop

/* 8076BAC0-8076BACC 000100 000C+00 0/1 0/0 0/0 .bss             @5947 */
#pragma push
#pragma force_active on
static u8 lit_5947[12];
#pragma pop

/* 8076BACC-8076BAD8 00010C 000C+00 0/1 0/0 0/0 .bss             @5948 */
#pragma push
#pragma force_active on
static u8 lit_5948[12];
#pragma pop

/* 8076BAD8-8076BAE4 000118 000C+00 0/1 0/0 0/0 .bss             @5949 */
#pragma push
#pragma force_active on
static u8 lit_5949[12];
#pragma pop

/* 8076BAE4-8076BAF0 000124 000C+00 0/1 0/0 0/0 .bss             @5950 */
#pragma push
#pragma force_active on
static u8 lit_5950[12];
#pragma pop

/* 8076BAF0-8076BAFC 000130 000C+00 0/1 0/0 0/0 .bss             @5951 */
#pragma push
#pragma force_active on
static u8 lit_5951[12];
#pragma pop

/* 8076BAFC-8076BB08 00013C 000C+00 0/1 0/0 0/0 .bss             @5952 */
#pragma push
#pragma force_active on
static u8 lit_5952[12];
#pragma pop

/* 8076BB08-8076BB14 000148 000C+00 0/1 0/0 0/0 .bss             @5953 */
#pragma push
#pragma force_active on
static u8 lit_5953[12];
#pragma pop

/* 8076BB14-8076BB20 000154 000C+00 0/1 0/0 0/0 .bss             @5954 */
#pragma push
#pragma force_active on
static u8 lit_5954[12];
#pragma pop

/* 8076BB20-8076BB2C 000160 000C+00 0/1 0/0 0/0 .bss             @5955 */
#pragma push
#pragma force_active on
static u8 lit_5955[12];
#pragma pop

/* 8076BB2C-8076BB38 00016C 000C+00 0/1 0/0 0/0 .bss             @5956 */
#pragma push
#pragma force_active on
static u8 lit_5956[12];
#pragma pop

/* 8076BB38-8076BB44 000178 000C+00 0/1 0/0 0/0 .bss             @5957 */
#pragma push
#pragma force_active on
static u8 lit_5957[12];
#pragma pop

/* 8076BB44-8076BC68 000184 0120+04 0/1 0/0 0/0 .bss             fire_eff_pos$5931 */
#pragma push
#pragma force_active on
static u8 fire_eff_pos[288 + 4 /* padding */];
#pragma pop

/* 80769324-8076A418 004344 10F4+00 2/1 0/0 0/0 .text            daE_RDB_Execute__FP11e_rdb_class */
static void daE_RDB_Execute(e_rdb_class* param_0) {
    // NONMATCHING
}

/* 8076A418-8076A420 005438 0008+00 1/0 0/0 0/0 .text            daE_RDB_IsDelete__FP11e_rdb_class
 */
static bool daE_RDB_IsDelete(e_rdb_class* param_0) {
    return true;
}

/* 8076A420-8076A488 005440 0068+00 1/0 0/0 0/0 .text            daE_RDB_Delete__FP11e_rdb_class */
static void daE_RDB_Delete(e_rdb_class* param_0) {
    // NONMATCHING
}

/* 8076A488-8076A5FC 0054A8 0174+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
static void useHeapInit(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8076B6B4-8076B6B8 000258 0004+00 0/1 0/0 0/0 .rodata          @6539 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6539 = -200.0f;
COMPILER_STRIP_GATE(0x8076B6B4, &lit_6539);
#pragma pop

/* 8076B6B8-8076B6BC 00025C 0004+00 0/1 0/0 0/0 .rodata          @6540 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6540 = -7625.0f;
COMPILER_STRIP_GATE(0x8076B6B8, &lit_6540);
#pragma pop

/* 8076B6BC-8076B6C0 000260 0004+00 0/1 0/0 0/0 .rodata          @6541 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6541 = -5825.0f;
COMPILER_STRIP_GATE(0x8076B6BC, &lit_6541);
#pragma pop

/* 8076B6C0-8076B6C4 000264 0004+00 0/1 0/0 0/0 .rodata          @6542 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6542 = -50.0f;
COMPILER_STRIP_GATE(0x8076B6C0, &lit_6542);
#pragma pop

/* 8076A5FC-8076AA0C 00561C 0410+00 1/0 0/0 0/0 .text            daE_RDB_Create__FP10fopAc_ac_c */
static void daE_RDB_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 8076AA0C-8076ABB8 005A2C 01AC+00 1/1 0/0 0/0 .text            __ct__11e_rdb_classFv */
e_rdb_class::e_rdb_class() {
    // NONMATCHING
}

/* 8076ABB8-8076AC00 005BD8 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
// cM3dGSph::~cM3dGSph() {
extern "C" void __dt__8cM3dGSphFv() {
    // NONMATCHING
}

/* 8076AC00-8076AC48 005C20 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
// cM3dGCyl::~cM3dGCyl() {
extern "C" void __dt__8cM3dGCylFv() {
    // NONMATCHING
}

/* 8076AC48-8076AC90 005C68 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 8076AC90-8076AD5C 005CB0 00CC+00 1/1 0/0 0/0 .text            __dt__8dCcD_SphFv */
// dCcD_Sph::~dCcD_Sph() {
extern "C" void __dt__8dCcD_SphFv() {
    // NONMATCHING
}

/* 8076AD5C-8076ADE0 005D7C 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_SphFv */
// dCcD_Sph::dCcD_Sph() {
extern "C" void __ct__8dCcD_SphFv() {
    // NONMATCHING
}

/* 8076ADE0-8076AE3C 005E00 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 8076AE3C-8076AEAC 005E5C 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 8076AEAC-8076AF1C 005ECC 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
// dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" void __dt__12dBgS_AcchCirFv() {
    // NONMATCHING
}

/* 8076AF1C-8076AF64 005F3C 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 8076AF64-8076AFAC 005F84 0048+00 2/1 0/0 0/0 .text            __dt__13daE_RDB_HIO_cFv */
daE_RDB_HIO_c::~daE_RDB_HIO_c() {
    // NONMATCHING
}

/* 8076AFAC-8076AFE8 005FCC 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_e_rdb_cpp */
void __sinit_d_a_e_rdb_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x8076AFAC, __sinit_d_a_e_rdb_cpp);
#pragma pop

/* 8076AFE8-8076AFF0 006008 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_8076AFE8() {
    // NONMATCHING
}

/* 8076AFF0-8076AFF8 006010 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_8076AFF0() {
    // NONMATCHING
}

/* 8076B40C-8076B448 00642C 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
// cXyz::~cXyz() {
extern "C" void __dt__4cXyzFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8076BC68-8076BC6C 0002A8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_8076BC68[4];
#pragma pop

/* 8076BC6C-8076BC70 0002AC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_8076BC6C[4];
#pragma pop

/* 8076BC70-8076BC74 0002B0 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_8076BC70[4];
#pragma pop

/* 8076BC74-8076BC78 0002B4 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_8076BC74[4];
#pragma pop

/* 8076BC78-8076BC7C 0002B8 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8076BC78[4];
#pragma pop

/* 8076BC7C-8076BC80 0002BC 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8076BC7C[4];
#pragma pop

/* 8076BC80-8076BC84 0002C0 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_8076BC80[4];
#pragma pop

/* 8076BC84-8076BC88 0002C4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_8076BC84[4];
#pragma pop

/* 8076BC88-8076BC8C 0002C8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_8076BC88[4];
#pragma pop

/* 8076BC8C-8076BC90 0002CC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_8076BC8C[4];
#pragma pop

/* 8076BC90-8076BC94 0002D0 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_8076BC90[4];
#pragma pop

/* 8076BC94-8076BC98 0002D4 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_8076BC94[4];
#pragma pop

/* 8076BC98-8076BC9C 0002D8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_8076BC98[4];
#pragma pop

/* 8076BC9C-8076BCA0 0002DC 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8076BC9C[4];
#pragma pop

/* 8076BCA0-8076BCA4 0002E0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_8076BCA0[4];
#pragma pop

/* 8076BCA4-8076BCA8 0002E4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_8076BCA4[4];
#pragma pop

/* 8076BCA8-8076BCAC 0002E8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_8076BCA8[4];
#pragma pop

/* 8076BCAC-8076BCB0 0002EC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_8076BCAC[4];
#pragma pop

/* 8076BCB0-8076BCB4 0002F0 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_8076BCB0[4];
#pragma pop

/* 8076BCB4-8076BCB8 0002F4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_8076BCB4[4];
#pragma pop

/* 8076BCB8-8076BCBC 0002F8 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_8076BCB8[4];
#pragma pop

/* 8076BCBC-8076BCC0 0002FC 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8076BCBC[4];
#pragma pop

/* 8076BCC0-8076BCC4 000300 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8076BCC0[4];
#pragma pop

/* 8076BCC4-8076BCC8 000304 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8076BCC4[4];
#pragma pop

/* 8076BCC8-8076BCCC 000308 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_8076BCC8[4];
#pragma pop

/* 8076B6C4-8076B6C4 000268 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
