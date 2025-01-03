/**
 * @file d_a_obj_kwheel01.cpp
 * 
*/

#include "d/actor/d_a_obj_kwheel01.h"
#include "dol2asm.h"


//
// Forward References:
//

extern "C" void create1st__15daObjKWheel01_cFv();
extern "C" void setMtx__15daObjKWheel01_cFv();
extern "C" void CreateHeap__15daObjKWheel01_cFv();
extern "C" void Create__15daObjKWheel01_cFv();
extern "C" static void searchKWheel00__FPvPv();
extern "C" void Execute__15daObjKWheel01_cFPPA3_A4_f();
extern "C" void Draw__15daObjKWheel01_cFv();
extern "C" void Delete__15daObjKWheel01_cFv();
extern "C" void eventStart__15daObjKWheel01_cFv();
extern "C" static void daObjKWheel01_create1st__FP15daObjKWheel01_c();
extern "C" static void daObjKWheel01_MoveBGDelete__FP15daObjKWheel01_c();
extern "C" static void daObjKWheel01_MoveBGExecute__FP15daObjKWheel01_c();
extern "C" static void daObjKWheel01_MoveBGDraw__FP15daObjKWheel01_c();
extern "C" void __dt__17dEvLib_callback_cFv();
extern "C" bool eventStart__17dEvLib_callback_cFv();
extern "C" bool eventRun__17dEvLib_callback_cFv();
extern "C" bool eventEnd__17dEvLib_callback_cFv();
extern "C" void __dt__15daObjKWheel01_cFv();
extern "C" static void func_80C4F6A0();
extern "C" static void func_80C4F6A8();
extern "C" extern char const* const d_a_obj_kwheel01__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cUc();
extern "C" void eventUpdate__17dEvLib_callback_cFv();
extern "C" void setEvent__17dEvLib_callback_cFiii();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void cM_rndFX__Ff();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" extern void* __vt__16dBgS_MoveBgActor[10];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80C4F6B8-80C4F6C4 000000 000C+00 2/2 0/0 0/0 .rodata          l_dzbidx */
SECTION_RODATA static u8 const l_dzbidx[12] = {
    0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0A,
};
COMPILER_STRIP_GATE(0x80C4F6B8, &l_dzbidx);

/* 80C4F6EC-80C4F6EC 000034 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C4F6EC = "K_Wheel01";
#pragma pop

/* 80C4F6F8-80C4F6FC -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_kwheel01__stringBase0;

/* 80C4F6FC-80C4F72C 000004 0030+00 3/3 0/0 0/0 .data            l_pos */
SECTION_DATA static u8 l_pos[48] = {
    0x44, 0x68, 0x80, 0x00, 0xC3, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xC3, 0x25, 0x00, 0x00, 0x44, 0x68, 0x80, 0x00, 0xC4, 0x68, 0x80, 0x00, 0xC3, 0x25, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC3, 0x25, 0x00, 0x00, 0xC4, 0x68, 0x80, 0x00,
};

/* 80C4EA78-80C4EC54 000078 01DC+00 1/1 0/0 0/0 .text            create1st__15daObjKWheel01_cFv */
void daObjKWheel01_c::create1st() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C4F6C4-80C4F6CC 00000C 0008+00 1/1 0/0 0/0 .rodata          l_bmdidx */
SECTION_RODATA static u8 const l_bmdidx[8] = {
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05,
};
COMPILER_STRIP_GATE(0x80C4F6C4, &l_bmdidx);

/* 80C4F6CC-80C4F6E4 000014 0018+00 1/1 0/0 0/0 .rodata          l_cull_box */
SECTION_RODATA static u8 const l_cull_box[24] = {
    0xC4, 0x9D, 0x80, 0x00, 0xC5, 0x3E, 0xA0, 0x00, 0xC4, 0x9D, 0x80, 0x00,
    0x44, 0x9D, 0x80, 0x00, 0x45, 0x2F, 0x00, 0x00, 0x44, 0x9D, 0x80, 0x00,
};
COMPILER_STRIP_GATE(0x80C4F6CC, &l_cull_box);

