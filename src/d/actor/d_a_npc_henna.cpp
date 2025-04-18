/**
 * @file d_a_npc_henna.cpp
 * 
*/

#include "d/actor/d_a_npc_henna.h"
#include "dol2asm.h"
#include "d/d_camera.h"

//
// Forward References:
//

extern "C" void __ct__17daNpc_Henna_HIO_cFv();
extern "C" static void anm_init__FP15npc_henna_classifUcf();
extern "C" static void nodeCallBack__FP8J3DJointi();
extern "C" static void daNpc_Henna_Draw__FP15npc_henna_class();
extern "C" void __dt__4cXyzFv();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" static void s_npc_sub__FPvPv();
extern "C" static void s_piro_sub__FPvPv();
extern "C" static void s_du_sub__FPvPv();
extern "C" static void s_shop_sub__FPvPv();
extern "C" static void s_koro2ball_sub__FPvPv();
extern "C" static void message_shop__FP15npc_henna_class();
extern "C" static void henna_shop__FP15npc_henna_class();
extern "C" static void s_rod_sub__FPvPv();
extern "C" static void s_fish_sub__FPvPv();
extern "C" static void henna_ride__FP15npc_henna_class();
extern "C" static void action__FP15npc_henna_class();
extern "C" static void cam_3d_morf__FP15npc_henna_classf();
extern "C" static void demo_camera__FP15npc_henna_class();
extern "C" static void zoom_check__FP15npc_henna_classP4cXyzs();
extern "C" static void demo_camera_shop__FP15npc_henna_class();
extern "C" static void message_guide__FP15npc_henna_class();
extern "C" static void s_boat_sub__FPvPv();
extern "C" static void env_control__FP15npc_henna_class();
extern "C" static void daNpc_Henna_Execute__FP15npc_henna_class();
extern "C" static bool daNpc_Henna_IsDelete__FP15npc_henna_class();
extern "C" static void daNpc_Henna_Delete__FP15npc_henna_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daNpc_Henna_Create__FP10fopAc_ac_c();
extern "C" void __dt__17daNpc_Henna_HIO_cFv();
extern "C" void __sinit_d_a_npc_henna_cpp();
extern "C" void cancelOriginalDemo__9daPy_py_cFv();
extern "C" void __ct__4cXyzFRC4cXyz();
extern "C" static void mDoAud_seStart__FUlPC3VecUlSc();
extern "C" void getSubStickX__8mDoCPd_cFUl();
extern "C" void getStickX3D__8mDoCPd_cFUl();
extern "C" static void dComIfGp_setDoStatusForce__FUcUc();
extern "C" static void dComIfGs_setEventReg__FUsUc();
extern "C" static void Z2GetAudioMgr__Fv();
extern "C" static void dComIfG_getTimerPtr__Fv();
extern "C" void fadeIn__13mDoGph_gInf_cFfR8_GXColor();
extern "C" static void fpcM_Search__FPFPvPv_PvPv();
extern "C" void getTrigA__8mDoCPd_cFUl();
extern "C" static void dComIfGp_event_reset__Fv();
extern "C" void offPlayerNoDraw__9daPy_py_cFv();
extern "C" static void dComIfGp_setMessageCountNumber__Fl();
extern "C" static void dComIfGp_event_offHindFlag__FUs();
extern "C" static void dKy_getEnvlight__Fv();
extern "C" static void cMtx_XrotM__FPA4_fs();
extern "C" void abs__4cXyzCFv();
extern "C" void onPlayerNoDraw__9daPy_py_cFv();
extern "C" static void dComIfGp_setItemRupeeCount__Fl();
extern "C" static void dComIfGs_getRupee__Fv();
extern "C" void fabsf__3stdFf();
extern "C" void set__4cXyzFfff();
extern "C" void __apl__4cXyzFRC3Vec();
extern "C" static void cMtx_YrotS__FPA4_fs();
extern "C" void changeDemoMode__9daPy_py_cFUliis();
extern "C" void changeOriginalDemo__9daPy_py_cFv();
extern "C" static void daPy_getPlayerActorClass__Fv();
extern "C" void onCondition__11dEvt_info_cFUs();
extern "C" void checkCommandDemoAccrpt__11dEvt_info_cFv();
extern "C" void __as__4cXyzFRC4cXyz();
extern "C" static void dComIfGp_checkPlayerStatus0__FiUl();
extern "C" static void JMAFastSqrt__Ff();
extern "C" static void dComIfGs_getEventReg__FUs();
extern "C" static void dComIfGs_isEventBit__FUs();
extern "C" static void dComIfGp_event_runCheck__Fv();
extern "C" void __ct__4cXyzFv();
extern "C" static void dComIfGp_getCamera__Fi();
extern "C" static void dComIfGp_getPlayerCameraID__Fi();
extern "C" static void dComIfGp_getPlayer__Fi();
extern "C" static void dMsgObject_getSelectCursorPos__Fv();
extern "C" static void fopAcM_GetRoomNo__FPC10fopAc_ac_c();
extern "C" static void dComIfGs_onEventBit__FUs();
extern "C" extern char const* const d_a_npc_henna__stringBase0;

//
// External References:
//

extern "C" void fadeOut__13mDoGph_gInf_cFfR8_GXColor();
extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btpAnmFP16J3DMaterialTableP16J3DAnmTexPatterniifss();
extern "C" void entry__13mDoExt_btpAnmFP16J3DMaterialTables();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entryJoint__13mDoExt_bckAnmFP12J3DModelDataUsf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void
__ct__14mDoExt_McaMorfFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiiPvUlUl();
extern "C" void setAnm__14mDoExt_McaMorfFP15J3DAnmTransformiffffPv();
extern "C" void play__14mDoExt_McaMorfFP3VecUlSc();
extern "C" void entryDL__14mDoExt_McaMorfFv();
extern "C" void modelCalc__14mDoExt_McaMorfFv();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void fopKyM_createWpillar__FPC4cXyzfi();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dStage_changeScene__FifUlScsi();
extern "C" void getTimerPtr__14dComIfG_play_cFv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfG_TimerStart__Fis();
extern "C" void dComIfG_TimerDeleteRequest__Fi();
extern "C" void onEventBit__11dSv_event_cFUs();
extern "C" void offEventBit__11dSv_event_cFUs();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void setEventReg__11dSv_event_cFUsUc();
extern "C" void getEventReg__11dSv_event_cCFUs();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void setLookPos__9daPy_py_cFP4cXyz();
extern "C" void Start__9dCamera_cFv();
extern "C" void Stop__9dCamera_cFv();
extern "C" void SetTrimSize__9dCamera_cFl();
extern "C" void Set__9dCamera_cF4cXyz4cXyzfs();
extern "C" void Reset__9dCamera_cF4cXyz4cXyzfs();
extern "C" void Reset__9dCamera_cF4cXyz4cXyz();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_BossLight_set__FP4cXyzP8_GXColorfUc();
extern "C" void getActor__12dMsgObject_cFv();
extern "C" void isMouthCheck__12dMsgObject_cFv();
extern "C" void getSelectCursorPos__12dMsgObject_cFv();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c();
extern "C" void doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci();
extern "C" void remove__10dMsgFlow_cFv();
extern "C" void getNowMsgNo__10dMsgFlow_cFv();
extern "C" void dTimer_createTimer__FlUlUcUcffff();
extern "C" void dTimer_isStart__Fv();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ct__5csXyzFsss();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void subBgmStart__8Z2SeqMgrFUl();
extern "C" void subBgmStop__8Z2SeqMgrFv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void _savegpr_21();
extern "C" void _savegpr_22();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_21();
extern "C" void _restgpr_22();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" u8 m_cpadInfo__8mDoCPd_c[256];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_Counter[12 + 4 /* padding */];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" extern u8 struct_80450C98[4];
extern "C" extern u8 cDmr_SkipInfo[4];
extern "C" extern u8 data_80450CA0[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 8054A964-8054A968 000000 0004+00 17/17 0/0 0/0 .rodata          @3905 */
SECTION_RODATA static f32 const lit_3905 = 1.0f;
COMPILER_STRIP_GATE(0x8054A964, &lit_3905);

/* 8054A968-8054A96C 000004 0004+00 0/2 0/0 0/0 .rodata          @3906 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3906 = 7.0f / 10.0f;
COMPILER_STRIP_GATE(0x8054A968, &lit_3906);
#pragma pop

/* 8054A96C-8054A970 000008 0004+00 0/1 0/0 0/0 .rodata          @3907 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3907 = 9.0f / 10.0f;
COMPILER_STRIP_GATE(0x8054A96C, &lit_3907);
#pragma pop

/* 8054AC88-8054AC94 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8054AC94-8054ACA8 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 8054ACA8-8054ACB0 000020 0008+00 1/1 0/0 0/0 .data            check_kind */
SECTION_DATA static u8 check_kind[8] = {
    0xF5, 0x7F, 0xF4, 0x7F, 0xF3, 0x7F, 0xF2, 0x7F,
};

/* 8054ACB0-8054ACE4 -00001 0034+00 1/1 0/0 0/0 .data            @4437 */
SECTION_DATA static void* lit_4437[13] = {
    (void*)(((char*)henna_shop__FP15npc_henna_class) + 0x48),
    (void*)(((char*)henna_shop__FP15npc_henna_class) + 0x74),
    (void*)(((char*)henna_shop__FP15npc_henna_class) + 0x7C),
    (void*)(((char*)henna_shop__FP15npc_henna_class) + 0x98),
    (void*)(((char*)henna_shop__FP15npc_henna_class) + 0xF8),
    (void*)(((char*)henna_shop__FP15npc_henna_class) + 0x110),
    (void*)(((char*)henna_shop__FP15npc_henna_class) + 0x334),
    (void*)(((char*)henna_shop__FP15npc_henna_class) + 0x334),
    (void*)(((char*)henna_shop__FP15npc_henna_class) + 0x334),
    (void*)(((char*)henna_shop__FP15npc_henna_class) + 0x334),
    (void*)(((char*)henna_shop__FP15npc_henna_class) + 0x154),
    (void*)(((char*)henna_shop__FP15npc_henna_class) + 0x204),
    (void*)(((char*)henna_shop__FP15npc_henna_class) + 0x2B4),
};

/* 8054ACE4-8054AD14 -00001 0030+00 1/1 0/0 0/0 .data            @4753 */
SECTION_DATA static void* lit_4753[12] = {
    (void*)(((char*)henna_ride__FP15npc_henna_class) + 0xD4),
    (void*)(((char*)henna_ride__FP15npc_henna_class) + 0x2F0),
    (void*)(((char*)henna_ride__FP15npc_henna_class) + 0x10C),
    (void*)(((char*)henna_ride__FP15npc_henna_class) + 0x134),
    (void*)(((char*)henna_ride__FP15npc_henna_class) + 0x2F0),
    (void*)(((char*)henna_ride__FP15npc_henna_class) + 0x184),
    (void*)(((char*)henna_ride__FP15npc_henna_class) + 0x200),
    (void*)(((char*)henna_ride__FP15npc_henna_class) + 0x268),
    (void*)(((char*)henna_ride__FP15npc_henna_class) + 0x2F0),
    (void*)(((char*)henna_ride__FP15npc_henna_class) + 0x2F0),
    (void*)(((char*)henna_ride__FP15npc_henna_class) + 0x280),
    (void*)(((char*)henna_ride__FP15npc_henna_class) + 0x2B4),
};

/* 8054AD14-8054AD1C 00008C 0008+00 1/1 0/0 0/0 .data            check_size$5372 */
SECTION_DATA static u8 check_size[8] = {
    0x00, 0x2B, 0x00, 0x32, 0x00, 0x38, 0x00, 0x3C,
};

/* 8054AD1C-8054AD6C -00001 0050+00 1/1 0/0 0/0 .data            @5825 */
SECTION_DATA static void* lit_5825[20] = {
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x1294),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x1690),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x1374),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x13C4),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x13E0),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x13FC),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x1428),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x1444),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x1460),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x1690),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x1690),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x14EC),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x1508),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x1524),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x1540),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x155C),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x1578),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x1594),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x15B0),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x15CC),
};