/* 80C4F6E4-80C4F6E8 00002C 0004+00 2/2 0/0 0/0 .rodata          @3717 */
SECTION_RODATA static f32 const lit_3717 = 1.0f;
COMPILER_STRIP_GATE(0x80C4F6E4, &lit_3717);

/* 80C4EC54-80C4EDCC 000254 0178+00 2/2 0/0 0/0 .text            setMtx__15daObjKWheel01_cFv */
void daObjKWheel01_c::setMtx() {
    // NONMATCHING
}

/* 80C4EDCC-80C4EF38 0003CC 016C+00 1/0 0/0 0/0 .text            CreateHeap__15daObjKWheel01_cFv */
void daObjKWheel01_c::CreateHeap() {
    // NONMATCHING
}

/* 80C4EF38-80C4EFEC 000538 00B4+00 1/0 0/0 0/0 .text            Create__15daObjKWheel01_cFv */
void daObjKWheel01_c::Create() {
    // NONMATCHING
}

/* 80C4EFEC-80C4F048 0005EC 005C+00 1/1 0/0 0/0 .text            searchKWheel00__FPvPv */
static void searchKWheel00(void* param_0, void* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C4F6E8-80C4F6EC 000030 0004+00 1/1 0/0 0/0 .rodata          @3888 */
SECTION_RODATA static f32 const lit_3888 = -1.0f;
COMPILER_STRIP_GATE(0x80C4F6E8, &lit_3888);

/* 80C4F048-80C4F344 000648 02FC+00 1/0 0/0 0/0 .text Execute__15daObjKWheel01_cFPPA3_A4_f */
void daObjKWheel01_c::Execute(f32 (**param_0)[3][4]) {
    // NONMATCHING
}

/* 80C4F344-80C4F3E8 000944 00A4+00 1/0 0/0 0/0 .text            Draw__15daObjKWheel01_cFv */
void daObjKWheel01_c::Draw() {
    // NONMATCHING
}

/* 80C4F3E8-80C4F498 0009E8 00B0+00 1/0 0/0 0/0 .text            Delete__15daObjKWheel01_cFv */
void daObjKWheel01_c::Delete() {
    // NONMATCHING
}

/* 80C4F498-80C4F4C0 000A98 0028+00 2/2 0/0 0/0 .text            eventStart__15daObjKWheel01_cFv */
void daObjKWheel01_c::eventStart() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C4F72C-80C4F74C -00001 0020+00 1/0 0/0 0/0 .data            daObjKWheel01_METHODS */
static actor_method_class daObjKWheel01_METHODS = {
    (process_method_func)daObjKWheel01_create1st__FP15daObjKWheel01_c,
    (process_method_func)daObjKWheel01_MoveBGDelete__FP15daObjKWheel01_c,
    (process_method_func)daObjKWheel01_MoveBGExecute__FP15daObjKWheel01_c,
    0,
    (process_method_func)daObjKWheel01_MoveBGDraw__FP15daObjKWheel01_c,
};

/* 80C4F74C-80C4F77C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_KWheel01 */
extern actor_process_profile_definition g_profile_Obj_KWheel01 = {
  fpcLy_CURRENT_e,         // mLayerID
  3,                       // mListID
  fpcPi_CURRENT_e,         // mListPrio
  PROC_Obj_KWheel01,       // mProcName
  &g_fpcLf_Method.base,   // sub_method
  sizeof(daObjKWheel01_c), // mSize
  0,                       // mSizeOther
  0,                       // mParameters
  &g_fopAc_Method.base,    // sub_method
  663,                     // mPriority
  &daObjKWheel01_METHODS,  // sub_method
  0x00040100,              // mStatus
  fopAc_ACTOR_e,           // mActorType
  fopAc_CULLBOX_CUSTOM_e,  // cullType
};

/* 80C4F77C-80C4F794 000084 0018+00 3/3 0/0 0/0 .data            __vt__17dEvLib_callback_c */
SECTION_DATA extern void* __vt__17dEvLib_callback_c[6] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17dEvLib_callback_cFv,
    (void*)eventStart__17dEvLib_callback_cFv,
    (void*)eventRun__17dEvLib_callback_cFv,
    (void*)eventEnd__17dEvLib_callback_cFv,
};