/* 8054AD6C-8054AEB4 -00001 0148+00 1/1 0/0 0/0 .data            @5824 */
SECTION_DATA static void* lit_5824[82] = {
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x124),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x340),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x3FC),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x56C),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x63C),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x6F0),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0xA50),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0xA50),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0xBB8),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0xBE8),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0xC54),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0xD58),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0xDE4),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0xE9C),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0xF28),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0xF7C),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x1088),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x17B0),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x1808),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x1838),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x19C0),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x1B18),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x1BE4),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x1BFC),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x1CB0),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x1DB4),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2C10),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x1E20),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x1F68),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2068),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x20F4),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2314),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x23F8),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x246C),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2630),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2768),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x29A0),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2A88),
    (void*)(((char*)demo_camera_shop__FP15npc_henna_class) + 0x2B64),
};

/* 8054AEB4-8054AEC0 00022C 000C+00 0/1 0/0 0/0 .data            btk_d$6463 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 btk_d[12] = {
    0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x2A, 0x00, 0x00, 0x00, 0x2B,
};
#pragma pop

/* 8054AEC0-8054AEE0 000238 0020+00 0/1 0/0 0/0 .data            btp_d$6474 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 btp_d[32] = {
    0x00, 0x00, 0x00, 0x2E, 0x00, 0x00, 0x00, 0x35, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x00, 0x2E, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x31, 0x00, 0x00, 0x00, 0x31,
};
#pragma pop

/* 8054AEE0-8054AF00 000258 0020+00 0/1 0/0 0/0 .data            facebck_d$6485 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 facebck_d[32] = {
    0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0D,
    0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x0B,
};
#pragma pop

/* 8054AF00-8054AF20 -00001 0020+00 1/0 0/0 0/0 .data            l_daNpc_Henna_Method */
static actor_method_class l_daNpc_Henna_Method = {
    (process_method_func)daNpc_Henna_Create__FP10fopAc_ac_c,
    (process_method_func)daNpc_Henna_Delete__FP15npc_henna_class,
    (process_method_func)daNpc_Henna_Execute__FP15npc_henna_class,
    (process_method_func)daNpc_Henna_IsDelete__FP15npc_henna_class,
    (process_method_func)daNpc_Henna_Draw__FP15npc_henna_class,
};

/* 8054AF20-8054AF50 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_NPC_HENNA */
extern actor_process_profile_definition g_profile_NPC_HENNA = {
  fpcLy_CURRENT_e,         // mLayerID
  7,                       // mListID
  fpcPi_CURRENT_e,         // mListPrio
  PROC_NPC_HENNA,          // mProcName
  &g_fpcLf_Method.base,   // sub_method
  sizeof(npc_henna_class), // mSize
  0,                       // mSizeOther
  0,                       // mParameters
  &g_fopAc_Method.base,    // sub_method
  342,                     // mPriority
  &l_daNpc_Henna_Method,   // sub_method
  0x00044000,              // mStatus
  fopAc_NPC_e,             // mActorType
  fopAc_CULLBOX_0_e,       // cullType
};

/* 8054AF50-8054AF5C 0002C8 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 8054AF5C-8054AF68 0002D4 000C+00 1/1 0/0 0/0 .data            __vt__8cM3dGPla */
SECTION_DATA extern void* __vt__8cM3dGPla[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGPlaFv,
};

/* 8054AF68-8054AF74 0002E0 000C+00 2/2 0/0 0/0 .data            __vt__17daNpc_Henna_HIO_c */
SECTION_DATA extern void* __vt__17daNpc_Henna_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17daNpc_Henna_HIO_cFv,
};

/* 80542F0C-80542F98 0000EC 008C+00 1/1 0/0 0/0 .text            __ct__17daNpc_Henna_HIO_cFv */
daNpc_Henna_HIO_c::daNpc_Henna_HIO_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8054A970-8054A974 00000C 0004+00 3/14 0/0 0/0 .rodata          @3921 */
SECTION_RODATA static u8 const lit_3921[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x8054A970, &lit_3921);

/* 8054A974-8054A978 000010 0004+00 2/3 0/0 0/0 .rodata          @3922 */
SECTION_RODATA static f32 const lit_3922 = -1.0f;
COMPILER_STRIP_GATE(0x8054A974, &lit_3922);

/* 8054AC70-8054AC70 00030C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8054AC70 = "Henna";
#pragma pop

/* 80542F98-80543048 000178 00B0+00 4/4 0/0 0/0 .text            anm_init__FP15npc_henna_classifUcf
 */
static void anm_init(npc_henna_class* param_0, int param_1, f32 param_2, u8 param_3,
                         f32 param_4) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8054A978-8054A97C 000014 0004+00 0/2 0/0 0/0 .rodata          @4026 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4026 = 3.0f / 20.0f;
COMPILER_STRIP_GATE(0x8054A978, &lit_4026);
#pragma pop