/* 80C4F794-80C4F7DC 00009C 0048+00 2/2 0/0 0/0 .data            __vt__15daObjKWheel01_c */
SECTION_DATA extern void* __vt__15daObjKWheel01_c[18] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__15daObjKWheel01_cFv,
    (void*)Create__15daObjKWheel01_cFv,
    (void*)Execute__15daObjKWheel01_cFPPA3_A4_f,
    (void*)Draw__15daObjKWheel01_cFv,
    (void*)Delete__15daObjKWheel01_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C4F6A8,
    (void*)func_80C4F6A0,
    (void*)eventRun__17dEvLib_callback_cFv,
    (void*)eventEnd__17dEvLib_callback_cFv,
    (void*)__dt__15daObjKWheel01_cFv,
    (void*)eventStart__15daObjKWheel01_cFv,
};

/* 80C4F4C0-80C4F540 000AC0 0080+00 1/1 0/0 0/0 .text daObjKWheel01_create1st__FP15daObjKWheel01_c
 */
static void daObjKWheel01_create1st(daObjKWheel01_c* param_0) {
    // NONMATCHING
}

/* 80C4F540-80C4F560 000B40 0020+00 1/0 0/0 0/0 .text
 * daObjKWheel01_MoveBGDelete__FP15daObjKWheel01_c              */
static void daObjKWheel01_MoveBGDelete(daObjKWheel01_c* param_0) {
    // NONMATCHING
}

/* 80C4F560-80C4F580 000B60 0020+00 1/0 0/0 0/0 .text
 * daObjKWheel01_MoveBGExecute__FP15daObjKWheel01_c             */
static void daObjKWheel01_MoveBGExecute(daObjKWheel01_c* param_0) {
    // NONMATCHING
}

/* 80C4F580-80C4F5AC 000B80 002C+00 1/0 0/0 0/0 .text
 * daObjKWheel01_MoveBGDraw__FP15daObjKWheel01_c                */
static void daObjKWheel01_MoveBGDraw(daObjKWheel01_c* param_0) {
    // NONMATCHING
}

/* 80C4F5AC-80C4F5F4 000BAC 0048+00 1/0 0/0 0/0 .text            __dt__17dEvLib_callback_cFv */
// dEvLib_callback_c::~dEvLib_callback_c() {
extern "C" void __dt__17dEvLib_callback_cFv() {
    // NONMATCHING
}

/* 80C4F5F4-80C4F5FC 000BF4 0008+00 1/0 0/0 0/0 .text            eventStart__17dEvLib_callback_cFv
 */
// bool dEvLib_callback_c::eventStart()() {
extern "C" bool eventStart__17dEvLib_callback_cFv() {
    return true;
}

/* 80C4F5FC-80C4F604 000BFC 0008+00 2/0 0/0 0/0 .text            eventRun__17dEvLib_callback_cFv */
// bool dEvLib_callback_c::eventRun() {
extern "C" bool eventRun__17dEvLib_callback_cFv() {
    return true;
}

/* 80C4F604-80C4F60C 000C04 0008+00 2/0 0/0 0/0 .text            eventEnd__17dEvLib_callback_cFv */
// bool dEvLib_callback_c::eventEnd() {
extern "C" bool eventEnd__17dEvLib_callback_cFv() {
    return true;
}

/* 80C4F60C-80C4F6A0 000C0C 0094+00 2/1 0/0 0/0 .text            __dt__15daObjKWheel01_cFv */
daObjKWheel01_c::~daObjKWheel01_c() {
    // NONMATCHING
}

/* 80C4F6A0-80C4F6A8 000CA0 0008+00 1/0 0/0 0/0 .text @1448@eventStart__15daObjKWheel01_cFv */
static void func_80C4F6A0() {
    // NONMATCHING
}

/* 80C4F6A8-80C4F6B0 000CA8 0008+00 1/0 0/0 0/0 .text            @1448@__dt__15daObjKWheel01_cFv */
static void func_80C4F6A8() {
    // NONMATCHING
}

/* 80C4F6EC-80C4F6EC 000034 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