/* 8054A97C-8054A980 000018 0004+00 0/1 0/0 0/0 .rodata          @4027 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4027 = 0.25f;
COMPILER_STRIP_GATE(0x8054A97C, &lit_4027);
#pragma pop

/* 8054A980-8054A984 00001C 0004+00 0/2 0/0 0/0 .rodata          @4028 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4028 = 0.5f;
COMPILER_STRIP_GATE(0x8054A980, &lit_4028);
#pragma pop

/* 8054A984-8054A98C 000020 0008+00 0/4 0/0 0/0 .rodata          @4030 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4030[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8054A984, &lit_4030);
#pragma pop

/* 80543048-80543350 000228 0308+00 1/1 0/0 0/0 .text            nodeCallBack__FP8J3DJointi */
static void nodeCallBack(J3DJoint* param_0, int param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8054A98C-8054A990 000028 0004+00 0/1 0/0 0/0 .rodata          @4071 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4071 = 190.0f;
COMPILER_STRIP_GATE(0x8054A98C, &lit_4071);
#pragma pop

/* 8054A990-8054A994 00002C 0004+00 0/3 0/0 0/0 .rodata          @4072 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4072 = 700.0f;
COMPILER_STRIP_GATE(0x8054A990, &lit_4072);
#pragma pop

/* 80543350-805434C0 000530 0170+00 1/0 0/0 0/0 .text daNpc_Henna_Draw__FP15npc_henna_class */
static void daNpc_Henna_Draw(npc_henna_class* param_0) {
    // NONMATCHING
}

/* 805434C0-805434FC 0006A0 003C+00 2/2 0/0 0/0 .text            __dt__4cXyzFv */
// cXyz::~cXyz() {
extern "C" void __dt__4cXyzFv() {
    // NONMATCHING
}

/* 805434FC-80543544 0006DC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGPlaFv */
// cM3dGPla::~cM3dGPla() {
extern "C" void __dt__8cM3dGPlaFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8054A994-8054A998 000030 0004+00 0/1 0/0 0/0 .rodata          @4112 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4112 = 100.0f;
COMPILER_STRIP_GATE(0x8054A994, &lit_4112);
#pragma pop

/* 8054A998-8054A99C 000034 0004+00 0/3 0/0 0/0 .rodata          @4113 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4113 = 30.0f;
COMPILER_STRIP_GATE(0x8054A998, &lit_4113);
#pragma pop

/* 8054A99C-8054A9A0 000038 0004+00 0/0 0/0 0/0 .rodata          @4114 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4114 = -30.0f;
COMPILER_STRIP_GATE(0x8054A99C, &lit_4114);
#pragma pop

/* 8054A9A0-8054A9A4 00003C 0004+00 0/1 0/0 0/0 .rodata          @4115 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4115 = -100.0f;
COMPILER_STRIP_GATE(0x8054A9A0, &lit_4115);
#pragma pop

/* 8054A9A4-8054A9A8 000040 0004+00 2/3 0/0 0/0 .rodata          @4190 */
SECTION_RODATA static f32 const lit_4190 = 300.0f;
COMPILER_STRIP_GATE(0x8054A9A4, &lit_4190);

/* 8054A9A8-8054A9AC 000044 0004+00 0/0 0/0 0/0 .rodata          @4191 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4191 = -450.0f;
COMPILER_STRIP_GATE(0x8054A9A8, &lit_4191);
#pragma pop

/* 8054A9AC-8054A9B0 000048 0004+00 0/0 0/0 0/0 .rodata          @4192 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4192 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x8054A9AC, &lit_4192);
#pragma pop

/* 8054A9B0-8054A9B4 00004C 0004+00 0/0 0/0 0/0 .rodata          @4193 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4193 = -300.0f;
COMPILER_STRIP_GATE(0x8054A9B0, &lit_4193);
#pragma pop

/* 8054A9B4-8054A9BC 000050 0008+00 0/3 0/0 0/0 .rodata          @4242 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4242[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8054A9B4, &lit_4242);
#pragma pop

/* 8054A9BC-8054A9C4 000058 0008+00 0/3 0/0 0/0 .rodata          @4243 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4243[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8054A9BC, &lit_4243);
#pragma pop

/* 8054A9C4-8054A9CC 000060 0008+00 0/3 0/0 0/0 .rodata          @4244 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4244[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8054A9C4, &lit_4244);
#pragma pop

/* 80543544-805436CC 000724 0188+00 1/1 0/0 0/0 .text            s_npc_sub__FPvPv */
static void s_npc_sub(void* param_0, void* param_1) {
    // NONMATCHING
}

/* 805436CC-80543718 0008AC 004C+00 1/1 0/0 0/0 .text            s_piro_sub__FPvPv */
static void s_piro_sub(void* param_0, void* param_1) {
    // NONMATCHING
}

/* 80543718-8054378C 0008F8 0074+00 1/1 0/0 0/0 .text            s_du_sub__FPvPv */
static void s_du_sub(void* param_0, void* param_1) {
    // NONMATCHING
}

/* 8054378C-805437E8 00096C 005C+00 2/2 0/0 0/0 .text            s_shop_sub__FPvPv */
static void s_shop_sub(void* param_0, void* param_1) {
    // NONMATCHING
}

/* 805437E8-80543844 0009C8 005C+00 1/1 0/0 0/0 .text            s_koro2ball_sub__FPvPv */
static void s_koro2ball_sub(void* param_0, void* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8054A9CC-8054A9D0 000068 0004+00 1/1 0/0 0/0 .rodata          @4330 */
SECTION_RODATA static f32 const lit_4330 = 270.0f;
COMPILER_STRIP_GATE(0x8054A9CC, &lit_4330);

/* 80543844-8054395C 000A24 0118+00 1/1 0/0 0/0 .text            message_shop__FP15npc_henna_class
 */
static void message_shop(npc_henna_class* param_0) {
    // NONMATCHING
}

/* 8054395C-80543E68 000B3C 050C+00 2/2 0/0 0/0 .text            henna_shop__FP15npc_henna_class */
static void henna_shop(npc_henna_class* param_0) {
    // NONMATCHING
}

/* 80543E68-80543EB4 001048 004C+00 1/1 0/0 0/0 .text            s_rod_sub__FPvPv */
static void s_rod_sub(void* param_0, void* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8054A9D0-8054A9D4 00006C 0004+00 0/2 0/0 0/0 .rodata          @4430 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4430 = 10.0f;
COMPILER_STRIP_GATE(0x8054A9D0, &lit_4430);
#pragma pop

/* 8054A9D4-8054A9D8 000070 0004+00 0/1 0/0 0/0 .rodata          @4431 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4431 = 1000.0f;
COMPILER_STRIP_GATE(0x8054A9D4, &lit_4431);
#pragma pop

/* 8054A9D8-8054A9DC 000074 0004+00 0/0 0/0 0/0 .rodata          @4432 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4432 = 3.0f;
COMPILER_STRIP_GATE(0x8054A9D8, &lit_4432);
#pragma pop

/* 8054A9DC-8054A9E0 000078 0004+00 0/1 0/0 0/0 .rodata          @4433 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4433 = 120.0f;
COMPILER_STRIP_GATE(0x8054A9DC, &lit_4433);
#pragma pop

/* 8054A9E0-8054A9E4 00007C 0004+00 0/0 0/0 0/0 .rodata          @4434 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4434 = 60.0f;
COMPILER_STRIP_GATE(0x8054A9E0, &lit_4434);
#pragma pop

/* 8054A9E4-8054A9E8 000080 0004+00 0/0 0/0 0/0 .rodata          @4435 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4435 = -661.0f;
COMPILER_STRIP_GATE(0x8054A9E4, &lit_4435);
#pragma pop

/* 8054A9E8-8054A9EC 000084 0004+00 0/0 0/0 0/0 .rodata          @4436 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4436 = 376.0f;
COMPILER_STRIP_GATE(0x8054A9E8, &lit_4436);
#pragma pop

/* 8054A9EC-8054A9F0 000088 0004+00 0/2 0/0 0/0 .rodata          @4491 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4491 = 500.0f;
COMPILER_STRIP_GATE(0x8054A9EC, &lit_4491);
#pragma pop

/* 80543EB4-8054403C 001094 0188+00 1/1 0/0 0/0 .text            s_fish_sub__FPvPv */
static void s_fish_sub(void* param_0, void* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8054AF80-8054AF84 000008 0001+03 4/4 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 8054AF84-8054AF88 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 8054AF88-8054AF8C 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 8054AF8C-8054AF90 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 8054AF90-8054AF94 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 8054AF94-8054AF98 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 8054AF98-8054AF9C 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 8054AF9C-8054AFA0 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 8054AFA0-8054AFA4 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 8054AFA4-8054AFA8 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 8054AFA8-8054AFAC 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 8054AFAC-8054AFB0 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 8054AFB0-8054AFB4 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 8054AFB4-8054AFB8 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 8054AFB8-8054AFBC 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 8054AFBC-8054AFC0 -00001 0004+00 1/2 0/0 0/0 .bss             None */
/* 8054AFBC 0001+00 data_8054AFBC @1009 */
/* 8054AFBD 0003+00 data_8054AFBD None */
static u8 struct_8054AFBC[4];

/* 8054AFC0-8054AFCC 000048 000C+00 0/1 0/0 0/0 .bss             @3900 */
#pragma push
#pragma force_active on
static u8 lit_3900[12];
#pragma pop

/* 8054AFCC-8054B004 000054 0038+00 1/4 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[56];

/* 8054B004-8054B008 00008C 0004+00 3/4 0/0 0/0 .bss             lrl */
static u8 lrl[4];

/* 8054403C-80544A4C 00121C 0A10+00 2/1 0/0 0/0 .text            henna_ride__FP15npc_henna_class */
static void henna_ride(npc_henna_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8054A9F0-8054A9F4 00008C 0004+00 0/1 0/0 0/0 .rodata          @4740 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4740 = 12.0f;
COMPILER_STRIP_GATE(0x8054A9F0, &lit_4740);
#pragma pop

/* 8054A9F4-8054A9F8 000090 0004+00 0/3 0/0 0/0 .rodata          @4741 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4741 = 5.0f;
COMPILER_STRIP_GATE(0x8054A9F4, &lit_4741);
#pragma pop

/* 8054A9F8-8054A9FC 000094 0004+00 0/1 0/0 0/0 .rodata          @4742 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4742 = 90.0f;
COMPILER_STRIP_GATE(0x8054A9F8, &lit_4742);
#pragma pop

/* 8054A9FC-8054AA00 000098 0004+00 0/2 0/0 0/0 .rodata          @4743 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4743 = 200.0f;
COMPILER_STRIP_GATE(0x8054A9FC, &lit_4743);
#pragma pop

/* 8054AA00-8054AA04 00009C 0004+00 0/0 0/0 0/0 .rodata          @4744 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4744 = 2000.0f;
COMPILER_STRIP_GATE(0x8054AA00, &lit_4744);
#pragma pop

/* 8054AA04-8054AA08 0000A0 0004+00 0/0 0/0 0/0 .rodata          @4745 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4745 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x8054AA04, &lit_4745);
#pragma pop

/* 8054AA08-8054AA0C 0000A4 0004+00 0/0 0/0 0/0 .rodata          @4746 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4746 = -200.0f;
COMPILER_STRIP_GATE(0x8054AA08, &lit_4746);
#pragma pop

/* 8054AA0C-8054AA10 0000A8 0004+00 0/1 0/0 0/0 .rodata          @4747 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4747 = 1.5f;
COMPILER_STRIP_GATE(0x8054AA0C, &lit_4747);
#pragma pop

/* 8054AA10-8054AA14 0000AC 0004+00 0/0 0/0 0/0 .rodata          @4748 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4748 = 22.0f;
COMPILER_STRIP_GATE(0x8054AA10, &lit_4748);
#pragma pop

/* 8054AA14-8054AA18 0000B0 0004+00 0/2 0/0 0/0 .rodata          @4749 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4749 = 2.0f;
COMPILER_STRIP_GATE(0x8054AA14, &lit_4749);
#pragma pop

/* 8054AA18-8054AA1C 0000B4 0004+00 0/1 0/0 0/0 .rodata          @4750 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4750 = 3.0f / 5.0f;
COMPILER_STRIP_GATE(0x8054AA18, &lit_4750);
#pragma pop

/* 8054AA1C-8054AA20 0000B8 0004+00 0/1 0/0 0/0 .rodata          @4751 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4751 = 40.0f;
COMPILER_STRIP_GATE(0x8054AA1C, &lit_4751);
#pragma pop

/* 8054AA20-8054AA24 0000BC 0004+00 0/0 0/0 0/0 .rodata          @4752 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4752 = -80.0f;
COMPILER_STRIP_GATE(0x8054AA20, &lit_4752);
#pragma pop

/* 8054AA24-8054AA28 0000C0 0004+00 0/1 0/0 0/0 .rodata          @4908 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4908 = -0.75f;
COMPILER_STRIP_GATE(0x8054AA24, &lit_4908);
#pragma pop

/* 8054AA28-8054AA2C 0000C4 0004+00 0/2 0/0 0/0 .rodata          @4909 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4909 = 150.0f;
COMPILER_STRIP_GATE(0x8054AA28, &lit_4909);
#pragma pop

/* 8054AA2C-8054AA30 0000C8 0004+00 0/1 0/0 0/0 .rodata          @4910 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4910 = 20.0f;
COMPILER_STRIP_GATE(0x8054AA2C, &lit_4910);
#pragma pop

/* 8054AA30-8054AA34 0000CC 0004+00 0/1 0/0 0/0 .rodata          @4911 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4911 = -150.0f;
COMPILER_STRIP_GATE(0x8054AA30, &lit_4911);
#pragma pop

/* 8054AA34-8054AA38 0000D0 0004+00 0/1 0/0 0/0 .rodata          @4912 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4912 = -0.5f;
COMPILER_STRIP_GATE(0x8054AA34, &lit_4912);
#pragma pop

/* 8054AA38-8054AA3C 0000D4 0004+00 0/1 0/0 0/0 .rodata          @4913 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4913 = -13.0f / 20.0f;
COMPILER_STRIP_GATE(0x8054AA38, &lit_4913);
#pragma pop

/* 80544A4C-805450A8 001C2C 065C+00 1/1 0/0 0/0 .text            action__FP15npc_henna_class */
static void action(npc_henna_class* param_0) {
    // NONMATCHING
}

/* 805450A8-8054518C 002288 00E4+00 1/1 0/0 0/0 .text            cam_3d_morf__FP15npc_henna_classf
 */
static void cam_3d_morf(npc_henna_class* param_0, f32 param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8054AA3C-8054AA40 0000D8 0004+00 0/1 0/0 0/0 .rodata          @5035 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5035 = -2815.0f;
COMPILER_STRIP_GATE(0x8054AA3C, &lit_5035);
#pragma pop

/* 8054AA40-8054AA44 0000DC 0004+00 0/1 0/0 0/0 .rodata          @5036 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5036 = 66.0f;
COMPILER_STRIP_GATE(0x8054AA40, &lit_5036);
#pragma pop

/* 8054AA44-8054AA48 0000E0 0004+00 0/1 0/0 0/0 .rodata          @5037 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5037 = 4604.0f;
COMPILER_STRIP_GATE(0x8054AA44, &lit_5037);
#pragma pop

/* 8054AA48-8054AA4C 0000E4 0004+00 0/1 0/0 0/0 .rodata          @5038 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5038 = -2914.0f;
COMPILER_STRIP_GATE(0x8054AA48, &lit_5038);
#pragma pop

/* 8054AA4C-8054AA50 0000E8 0004+00 0/1 0/0 0/0 .rodata          @5039 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5039 = 144.0f;
COMPILER_STRIP_GATE(0x8054AA4C, &lit_5039);
#pragma pop

/* 8054AA50-8054AA54 0000EC 0004+00 0/1 0/0 0/0 .rodata          @5040 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5040 = 5036.0f;
COMPILER_STRIP_GATE(0x8054AA50, &lit_5040);
#pragma pop

/* 8054AA54-8054AA58 0000F0 0004+00 0/1 0/0 0/0 .rodata          @5041 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5041 = 55.0f;
COMPILER_STRIP_GATE(0x8054AA54, &lit_5041);
#pragma pop

/* 8054AA58-8054AA5C 0000F4 0004+00 0/1 0/0 0/0 .rodata          @5042 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5042 = 4603.0f;
COMPILER_STRIP_GATE(0x8054AA58, &lit_5042);
#pragma pop

/* 8054B008-8054B00C 000090 0004+00 1/3 0/0 0/0 .bss             None */
static u8 data_8054B008[4];

/* 8054518C-8054549C 00236C 0310+00 1/1 0/0 0/0 .text            demo_camera__FP15npc_henna_class */
static void demo_camera(npc_henna_class* param_0) {
    // NONMATCHING
}

/* 8054549C-80545638 00267C 019C+00 1/1 0/0 0/0 .text zoom_check__FP15npc_henna_classP4cXyzs */
static void zoom_check(npc_henna_class* param_0, cXyz* param_1, s16 param_2) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8054AA5C-8054AA7C 0000F8 0020+00 0/0 0/0 0/0 .rodata          @5533 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5533[32] = {
    0x00, 0x01, 0xD4, 0xC0, 0x00, 0x01, 0x5F, 0x90, 0x00, 0x01, 0x38, 0x80, 0x00, 0x01, 0x11, 0x70,
    0x00, 0x00, 0xEA, 0x60, 0x00, 0x00, 0xC3, 0x50, 0x00, 0x00, 0x9C, 0x40, 0x00, 0x00, 0x75, 0x30,
};
COMPILER_STRIP_GATE(0x8054AA5C, &lit_5533);
#pragma pop

/* 8054AA7C-8054AA80 000118 0004+00 0/0 0/0 0/0 .rodata          @5678 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5678 = 0x0002BF20;
COMPILER_STRIP_GATE(0x8054AA7C, &lit_5678);
#pragma pop

/* 8054AA80-8054AA84 00011C 0004+00 0/2 0/0 0/0 .rodata          @5770 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5770 = 140.0f;
COMPILER_STRIP_GATE(0x8054AA80, &lit_5770);
#pragma pop

/* 8054AA84-8054AA88 000120 0004+00 0/1 0/0 0/0 .rodata          @5771 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5771 = 1500.0f;
COMPILER_STRIP_GATE(0x8054AA84, &lit_5771);
#pragma pop

/* 8054B00C-8054B018 000094 000C+00 0/1 0/0 0/0 .bss             @5112 */
#pragma push
#pragma force_active on
static u8 lit_5112[12];
#pragma pop

/* 8054B018-8054B024 0000A0 000C+00 0/1 0/0 0/0 .bss             @5113 */
#pragma push
#pragma force_active on
static u8 lit_5113[12];
#pragma pop

/* 8054B024-8054B030 0000AC 000C+00 0/1 0/0 0/0 .bss             @5114 */
#pragma push
#pragma force_active on
static u8 lit_5114[12];
#pragma pop

/* 8054B030-8054B03C 0000B8 000C+00 0/1 0/0 0/0 .bss             @5115 */
#pragma push
#pragma force_active on
static u8 lit_5115[12];
#pragma pop

/* 8054B03C-8054B048 0000C4 000C+00 0/1 0/0 0/0 .bss             @5116 */
#pragma push
#pragma force_active on
static u8 lit_5116[12];
#pragma pop

/* 8054B048-8054B054 0000D0 000C+00 0/1 0/0 0/0 .bss             @5117 */
#pragma push
#pragma force_active on
static u8 lit_5117[12];
#pragma pop

/* 8054B054-8054B060 0000DC 000C+00 0/1 0/0 0/0 .bss             @5118 */
#pragma push
#pragma force_active on
static u8 lit_5118[12];
#pragma pop

/* 8054B060-8054B06C 0000E8 000C+00 0/1 0/0 0/0 .bss             @5119 */
#pragma push
#pragma force_active on
static u8 lit_5119[12];
#pragma pop

/* 8054B06C-8054B078 0000F4 000C+00 0/1 0/0 0/0 .bss             @5120 */
#pragma push
#pragma force_active on
static u8 lit_5120[12];
#pragma pop

/* 8054B078-8054B084 000100 000C+00 0/1 0/0 0/0 .bss             @5121 */
#pragma push
#pragma force_active on
static u8 lit_5121[12];
#pragma pop

/* 8054B084-8054B090 00010C 000C+00 0/1 0/0 0/0 .bss             @5122 */
#pragma push
#pragma force_active on
static u8 lit_5122[12];
#pragma pop

/* 8054B090-8054B09C 000118 000C+00 0/1 0/0 0/0 .bss             @5123 */
#pragma push
#pragma force_active on
static u8 lit_5123[12];
#pragma pop

/* 8054B09C-8054B0A8 000124 000C+00 0/1 0/0 0/0 .bss             @5124 */
#pragma push
#pragma force_active on
static u8 lit_5124[12];
#pragma pop

/* 8054B0A8-8054B0B4 000130 000C+00 0/1 0/0 0/0 .bss             @5125 */
#pragma push
#pragma force_active on
static u8 lit_5125[12];
#pragma pop

/* 8054B0B4-8054B0C0 00013C 000C+00 0/1 0/0 0/0 .bss             @5126 */
#pragma push
#pragma force_active on
static u8 lit_5126[12];
#pragma pop

/* 8054B0C0-8054B0CC 000148 000C+00 0/1 0/0 0/0 .bss             @5127 */
#pragma push
#pragma force_active on
static u8 lit_5127[12];
#pragma pop

/* 8054B0CC-8054B0D8 000154 000C+00 0/1 0/0 0/0 .bss             @5128 */
#pragma push
#pragma force_active on
static u8 lit_5128[12];
#pragma pop

/* 8054B0D8-8054B0E4 000160 000C+00 0/1 0/0 0/0 .bss             @5129 */
#pragma push
#pragma force_active on
static u8 lit_5129[12];
#pragma pop

/* 8054B0E4-8054B0F0 00016C 000C+00 0/1 0/0 0/0 .bss             @5130 */
#pragma push
#pragma force_active on
static u8 lit_5130[12];
#pragma pop

/* 8054B0F0-8054B0FC 000178 000C+00 0/1 0/0 0/0 .bss             @5131 */
#pragma push
#pragma force_active on
static u8 lit_5131[12];
#pragma pop

/* 8054B0FC-8054B1EC 000184 00F0+00 0/2 0/0 0/0 .bss             zoom_check_pos */
#pragma push
#pragma force_active on
static u8 zoom_check_pos[240];
#pragma pop

/* 80545638-805483F4 002818 2DBC+00 3/1 0/0 0/0 .text demo_camera_shop__FP15npc_henna_class */
static void demo_camera_shop(npc_henna_class* param_0) {
    // NONMATCHING
}

/* 805483F4-80548640 0055D4 024C+00 1/1 0/0 0/0 .text            message_guide__FP15npc_henna_class
 */
static void message_guide(npc_henna_class* param_0) {
    // NONMATCHING
}

/* 80548640-8054868C 005820 004C+00 1/1 0/0 0/0 .text            s_boat_sub__FPvPv */
static void s_boat_sub(void* param_0, void* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8054AA88-8054AA8C 000124 0004+00 0/0 0/0 0/0 .rodata          @5772 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5772 = 65.0f;
COMPILER_STRIP_GATE(0x8054AA88, &lit_5772);
#pragma pop

/* 8054AA8C-8054AA90 000128 0004+00 0/1 0/0 0/0 .rodata          @5773 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5773 = 70.0f;
COMPILER_STRIP_GATE(0x8054AA8C, &lit_5773);
#pragma pop

/* 8054AA90-8054AA94 00012C 0004+00 0/0 0/0 0/0 .rodata          @5774 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5774 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x8054AA90, &lit_5774);
#pragma pop

/* 8054AA94-8054AA98 000130 0004+00 0/0 0/0 0/0 .rodata          @5775 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5775 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x8054AA94, &lit_5775);
#pragma pop

/* 8054AA98-8054AA9C 000134 0004+00 0/3 0/0 0/0 .rodata          @5776 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5776 = 50.0f;
COMPILER_STRIP_GATE(0x8054AA98, &lit_5776);
#pragma pop

/* 8054AA9C-8054AAA0 000138 0004+00 0/0 0/0 0/0 .rodata          @5777 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5777 = -36.0f;
COMPILER_STRIP_GATE(0x8054AA9C, &lit_5777);
#pragma pop

/* 8054AAA0-8054AAA4 00013C 0004+00 0/0 0/0 0/0 .rodata          @5778 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5778 = 155.0f;
COMPILER_STRIP_GATE(0x8054AAA0, &lit_5778);
#pragma pop

/* 8054AAA4-8054AAA8 000140 0004+00 0/0 0/0 0/0 .rodata          @5779 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5779 = 407.0f;
COMPILER_STRIP_GATE(0x8054AAA4, &lit_5779);
#pragma pop

/* 8054AAA8-8054AAAC 000144 0004+00 0/0 0/0 0/0 .rodata          @5780 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5780 = -45.0f;
COMPILER_STRIP_GATE(0x8054AAA8, &lit_5780);
#pragma pop

/* 8054AAAC-8054AAB0 000148 0004+00 0/2 0/0 0/0 .rodata          @5781 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5781 = 153.0f;
COMPILER_STRIP_GATE(0x8054AAAC, &lit_5781);
#pragma pop

/* 8054AAB0-8054AAB4 00014C 0004+00 0/0 0/0 0/0 .rodata          @5782 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5782 = 169.0f;
COMPILER_STRIP_GATE(0x8054AAB0, &lit_5782);
#pragma pop

/* 8054AAB4-8054AAB8 000150 0004+00 0/0 0/0 0/0 .rodata          @5783 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5783 = -270.0f;
COMPILER_STRIP_GATE(0x8054AAB4, &lit_5783);
#pragma pop

/* 8054AAB8-8054AABC 000154 0004+00 0/0 0/0 0/0 .rodata          @5784 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5784 = 103.0f;
COMPILER_STRIP_GATE(0x8054AAB8, &lit_5784);
#pragma pop

/* 8054AABC-8054AAC0 000158 0004+00 0/1 0/0 0/0 .rodata          @5785 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5785 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(0x8054AABC, &lit_5785);
#pragma pop

/* 8054AAC0-8054AAC4 00015C 0004+00 0/0 0/0 0/0 .rodata          @5786 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5786 = 0x3A83126F;
COMPILER_STRIP_GATE(0x8054AAC0, &lit_5786);
#pragma pop

/* 8054AAC4-8054AAC8 000160 0004+00 0/0 0/0 0/0 .rodata          @5787 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5787 = -67.0f;
COMPILER_STRIP_GATE(0x8054AAC4, &lit_5787);
#pragma pop

/* 8054AAC8-8054AACC 000164 0004+00 0/0 0/0 0/0 .rodata          @5788 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5788 = 105.0f;
COMPILER_STRIP_GATE(0x8054AAC8, &lit_5788);
#pragma pop

/* 8054AACC-8054AAD0 000168 0004+00 0/1 0/0 0/0 .rodata          @5789 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5789 = 160.0f;
COMPILER_STRIP_GATE(0x8054AACC, &lit_5789);
#pragma pop

/* 8054AAD0-8054AAD4 00016C 0004+00 0/0 0/0 0/0 .rodata          @5790 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5790 = -10.0f;
COMPILER_STRIP_GATE(0x8054AAD0, &lit_5790);
#pragma pop

/* 8054AAD4-8054AAD8 000170 0004+00 0/1 0/0 0/0 .rodata          @5791 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5791 = 130.0f;
COMPILER_STRIP_GATE(0x8054AAD4, &lit_5791);
#pragma pop

/* 8054AAD8-8054AADC 000174 0004+00 0/0 0/0 0/0 .rodata          @5792 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5792 = 2.0f / 5.0f;
COMPILER_STRIP_GATE(0x8054AAD8, &lit_5792);
#pragma pop

/* 8054AADC-8054AAE0 000178 0004+00 0/0 0/0 0/0 .rodata          @5793 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5793 = 80.0f;
COMPILER_STRIP_GATE(0x8054AADC, &lit_5793);
#pragma pop

/* 8054AAE0-8054AAE4 00017C 0004+00 0/0 0/0 0/0 .rodata          @5794 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5794 = 15.0f;
COMPILER_STRIP_GATE(0x8054AAE0, &lit_5794);
#pragma pop

/* 8054AAE4-8054AAE8 000180 0004+00 0/0 0/0 0/0 .rodata          @5795 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5795 = -440.0f;
COMPILER_STRIP_GATE(0x8054AAE4, &lit_5795);
#pragma pop

/* 8054AAE8-8054AAEC 000184 0004+00 0/1 0/0 0/0 .rodata          @5796 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5796 = 380.0f;
COMPILER_STRIP_GATE(0x8054AAE8, &lit_5796);
#pragma pop

/* 8054AAEC-8054AAF0 000188 0004+00 0/0 0/0 0/0 .rodata          @5797 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5797 = -263.0f;
COMPILER_STRIP_GATE(0x8054AAEC, &lit_5797);
#pragma pop

/* 8054AAF0-8054AAF4 00018C 0004+00 0/0 0/0 0/0 .rodata          @5798 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5798 = 142.0f;
COMPILER_STRIP_GATE(0x8054AAF0, &lit_5798);
#pragma pop

/* 8054AAF4-8054AAF8 000190 0004+00 0/0 0/0 0/0 .rodata          @5799 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5799 = 162.0f;
COMPILER_STRIP_GATE(0x8054AAF4, &lit_5799);
#pragma pop

/* 8054AAF8-8054AAFC 000194 0004+00 0/0 0/0 0/0 .rodata          @5800 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5800 = -538.0f;
COMPILER_STRIP_GATE(0x8054AAF8, &lit_5800);
#pragma pop

/* 8054AAFC-8054AB00 000198 0004+00 0/0 0/0 0/0 .rodata          @5801 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5801 = 116.0f;
COMPILER_STRIP_GATE(0x8054AAFC, &lit_5801);
#pragma pop

/* 8054AB00-8054AB04 00019C 0004+00 0/1 0/0 0/0 .rodata          @5802 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5802 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x8054AB00, &lit_5802);
#pragma pop

/* 8054AB04-8054AB08 0001A0 0004+00 0/0 0/0 0/0 .rodata          @5803 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5803 = 3.0f / 50.0f;
COMPILER_STRIP_GATE(0x8054AB04, &lit_5803);
#pragma pop

/* 8054AB08-8054AB0C 0001A4 0004+00 0/0 0/0 0/0 .rodata          @5804 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5804 = 1.0f / 50.0f;
COMPILER_STRIP_GATE(0x8054AB08, &lit_5804);
#pragma pop

/* 8054AB0C-8054AB10 0001A8 0004+00 0/0 0/0 0/0 .rodata          @5805 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5805 = 171.0f;
COMPILER_STRIP_GATE(0x8054AB0C, &lit_5805);
#pragma pop

/* 8054AB10-8054AB14 0001AC 0004+00 0/1 0/0 0/0 .rodata          @5806 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5806 = 432.0f;
COMPILER_STRIP_GATE(0x8054AB10, &lit_5806);
#pragma pop

/* 8054AB14-8054AB18 0001B0 0004+00 0/0 0/0 0/0 .rodata          @5807 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5807 = -900.0f;
COMPILER_STRIP_GATE(0x8054AB14, &lit_5807);
#pragma pop

/* 8054AB18-8054AB1C 0001B4 0004+00 0/0 0/0 0/0 .rodata          @5808 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5808 = 1300.0f;
COMPILER_STRIP_GATE(0x8054AB18, &lit_5808);
#pragma pop

/* 8054AB1C-8054AB20 0001B8 0004+00 0/1 0/0 0/0 .rodata          @5809 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5809 = 210.0f;
COMPILER_STRIP_GATE(0x8054AB1C, &lit_5809);
#pragma pop

/* 8054AB20-8054AB24 0001BC 0004+00 0/0 0/0 0/0 .rodata          @5810 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5810 = 410.0f;
COMPILER_STRIP_GATE(0x8054AB20, &lit_5810);
#pragma pop

/* 8054AB24-8054AB28 0001C0 0004+00 0/0 0/0 0/0 .rodata          @5811 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5811 = 32.0f;
COMPILER_STRIP_GATE(0x8054AB24, &lit_5811);
#pragma pop

/* 8054AB28-8054AB2C 0001C4 0004+00 0/0 0/0 0/0 .rodata          @5812 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5812 = 419.0f;
COMPILER_STRIP_GATE(0x8054AB28, &lit_5812);
#pragma pop

/* 8054AB2C-8054AB30 0001C8 0004+00 0/1 0/0 0/0 .rodata          @5813 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5813 = -500.0f;
COMPILER_STRIP_GATE(0x8054AB2C, &lit_5813);
#pragma pop

/* 8054AB30-8054AB34 0001CC 0004+00 0/1 0/0 0/0 .rodata          @5814 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5814 = 600.0f;
COMPILER_STRIP_GATE(0x8054AB30, &lit_5814);
#pragma pop

/* 8054AB34-8054AB38 0001D0 0004+00 0/0 0/0 0/0 .rodata          @5815 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5815 = -16384.0f;
COMPILER_STRIP_GATE(0x8054AB34, &lit_5815);
#pragma pop

/* 8054AB38-8054AB3C 0001D4 0004+00 0/0 0/0 0/0 .rodata          @5816 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5816 = -4.0f / 5.0f;
COMPILER_STRIP_GATE(0x8054AB38, &lit_5816);
#pragma pop

/* 8054AB3C-8054AB40 0001D8 0004+00 0/0 0/0 0/0 .rodata          @5817 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5817 = -610.0f;
COMPILER_STRIP_GATE(0x8054AB3C, &lit_5817);
#pragma pop

/* 8054AB40-8054AB44 0001DC 0004+00 0/0 0/0 0/0 .rodata          @5818 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5818 = 143.0f;
COMPILER_STRIP_GATE(0x8054AB40, &lit_5818);
#pragma pop

/* 8054AB44-8054AB48 0001E0 0004+00 0/0 0/0 0/0 .rodata          @5819 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5819 = -880.0f;
COMPILER_STRIP_GATE(0x8054AB44, &lit_5819);
#pragma pop

/* 8054AB48-8054AB4C 0001E4 0004+00 0/0 0/0 0/0 .rodata          @5820 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5820 = 146.0f;
COMPILER_STRIP_GATE(0x8054AB48, &lit_5820);
#pragma pop

/* 8054AB4C-8054AB50 0001E8 0004+00 0/0 0/0 0/0 .rodata          @5821 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5821 = 502.0f;
COMPILER_STRIP_GATE(0x8054AB4C, &lit_5821);
#pragma pop

/* 8054AB50-8054AB54 0001EC 0004+00 0/0 0/0 0/0 .rodata          @5822 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5822 = 25.0f;
COMPILER_STRIP_GATE(0x8054AB50, &lit_5822);
#pragma pop

/* 8054AB54-8054AB58 0001F0 0004+00 0/1 0/0 0/0 .rodata          @5823 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5823 = -250.0f;
COMPILER_STRIP_GATE(0x8054AB54, &lit_5823);
#pragma pop

/* 8054AB58-8054AB5C 0001F4 0004+00 0/1 0/0 0/0 .rodata          @6059 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6059 = -2591.0f;
COMPILER_STRIP_GATE(0x8054AB58, &lit_6059);
#pragma pop

/* 8054AB5C-8054AB60 0001F8 0004+00 0/1 0/0 0/0 .rodata          @6060 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6060 = -6742.0f;
COMPILER_STRIP_GATE(0x8054AB5C, &lit_6060);
#pragma pop

/* 8054AB60-8054AB64 0001FC 0004+00 0/1 0/0 0/0 .rodata          @6061 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6061 = 3500.0f;
COMPILER_STRIP_GATE(0x8054AB60, &lit_6061);
#pragma pop

/* 8054AB64-8054AB68 000200 0004+00 0/1 0/0 0/0 .rodata          @6062 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6062 = 180.0f;
COMPILER_STRIP_GATE(0x8054AB64, &lit_6062);
#pragma pop

/* 8054AB68-8054AB6C 000204 0004+00 0/1 0/0 0/0 .rodata          @6063 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_6063 = 0x3D3851EC;
COMPILER_STRIP_GATE(0x8054AB68, &lit_6063);
#pragma pop

/* 8054AB6C-8054AB70 000208 0004+00 0/1 0/0 0/0 .rodata          @6064 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6064 = 250.0f;
COMPILER_STRIP_GATE(0x8054AB6C, &lit_6064);
#pragma pop

/* 8054B1EC-8054B1F4 000274 0004+04 0/0 0/0 0/0 .bss             koro2_reset */
#pragma push
#pragma force_active on
static u8 koro2_reset[4 + 4 /* padding */];
#pragma pop

/* 8054B1F4-8054B1FC 00027C 0004+04 0/0 0/0 0/0 .bss             old_stick_x$5644 */
#pragma push
#pragma force_active on
static u8 old_stick_x[4 + 4 /* padding */];
#pragma pop

/* 8054B1FC-8054B204 -00001 0008+00 1/2 0/0 0/0 .bss             None */
/* 8054B1FC 0004+01 data_8054B1FC old_stick_sx$5647 */
/* 8054B201 0003+00 data_8054B201 None */
static u8 struct_8054B1FC[8];

/* 8054868C-805488B8 00586C 022C+00 1/1 0/0 0/0 .text            env_control__FP15npc_henna_class */
static void env_control(npc_henna_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8054AB70-8054AB74 00020C 0004+00 0/1 0/0 0/0 .rodata          @6419 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_6419 = 0xB8D1B717;
COMPILER_STRIP_GATE(0x8054AB70, &lit_6419);
#pragma pop

/* 8054AB74-8054AB78 000210 0004+00 0/1 0/0 0/0 .rodata          @6420 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_6420 = 0xBD872B02;
COMPILER_STRIP_GATE(0x8054AB74, &lit_6420);
#pragma pop

/* 8054AB78-8054AB7C 000214 0004+00 0/1 0/0 0/0 .rodata          @6421 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_6421 = 0x38D1B717;
COMPILER_STRIP_GATE(0x8054AB78, &lit_6421);
#pragma pop

/* 8054AB7C-8054AB80 000218 0004+00 0/1 0/0 0/0 .rodata          @6422 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_6422 = 0x3D872B02;
COMPILER_STRIP_GATE(0x8054AB7C, &lit_6422);
#pragma pop

/* 8054AB80-8054AB84 00021C 0004+00 0/1 0/0 0/0 .rodata          @6423 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6423 = 9.5f;
COMPILER_STRIP_GATE(0x8054AB80, &lit_6423);
#pragma pop

/* 8054AB84-8054AB88 000220 0004+00 0/1 0/0 0/0 .rodata          @6424 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6424 = 17.5f;
COMPILER_STRIP_GATE(0x8054AB84, &lit_6424);
#pragma pop

/* 8054AB88-8054AB8C 000224 0004+00 0/1 0/0 0/0 .rodata          @6425 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6425 = 4.0f;
COMPILER_STRIP_GATE(0x8054AB88, &lit_6425);
#pragma pop

/* 8054AB8C-8054AB90 000228 0004+00 0/1 0/0 0/0 .rodata          @6426 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6426 = -60.0f;
COMPILER_STRIP_GATE(0x8054AB8C, &lit_6426);
#pragma pop

/* 8054AB90-8054AB94 00022C 0004+00 0/1 0/0 0/0 .rodata          @6427 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6427 = -50.0f;
COMPILER_STRIP_GATE(0x8054AB90, &lit_6427);
#pragma pop

/* 8054AB94-8054AB98 000230 0004+00 0/1 0/0 0/0 .rodata          @6428 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6428 = -460.0f;
COMPILER_STRIP_GATE(0x8054AB94, &lit_6428);
#pragma pop

/* 8054AB98-8054AB9C 000234 0004+00 0/1 0/0 0/0 .rodata          @6429 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6429 = 51.0f;
COMPILER_STRIP_GATE(0x8054AB98, &lit_6429);
#pragma pop

/* 8054AB9C-8054ABA0 000238 0004+00 0/1 0/0 0/0 .rodata          @6430 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6430 = -240.0f;
COMPILER_STRIP_GATE(0x8054AB9C, &lit_6430);
#pragma pop

/* 8054ABA0-8054ABA4 00023C 0004+00 0/1 0/0 0/0 .rodata          @6431 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6431 = -790.0f;
COMPILER_STRIP_GATE(0x8054ABA0, &lit_6431);
#pragma pop

/* 8054ABA4-8054ABA8 000240 0004+00 0/1 0/0 0/0 .rodata          @6432 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6432 = 590.0f;
COMPILER_STRIP_GATE(0x8054ABA4, &lit_6432);
#pragma pop

/* 805488B8-805492A4 005A98 09EC+00 2/1 0/0 0/0 .text daNpc_Henna_Execute__FP15npc_henna_class */
static void daNpc_Henna_Execute(npc_henna_class* param_0) {
    // NONMATCHING
}

/* 805492A4-805492AC 006484 0008+00 1/0 0/0 0/0 .text daNpc_Henna_IsDelete__FP15npc_henna_class */
static bool daNpc_Henna_IsDelete(npc_henna_class* param_0) {
    return true;
}

/* 805492AC-80549300 00648C 0054+00 1/0 0/0 0/0 .text daNpc_Henna_Delete__FP15npc_henna_class */
static void daNpc_Henna_Delete(npc_henna_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8054AC70-8054AC70 00030C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8054AC76 = "F_SP127";
#pragma pop

/* 80549300-805496DC 0064E0 03DC+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
static void useHeapInit(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 805496DC-80549724 0068BC 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
// J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" void __dt__12J3DFrameCtrlFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8054ABA8-8054ABAC 000244 0004+00 0/1 0/0 0/0 .rodata          @6814 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6814 = -380.0f;
COMPILER_STRIP_GATE(0x8054ABA8, &lit_6814);
#pragma pop

/* 8054ABAC-8054ABB0 000248 0004+00 0/1 0/0 0/0 .rodata          @6815 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6815 = 450.0f;
COMPILER_STRIP_GATE(0x8054ABAC, &lit_6815);
#pragma pop

/* 8054ABB0-8054ABB4 00024C 0004+00 0/1 0/0 0/0 .rodata          @6816 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6816 = 33.0f / 100.0f;
COMPILER_STRIP_GATE(0x8054ABB0, &lit_6816);
#pragma pop

/* 8054ABB4-8054ABB8 000250 0004+00 0/1 0/0 0/0 .rodata          @6817 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6817 = 4400.0f;
COMPILER_STRIP_GATE(0x8054ABB4, &lit_6817);
#pragma pop

/* 8054ABB8-8054ABBC 000254 0004+00 0/1 0/0 0/0 .rodata          @6818 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6818 = 2122.0f;
COMPILER_STRIP_GATE(0x8054ABB8, &lit_6818);
#pragma pop

/* 8054ABBC-8054ABC0 000258 0004+00 0/1 0/0 0/0 .rodata          @6819 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6819 = 33.0f / 50.0f;
COMPILER_STRIP_GATE(0x8054ABBC, &lit_6819);
#pragma pop

/* 8054ABC0-8054ABC4 00025C 0004+00 0/1 0/0 0/0 .rodata          @6820 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6820 = -606.0f;
COMPILER_STRIP_GATE(0x8054ABC0, &lit_6820);
#pragma pop

/* 8054ABC4-8054ABC8 000260 0004+00 0/1 0/0 0/0 .rodata          @6821 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6821 = 5210.0f;
COMPILER_STRIP_GATE(0x8054ABC4, &lit_6821);
#pragma pop

/* 8054ABC8-8054ABCC 000264 0004+00 0/1 0/0 0/0 .rodata          @6822 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6822 = 2249.0f;
COMPILER_STRIP_GATE(0x8054ABC8, &lit_6822);
#pragma pop

/* 8054ABCC-8054ABD0 000268 0004+00 0/1 0/0 0/0 .rodata          @6823 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6823 = -2218.0f;
COMPILER_STRIP_GATE(0x8054ABCC, &lit_6823);
#pragma pop

/* 8054ABD0-8054ABD4 00026C 0004+00 0/2 0/0 0/0 .rodata          @6824 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6824 = 45.0f;
COMPILER_STRIP_GATE(0x8054ABD0, &lit_6824);
#pragma pop

/* 8054ABD4-8054ABD8 000270 0004+00 0/1 0/0 0/0 .rodata          @6825 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6825 = 8000.0f;
COMPILER_STRIP_GATE(0x8054ABD4, &lit_6825);
#pragma pop

/* 8054ABD8-8054ABDC 000274 0004+00 0/1 0/0 0/0 .rodata          @6826 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6826 = -1500.0f;
COMPILER_STRIP_GATE(0x8054ABD8, &lit_6826);
#pragma pop

/* 8054ABDC-8054ABE0 000278 0004+00 0/1 0/0 0/0 .rodata          @6827 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6827 = 3000.0f;
COMPILER_STRIP_GATE(0x8054ABDC, &lit_6827);
#pragma pop

/* 8054ABE0-8054ABE4 00027C 0004+00 0/1 0/0 0/0 .rodata          @6828 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6828 = 65536.0f;
COMPILER_STRIP_GATE(0x8054ABE0, &lit_6828);
#pragma pop

/* 8054ABE4-8054ABE8 000280 0004+00 0/1 0/0 0/0 .rodata          @6829 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6829 = -160.0f;
COMPILER_STRIP_GATE(0x8054ABE4, &lit_6829);
#pragma pop

/* 8054ABE8-8054ABEC 000284 0004+00 0/1 0/0 0/0 .rodata          @6830 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6830 = 2300.0f;
COMPILER_STRIP_GATE(0x8054ABE8, &lit_6830);
#pragma pop

/* 8054AC70-8054AC70 00030C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8054AC7E = "T_MUKAO";
#pragma pop

/* 80549724-80549E40 006904 071C+00 1/0 0/0 0/0 .text            daNpc_Henna_Create__FP10fopAc_ac_c
 */
static void daNpc_Henna_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80549E40-80549E88 007020 0048+00 2/1 0/0 0/0 .text            __dt__17daNpc_Henna_HIO_cFv */
daNpc_Henna_HIO_c::~daNpc_Henna_HIO_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8054ABEC-8054ABF0 000288 0004+00 0/1 0/0 0/0 .rodata          @7004 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7004 = -720.0f;
COMPILER_STRIP_GATE(0x8054ABEC, &lit_7004);
#pragma pop

/* 8054ABF0-8054ABF4 00028C 0004+00 0/1 0/0 0/0 .rodata          @7005 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7005 = 100000.0f;
COMPILER_STRIP_GATE(0x8054ABF0, &lit_7005);
#pragma pop

/* 8054ABF4-8054ABF8 000290 0004+00 0/1 0/0 0/0 .rodata          @7006 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7006 = 176.0f;
COMPILER_STRIP_GATE(0x8054ABF4, &lit_7006);
#pragma pop

/* 8054ABF8-8054ABFC 000294 0004+00 0/1 0/0 0/0 .rodata          @7007 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7007 = 595.0f;
COMPILER_STRIP_GATE(0x8054ABF8, &lit_7007);
#pragma pop

/* 8054ABFC-8054AC00 000298 0004+00 0/1 0/0 0/0 .rodata          @7008 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7008 = -376.0f;
COMPILER_STRIP_GATE(0x8054ABFC, &lit_7008);
#pragma pop

/* 8054AC00-8054AC04 00029C 0004+00 0/1 0/0 0/0 .rodata          @7009 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7009 = 135.0f;
COMPILER_STRIP_GATE(0x8054AC00, &lit_7009);
#pragma pop

/* 8054AC04-8054AC08 0002A0 0004+00 0/1 0/0 0/0 .rodata          @7010 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7010 = -464.0f;
COMPILER_STRIP_GATE(0x8054AC04, &lit_7010);
#pragma pop

/* 8054AC08-8054AC0C 0002A4 0004+00 0/1 0/0 0/0 .rodata          @7011 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7011 = -648.0f;
COMPILER_STRIP_GATE(0x8054AC08, &lit_7011);
#pragma pop

/* 8054AC0C-8054AC10 0002A8 0004+00 0/1 0/0 0/0 .rodata          @7012 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7012 = 312.0f;
COMPILER_STRIP_GATE(0x8054AC0C, &lit_7012);
#pragma pop

/* 8054AC10-8054AC14 0002AC 0004+00 0/1 0/0 0/0 .rodata          @7013 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7013 = 545.0f;
COMPILER_STRIP_GATE(0x8054AC10, &lit_7013);
#pragma pop

/* 8054AC14-8054AC18 0002B0 0004+00 0/1 0/0 0/0 .rodata          @7014 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7014 = -262.0f;
COMPILER_STRIP_GATE(0x8054AC14, &lit_7014);
#pragma pop

/* 8054AC18-8054AC1C 0002B4 0004+00 0/1 0/0 0/0 .rodata          @7015 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7015 = 57.0f;
COMPILER_STRIP_GATE(0x8054AC18, &lit_7015);
#pragma pop

/* 8054AC1C-8054AC20 0002B8 0004+00 0/1 0/0 0/0 .rodata          @7016 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7016 = -387.0f;
COMPILER_STRIP_GATE(0x8054AC1C, &lit_7016);
#pragma pop

/* 8054AC20-8054AC24 0002BC 0004+00 0/1 0/0 0/0 .rodata          @7017 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7017 = 215.0f;
COMPILER_STRIP_GATE(0x8054AC20, &lit_7017);
#pragma pop

/* 8054AC24-8054AC28 0002C0 0004+00 0/1 0/0 0/0 .rodata          @7018 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7018 = -274.0f;
COMPILER_STRIP_GATE(0x8054AC24, &lit_7018);
#pragma pop

/* 8054AC28-8054AC2C 0002C4 0004+00 0/1 0/0 0/0 .rodata          @7019 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7019 = 10335.0f;
COMPILER_STRIP_GATE(0x8054AC28, &lit_7019);
#pragma pop

/* 8054AC2C-8054AC30 0002C8 0004+00 0/1 0/0 0/0 .rodata          @7020 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7020 = 254.0f;
COMPILER_STRIP_GATE(0x8054AC2C, &lit_7020);
#pragma pop

/* 8054AC30-8054AC34 0002CC 0004+00 0/1 0/0 0/0 .rodata          @7021 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7021 = 10025.0f;
COMPILER_STRIP_GATE(0x8054AC30, &lit_7021);
#pragma pop

/* 8054AC34-8054AC38 0002D0 0004+00 0/1 0/0 0/0 .rodata          @7022 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7022 = 240.0f;
COMPILER_STRIP_GATE(0x8054AC34, &lit_7022);
#pragma pop

/* 8054AC38-8054AC3C 0002D4 0004+00 0/1 0/0 0/0 .rodata          @7023 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7023 = -208.0f;
COMPILER_STRIP_GATE(0x8054AC38, &lit_7023);
#pragma pop

/* 8054AC3C-8054AC40 0002D8 0004+00 0/1 0/0 0/0 .rodata          @7024 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7024 = -110.0f;
COMPILER_STRIP_GATE(0x8054AC3C, &lit_7024);
#pragma pop

/* 8054AC40-8054AC44 0002DC 0004+00 0/1 0/0 0/0 .rodata          @7025 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7025 = 248.0f;
COMPILER_STRIP_GATE(0x8054AC40, &lit_7025);
#pragma pop

/* 8054AC44-8054AC48 0002E0 0004+00 0/1 0/0 0/0 .rodata          @7026 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7026 = 234.0f;
COMPILER_STRIP_GATE(0x8054AC44, &lit_7026);
#pragma pop

/* 8054AC48-8054AC4C 0002E4 0004+00 0/1 0/0 0/0 .rodata          @7027 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7027 = 141.0f;
COMPILER_STRIP_GATE(0x8054AC48, &lit_7027);
#pragma pop

/* 8054AC4C-8054AC50 0002E8 0004+00 0/1 0/0 0/0 .rodata          @7028 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7028 = 34.0f;
COMPILER_STRIP_GATE(0x8054AC4C, &lit_7028);
#pragma pop

/* 8054AC50-8054AC54 0002EC 0004+00 0/1 0/0 0/0 .rodata          @7029 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7029 = 149.0f;
COMPILER_STRIP_GATE(0x8054AC50, &lit_7029);
#pragma pop

/* 8054AC54-8054AC58 0002F0 0004+00 0/1 0/0 0/0 .rodata          @7030 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7030 = -64.0f;
COMPILER_STRIP_GATE(0x8054AC54, &lit_7030);
#pragma pop

/* 8054AC58-8054AC5C 0002F4 0004+00 0/1 0/0 0/0 .rodata          @7031 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7031 = -166.0f;
COMPILER_STRIP_GATE(0x8054AC58, &lit_7031);
#pragma pop

/* 8054AC5C-8054AC60 0002F8 0004+00 0/1 0/0 0/0 .rodata          @7032 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7032 = -131.0f;
COMPILER_STRIP_GATE(0x8054AC5C, &lit_7032);
#pragma pop

/* 8054AC60-8054AC64 0002FC 0004+00 0/1 0/0 0/0 .rodata          @7033 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7033 = 566.0f;
COMPILER_STRIP_GATE(0x8054AC60, &lit_7033);
#pragma pop

/* 8054AC64-8054AC68 000300 0004+00 0/1 0/0 0/0 .rodata          @7034 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7034 = 323.0f;
COMPILER_STRIP_GATE(0x8054AC64, &lit_7034);
#pragma pop

/* 8054AC68-8054AC6C 000304 0004+00 0/1 0/0 0/0 .rodata          @7035 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7035 = 233.0f;
COMPILER_STRIP_GATE(0x8054AC68, &lit_7035);
#pragma pop

/* 8054AC6C-8054AC70 000308 0004+00 0/1 0/0 0/0 .rodata          @7036 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7036 = 284.0f;
COMPILER_STRIP_GATE(0x8054AC6C, &lit_7036);
#pragma pop

/* 80549E88-8054A384 007068 04FC+00 0/1 1/0 0/0 .text            __sinit_d_a_npc_henna_cpp */
void __sinit_d_a_npc_henna_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80549E88, __sinit_d_a_npc_henna_cpp);
#pragma pop

/* 8054A384-8054A398 007564 0014+00 1/1 0/0 0/0 .text            cancelOriginalDemo__9daPy_py_cFv */
// void daPy_py_c::cancelOriginalDemo() {
extern "C" void cancelOriginalDemo__9daPy_py_cFv() {
    // NONMATCHING
}

/* 8054A398-8054A3B4 007578 001C+00 1/1 0/0 0/0 .text            __ct__4cXyzFRC4cXyz */
// cXyz::cXyz(cXyz const& param_0) {
extern "C" void __ct__4cXyzFRC4cXyz() {
    // NONMATCHING
}

/* 8054A3B4-8054A418 007594 0064+00 1/1 0/0 0/0 .text            mDoAud_seStart__FUlPC3VecUlSc */
// static void mDoAud_seStart(u32 param_0, Vec const* param_1, u32 param_2, s8 param_3) {
extern "C" static asm void mDoAud_seStart__FUlPC3VecUlSc() {
    // NONMATCHING
}

/* 8054A418-8054A430 0075F8 0018+00 1/1 0/0 0/0 .text            getSubStickX__8mDoCPd_cFUl */
// void mDoCPd_c::getSubStickX(u32 param_0) {
extern "C" void getSubStickX__8mDoCPd_cFUl() {
    // NONMATCHING
}

/* 8054A430-8054A444 007610 0014+00 1/1 0/0 0/0 .text            getStickX3D__8mDoCPd_cFUl */
// void mDoCPd_c::getStickX3D(u32 param_0) {
extern "C" void getStickX3D__8mDoCPd_cFUl() {
    // NONMATCHING
}

/* 8054A444-8054A458 007624 0014+00 1/1 0/0 0/0 .text            dComIfGp_setDoStatusForce__FUcUc */
// static void dComIfGp_setDoStatusForce(u8 param_0, u8 param_1) {
extern "C" static asm void dComIfGp_setDoStatusForce__FUcUc() {
    // NONMATCHING
}

/* 8054A458-8054A490 007638 0038+00 1/1 0/0 0/0 .text            dComIfGs_setEventReg__FUsUc */
// static void dComIfGs_setEventReg(u16 param_0, u8 param_1) {
extern "C" static asm void dComIfGs_setEventReg__FUsUc() {
    // NONMATCHING
}

/* 8054A490-8054A4A0 007670 0010+00 1/1 0/0 0/0 .text            Z2GetAudioMgr__Fv */
// static void Z2GetAudioMgr() {
extern "C" static asm void Z2GetAudioMgr__Fv() {
    // NONMATCHING
}

/* 8054A4A0-8054A4CC 007680 002C+00 1/1 0/0 0/0 .text            dComIfG_getTimerPtr__Fv */
// static void dComIfG_getTimerPtr() {
extern "C" static asm void dComIfG_getTimerPtr__Fv() {
    // NONMATCHING
}

/* 8054A4CC-8054A4F0 0076AC 0024+00 1/1 0/0 0/0 .text            fadeIn__13mDoGph_gInf_cFfR8_GXColor
 */
// void mDoGph_gInf_c::fadeIn(f32 param_0, _GXColor& param_1) {
extern "C" void fadeIn__13mDoGph_gInf_cFfR8_GXColor() {
    // NONMATCHING
}

/* 8054A4F0-8054A510 0076D0 0020+00 1/1 0/0 0/0 .text            fpcM_Search__FPFPvPv_PvPv */
// static void fpcM_Search(void* (*param_0)(void*, void*), void* param_1) {
extern "C" static asm void fpcM_Search__FPFPvPv_PvPv() {
    // NONMATCHING
}

/* 8054A510-8054A52C 0076F0 001C+00 1/1 0/0 0/0 .text            getTrigA__8mDoCPd_cFUl */
// void mDoCPd_c::getTrigA(u32 param_0) {
extern "C" void getTrigA__8mDoCPd_cFUl() {
    // NONMATCHING
}

/* 8054A52C-8054A558 00770C 002C+00 1/1 0/0 0/0 .text            dComIfGp_event_reset__Fv */
// static void dComIfGp_event_reset() {
extern "C" static asm void dComIfGp_event_reset__Fv() {
    // NONMATCHING
}

/* 8054A558-8054A568 007738 0010+00 1/1 0/0 0/0 .text            offPlayerNoDraw__9daPy_py_cFv */
// void daPy_py_c::offPlayerNoDraw() {
extern "C" void offPlayerNoDraw__9daPy_py_cFv() {
    // NONMATCHING
}

/* 8054A568-8054A578 007748 0010+00 1/1 0/0 0/0 .text            dComIfGp_setMessageCountNumber__Fl
 */
// static void dComIfGp_setMessageCountNumber(s32 param_0) {
extern "C" static asm void dComIfGp_setMessageCountNumber__Fl() {
    // NONMATCHING
}

/* 8054A578-8054A590 007758 0018+00 1/1 0/0 0/0 .text            dComIfGp_event_offHindFlag__FUs */
// static void dComIfGp_event_offHindFlag(u16 param_0) {
extern "C" static asm void dComIfGp_event_offHindFlag__FUs() {
    // NONMATCHING
}

/* 8054A590-8054A59C 007770 000C+00 1/1 0/0 0/0 .text            dKy_getEnvlight__Fv */
// static void dKy_getEnvlight() {
extern "C" static asm void dKy_getEnvlight__Fv() {
    // NONMATCHING
}

/* 8054A59C-8054A5BC 00777C 0020+00 1/1 0/0 0/0 .text            cMtx_XrotM__FPA4_fs */
// static void cMtx_XrotM(f32 (*param_0)[4], s16 param_1) {
extern "C" static asm void cMtx_XrotM__FPA4_fs() {
    // NONMATCHING
}

/* 8054A5BC-8054A6D0 00779C 0114+00 1/1 0/0 0/0 .text            abs__4cXyzCFv */
// void cXyz::abs() const {
extern "C" void abs__4cXyzCFv() {
    // NONMATCHING
}

/* 8054A6D0-8054A6E0 0078B0 0010+00 1/1 0/0 0/0 .text            onPlayerNoDraw__9daPy_py_cFv */
// void daPy_py_c::onPlayerNoDraw() {
extern "C" void onPlayerNoDraw__9daPy_py_cFv() {
    // NONMATCHING
}

/* 8054A6E0-8054A6F8 0078C0 0018+00 1/1 0/0 0/0 .text            dComIfGp_setItemRupeeCount__Fl */
// static void dComIfGp_setItemRupeeCount(s32 param_0) {
extern "C" static asm void dComIfGp_setItemRupeeCount__Fl() {
    // NONMATCHING
}

/* 8054A6F8-8054A708 0078D8 0010+00 1/1 0/0 0/0 .text            dComIfGs_getRupee__Fv */
// static void dComIfGs_getRupee() {
extern "C" static asm void dComIfGs_getRupee__Fv() {
    // NONMATCHING
}

/* 8054A708-8054A714 0078E8 000C+00 1/1 0/0 0/0 .text            fabsf__3stdFf */
// void std::fabsf(f32 param_0) {
extern "C" void fabsf__3stdFf() {
    // NONMATCHING
}

/* 8054A714-8054A724 0078F4 0010+00 1/1 0/0 0/0 .text            set__4cXyzFfff */
// void cXyz::set(f32 param_0, f32 param_1, f32 param_2) {
extern "C" void set__4cXyzFfff() {
    // NONMATCHING
}

/* 8054A724-8054A758 007904 0034+00 1/1 0/0 0/0 .text            __apl__4cXyzFRC3Vec */
// void cXyz::operator+=(Vec const& param_0) {
extern "C" void __apl__4cXyzFRC3Vec() {
    // NONMATCHING
}

/* 8054A758-8054A778 007938 0020+00 1/1 0/0 0/0 .text            cMtx_YrotS__FPA4_fs */
// static void cMtx_YrotS(f32 (*param_0)[4], s16 param_1) {
extern "C" static asm void cMtx_YrotS__FPA4_fs() {
    // NONMATCHING
}

/* 8054A778-8054A78C 007958 0014+00 1/1 0/0 0/0 .text            changeDemoMode__9daPy_py_cFUliis */
// void daPy_py_c::changeDemoMode(u32 param_0, int param_1, int param_2, s16 param_3) {
extern "C" void changeDemoMode__9daPy_py_cFUliis() {
    // NONMATCHING
}

/* 8054A78C-8054A7A0 00796C 0014+00 1/1 0/0 0/0 .text            changeOriginalDemo__9daPy_py_cFv */
// void daPy_py_c::changeOriginalDemo() {
extern "C" void changeOriginalDemo__9daPy_py_cFv() {
    // NONMATCHING
}

/* 8054A7A0-8054A7B0 007980 0010+00 1/1 0/0 0/0 .text            daPy_getPlayerActorClass__Fv */
// static void daPy_getPlayerActorClass() {
extern "C" static asm void daPy_getPlayerActorClass__Fv() {
    // NONMATCHING
}

/* 8054A7B0-8054A7C0 007990 0010+00 1/1 0/0 0/0 .text            onCondition__11dEvt_info_cFUs */
// void dEvt_info_c::onCondition(u16 param_0) {
extern "C" void onCondition__11dEvt_info_cFUs() {
    // NONMATCHING
}

/* 8054A7C0-8054A7D4 0079A0 0014+00 1/1 0/0 0/0 .text checkCommandDemoAccrpt__11dEvt_info_cFv */
// void dEvt_info_c::checkCommandDemoAccrpt() {
extern "C" void checkCommandDemoAccrpt__11dEvt_info_cFv() {
    // NONMATCHING
}

/* 8054A7D4-8054A7F0 0079B4 001C+00 1/1 0/0 0/0 .text            __as__4cXyzFRC4cXyz */
// void cXyz::operator=(cXyz const& param_0) {
extern "C" void __as__4cXyzFRC4cXyz() {
    // NONMATCHING
}

/* 8054A7F0-8054A80C 0079D0 001C+00 1/1 0/0 0/0 .text            dComIfGp_checkPlayerStatus0__FiUl
 */
// static void dComIfGp_checkPlayerStatus0(int param_0, u32 param_1) {
extern "C" static asm void dComIfGp_checkPlayerStatus0__FiUl() {
    // NONMATCHING
}

/* 8054A80C-8054A828 0079EC 001C+00 1/1 0/0 0/0 .text            JMAFastSqrt__Ff */
// static void JMAFastSqrt(f32 param_0) {
extern "C" static asm void JMAFastSqrt__Ff() {
    // NONMATCHING
}

/* 8054A828-8054A858 007A08 0030+00 1/1 0/0 0/0 .text            dComIfGs_getEventReg__FUs */
// static void dComIfGs_getEventReg(u16 param_0) {
extern "C" static asm void dComIfGs_getEventReg__FUs() {
    // NONMATCHING
}

/* 8054A858-8054A888 007A38 0030+00 1/1 0/0 0/0 .text            dComIfGs_isEventBit__FUs */
// static void dComIfGs_isEventBit(u16 param_0) {
extern "C" static asm void dComIfGs_isEventBit__FUs() {
    // NONMATCHING
}

/* 8054A888-8054A8A4 007A68 001C+00 1/1 0/0 0/0 .text            dComIfGp_event_runCheck__Fv */
// static void dComIfGp_event_runCheck() {
extern "C" static asm void dComIfGp_event_runCheck__Fv() {
    // NONMATCHING
}

/* 8054A8A4-8054A8A8 007A84 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" void __ct__4cXyzFv() {
    /* empty function */
}

/* 8054A8A8-8054A8C0 007A88 0018+00 1/1 0/0 0/0 .text            dComIfGp_getCamera__Fi */
// static void dComIfGp_getCamera(int param_0) {
extern "C" static asm void dComIfGp_getCamera__Fi() {
    // NONMATCHING
}

/* 8054A8C0-8054A8DC 007AA0 001C+00 1/1 0/0 0/0 .text            dComIfGp_getPlayerCameraID__Fi */
// static void dComIfGp_getPlayerCameraID(int param_0) {
extern "C" void dComIfGp_getPlayerCameraID__Fi() {
    // NONMATCHING
}

/* 8054A8DC-8054A8F4 007ABC 0018+00 1/1 0/0 0/0 .text            dComIfGp_getPlayer__Fi */
// static void dComIfGp_getPlayer(int param_0) {
extern "C" void dComIfGp_getPlayer__Fi() {
    // NONMATCHING
}

/* 8054A8F4-8054A914 007AD4 0020+00 1/1 0/0 0/0 .text            dMsgObject_getSelectCursorPos__Fv
 */
// static void dMsgObject_getSelectCursorPos() {
extern "C" static asm void dMsgObject_getSelectCursorPos__Fv() {
    // NONMATCHING
}

/* 8054A914-8054A920 007AF4 000C+00 1/1 0/0 0/0 .text            fopAcM_GetRoomNo__FPC10fopAc_ac_c
 */
// static void fopAcM_GetRoomNo(fopAc_ac_c const* param_0) {
extern "C" static asm void fopAcM_GetRoomNo__FPC10fopAc_ac_c() {
    // NONMATCHING
}

/* 8054A920-8054A950 007B00 0030+00 1/1 0/0 0/0 .text            dComIfGs_onEventBit__FUs */
// static void dComIfGs_onEventBit(u16 param_0) {
extern "C" static asm void dComIfGs_onEventBit__FUs() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8054B204-8054B208 00028C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_8054B204[4];
#pragma pop

/* 8054B208-8054B20C 000290 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_8054B208[4];
#pragma pop

/* 8054B20C-8054B210 000294 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_8054B20C[4];
#pragma pop

/* 8054B210-8054B214 000298 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_8054B210[4];
#pragma pop

/* 8054B214-8054B218 00029C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8054B214[4];
#pragma pop

/* 8054B218-8054B21C 0002A0 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8054B218[4];
#pragma pop

/* 8054B21C-8054B220 0002A4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_8054B21C[4];
#pragma pop

/* 8054B220-8054B224 0002A8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_8054B220[4];
#pragma pop

/* 8054B224-8054B228 0002AC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_8054B224[4];
#pragma pop

/* 8054B228-8054B22C 0002B0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_8054B228[4];
#pragma pop

/* 8054B22C-8054B230 0002B4 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_8054B22C[4];
#pragma pop

/* 8054B230-8054B234 0002B8 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_8054B230[4];
#pragma pop

/* 8054B234-8054B238 0002BC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_8054B234[4];
#pragma pop

/* 8054B238-8054B23C 0002C0 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8054B238[4];
#pragma pop

/* 8054B23C-8054B240 0002C4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_8054B23C[4];
#pragma pop

/* 8054B240-8054B244 0002C8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_8054B240[4];
#pragma pop

/* 8054B244-8054B248 0002CC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_8054B244[4];
#pragma pop

/* 8054B248-8054B24C 0002D0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_8054B248[4];
#pragma pop

/* 8054B24C-8054B250 0002D4 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_8054B24C[4];
#pragma pop

/* 8054B250-8054B254 0002D8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_8054B250[4];
#pragma pop

/* 8054B254-8054B258 0002DC 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_8054B254[4];
#pragma pop

/* 8054B258-8054B25C 0002E0 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8054B258[4];
#pragma pop

/* 8054B25C-8054B260 0002E4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8054B25C[4];
#pragma pop

/* 8054B260-8054B264 0002E8 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8054B260[4];
#pragma pop

/* 8054B264-8054B268 0002EC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_8054B264[4];
#pragma pop

/* 8054AC70-8054AC70 00030C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
