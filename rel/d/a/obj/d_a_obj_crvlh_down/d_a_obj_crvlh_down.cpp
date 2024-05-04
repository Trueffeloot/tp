/**
 * @file d_a_obj_crvlh_down.cpp
 * @brief Object - Caravan Lookout Hut - Down
 *
 */

#include "rel/d/a/obj/d_a_obj_crvlh_down/d_a_obj_crvlh_down.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "d/bg/d_bg_w.h"
#include "d/cc/d_cc_uty.h"
#include "d/d_procname.h"
#include "rel/d/a/e/d_a_e_wb/d_a_e_wb.h"
#include "rel/d/a/obj/d_a_obj_crvhahen/d_a_obj_crvhahen.h"
#include "rel/d/a/obj/d_a_obj_crvlh_up/d_a_obj_crvlh_up.h"

/* 80BD4138-80BD41A4 000078 006C+00 1/1 0/0 0/0 .text            initCcCylinder__15daObjCRVLH_DW_cFv
 */
void daObjCRVLH_DW_c::initCcCylinder() {
    static const dCcD_SrcCyl ccCylSrc = {
        {
            {0x0, {{0x0, 0x0, 0x0}, {0x400000, 0x11}, 0x75}},  // mObj
            {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0},                // mGObjAt
            {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x1},                // mGObjTg
            {0x0},                                             // mGObjCo
        },                                                     // mObjInf
        {
            {0.0f, 0.0f, 0.0f},  // mCenter
            250.0f,              // mRadius
            400.0f               // mHeight
        }                        // mCyl
    };

    mStts.Init(0xFF, 0xFF, this);
    mCollider.Set(ccCylSrc);
    mCollider.SetStts(&mStts);
    mCollider.SetC(current.pos);
    mCollider.OnTgIronBallRebound();
}

/* 80BD41A4-80BD4224 0000E4 0080+00 1/1 0/0 0/0 .text            SetCcSyl__15daObjCRVLH_DW_cFv */
void daObjCRVLH_DW_c::SetCcSyl() {
    cXyz curr_pos = current.pos;
    curr_pos.y += 100.0f;
    mCollider.SetC(curr_pos);
    mCollider.SetR(200.0f);
    dComIfG_Ccsp()->Set(&mCollider);
}

/* 80BD4224-80BD4244 000164 0020+00 1/0 0/0 0/0 .text daObjCRVLH_DW_Create__FP10fopAc_ac_c */
static int daObjCRVLH_DW_Create(fopAc_ac_c* i_this) {
    return static_cast<daObjCRVLH_DW_c*>(i_this)->create();
}

/* 80BD4244-80BD4268 000184 0024+00 1/0 0/0 0/0 .text daObjCRVLH_DW_Delete__FP15daObjCRVLH_DW_c */
static int daObjCRVLH_DW_Delete(daObjCRVLH_DW_c* i_this) {
    i_this->MoveBGDelete();
    return 1;
}

/* 80BD4DC4-80BD4DC8 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
static char* l_arcName = "CrvLH_Dw";

/* 80BD4268-80BD42D8 0001A8 0070+00 1/1 0/0 0/0 .text            BgRelease__15daObjCRVLH_DW_cFv */
void daObjCRVLH_DW_c::BgRelease() {
    if (mpBgW != NULL && mpBgW->ChkUsed()) {
        u8 released = dComIfG_Bgsp().Release(mpBgW);
        if (released != 0) {
            OSReport("Release Error\n");
        }
    }
}

/* 80BD42D8-80BD45A4 000218 02CC+00 1/1 0/0 0/0 .text            Break__15daObjCRVLH_DW_cFv */
void daObjCRVLH_DW_c::Break() {
    csXyz angle(0x0, fopAcM_searchPlayerAngleY(this) + 0x8000, 0x0);
    dComIfGp_particle_set(0x861B, &current.pos, &tevStr, &shape_angle, NULL);
    dComIfGp_particle_set(0x861C, &current.pos, &tevStr, &shape_angle, NULL);
    dComIfGp_particle_set(0x861D, &current.pos, &tevStr, &shape_angle, NULL);
    dComIfGp_particle_set(0x861E, &current.pos, &tevStr, &shape_angle, NULL);
    dComIfGp_particle_set(0x861F, &current.pos, &tevStr, &shape_angle, NULL);

    dComIfGp_getVibration().StartShock(5, 0x1F, cXyz(0.0f, 1.0f, 0.0f));

    fopAc_ac_c* up;
    mCrvlhHahenID = fopAcM_createChild(PROC_Obj_CRVHAHEN, fopAcM_GetID(this), 1, &current.pos,
                                       fopAcM_GetRoomNo(this), &angle, NULL, -1, NULL);
    if (fopAcM_SearchByID(mCrvlhUpID, &up) && up != NULL) {
        static_cast<daObjCRVLH_UP_c*>(up)->HakaiSet();
    }
    BgRelease();
    mBroken = true;
    fopAcM_seStartCurrent(this, Z2SE_OBJ_YAGURA_BREAK, 0);
}

/* 80BD45A4-80BD4644 0004E4 00A0+00 1/1 0/0 0/0 .text            Obj_Hit__15daObjCRVLH_DW_cFv */
void daObjCRVLH_DW_c::Obj_Hit() {
    if (!mBroken) {
        if (mCollider.ChkCoHit()) {
            e_wb_class* acActor = (e_wb_class*)dCc_GetAc(mCollider.GetCoHitObj()->GetAc());
            if (fopAcM_GetName(acActor) == PROC_E_WB && acActor->mActionID == ACT_PL_X66) {
                Break();
            }
        } else {
            if (mCollider.ChkTgHit() && mCollider.GetTgHitObj()->ChkAtType(AT_TYPE_IRON_BALL)) {
                Break();
            }
        }
    }
}

/* 80BD4644-80BD46A0 000584 005C+00 1/1 0/0 0/0 .text            setBaseMtx__15daObjCRVLH_DW_cFv */
void daObjCRVLH_DW_c::setBaseMtx() {
    mDoMtx_stack_c::transS(current.pos);
    mDoMtx_stack_c::ZXYrotM(shape_angle);
    mpModel->setBaseTRMtx(mDoMtx_stack_c::get());
    MTXCopy(mDoMtx_stack_c::get(), mBgMtx);
}

/* 80BD46A0-80BD46CC 0005E0 002C+00 1/0 0/0 0/0 .text daObjCRVLH_DW_Draw__FP15daObjCRVLH_DW_c */
static int daObjCRVLH_DW_Draw(daObjCRVLH_DW_c* i_this) {
    return i_this->MoveBGDraw();
}

/* 80BD46CC-80BD46EC 00060C 0020+00 2/1 0/0 0/0 .text daObjCRVLH_DW_Execute__FP15daObjCRVLH_DW_c
 */
static int daObjCRVLH_DW_Execute(daObjCRVLH_DW_c* i_this) {
    return i_this->MoveBGExecute();
}

/* 80BD46EC-80BD4764 00062C 0078+00 1/0 0/0 0/0 .text            CreateHeap__15daObjCRVLH_DW_cFv */
int daObjCRVLH_DW_c::CreateHeap() {
    J3DModelData* modelData = (J3DModelData*)dComIfG_getObjectRes(l_arcName, "U_CrvLH_Down.bmd");
    mpModel = mDoExt_J3DModel__create(modelData, 0x80000, 0x11000084);
    if (mpModel != NULL) {
        return 1;
    }
    return 0;
}

/* 80BD4764-80BD49EC 0006A4 0288+00 1/1 0/0 0/0 .text            create__15daObjCRVLH_DW_cFv */
int daObjCRVLH_DW_c::create() {
    fopAcM_SetupActor(this, daObjCRVLH_DW_c);

    int phase = dComIfG_resLoad(&mPhaseReq, l_arcName);
    if (phase == cPhs_COMPLEATE_e) {
        mSwitch = fopAcM_GetParam(this);
        if (mSwitch != 0xff && dComIfGs_isSwitch(mSwitch, fopAcM_GetRoomNo(this))) {
            return cPhs_ERROR_e;
        }
        gravity = -9.0f;
        int dzb_id = dComIfG_getObjctResName2Index(l_arcName, "U_CrvLH_Down.dzb");
        phase = MoveBGCreate(l_arcName, dzb_id, dBgS_MoveBGProc_TypicalRotY, 0xB40, NULL);
        if (phase == cPhs_ERROR_e) {
            return phase;
        }
        initCcCylinder();
        fopAcM_SetMtx(this, mpModel->getBaseTRMtx());
        cXyz groundPos(current.pos.x, current.pos.y + 100.0f, current.pos.z);
        if (fopAcM_gc_c::gndCheck(&groundPos)) {
            mActorGroundY = fopAcM_gc_c::getGroundY();
            current.pos.y = mActorGroundY;
        }
        fopAcM_setCullSizeFar(this, 100.0f);
        fopAcM_setCullSizeBox(this, -500.0f, -500.0f, -500.0f, 500.0f, 1000.0f, 500.0f);
        daObjCRVLH_DW_Execute(this);
        mCrvlhUpID = fopAcM_createChild(PROC_Obj_CRVLH_UP, fopAcM_GetID(this), 1, &current.pos,
                                        fopAcM_GetRoomNo(this), &shape_angle, NULL, -1, NULL);
    }
    return phase;
}

/* 80BD4A7C-80BD4A84 0009BC 0008+00 1/0 0/0 0/0 .text daObjCRVLH_DW_IsDelete__FP15daObjCRVLH_DW_c
 */
static int daObjCRVLH_DW_IsDelete(daObjCRVLH_DW_c* i_this) {
    return 1;
}

/* 80BD4A84-80BD4AC8 0009C4 0044+00 1/0 0/0 0/0 .text            Create__15daObjCRVLH_DW_cFv */
int daObjCRVLH_DW_c::Create() {
    fopAcM_setCullSizeBox(this, -1000.0f, -500.0f, -1000.0f, 1000.0f, 500.0f, 1000.0f);
    return cPhs_COMPLEATE_e;
}

/* 80BD4AC8-80BD4C44 000A08 017C+00 1/0 0/0 0/0 .text Execute__15daObjCRVLH_DW_cFPPA3_A4_f */
int daObjCRVLH_DW_c::Execute(Mtx** i_mtx) {
    if (mHahenIsSet) {
        if (mSwitch != 0xff && !dComIfGs_isSwitch(mSwitch, fopAcM_GetRoomNo(this))) {
            dComIfGs_onSwitch(mSwitch, fopAcM_GetRoomNo(this));
        }
        fopAcM_delete(this);
    }
    Obj_Hit();
    fopAc_ac_c* hahen;
    if (mBroken && fopAcM_SearchByID(mCrvlhHahenID, &hahen) != 0 && hahen != 0) {
        cXyz arg0(100.0f, 250.0f, 80.0f);
        cXyz arg1(0.0f, 100.0f, 0.0f);
        cXyz arg2(10.0f, 30.0f, 10.0f);
        cXyz arg3(10.0f, 20.0f, 20.0f);
        static_cast<daObjCRVHAHEN_c*>(hahen)->HahenSet(arg0, arg1, arg2, arg3, 3000.0f);
        mHahenIsSet = true;
    }
    SetCcSyl();
    *i_mtx = &mBgMtx;
    setBaseMtx();
    return 1;
}

/* 80BD4C44-80BD4CC8 000B84 0084+00 1/0 0/0 0/0 .text            Draw__15daObjCRVLH_DW_cFv */
int daObjCRVLH_DW_c::Draw() {
    g_env_light.settingTevStruct(0x10, &current.pos, &tevStr);
    g_env_light.setLightTevColorType_MAJI(mpModel, &tevStr);
    dComIfGd_setListBG();
    mDoExt_modelUpdateDL(mpModel);
    return 1;
}

/* 80BD4CC8-80BD4CFC 000C08 0034+00 1/0 0/0 0/0 .text            Delete__15daObjCRVLH_DW_cFv */
int daObjCRVLH_DW_c::Delete() {
    dComIfG_resDelete(&mPhaseReq, l_arcName);
    return 1;
}

/* 80BD4DC8-80BD4DE8 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjCRVLH_DW_Method */
static actor_method_class l_daObjCRVLH_DW_Method = {
    (process_method_func)daObjCRVLH_DW_Create,  (process_method_func)daObjCRVLH_DW_Delete,
    (process_method_func)daObjCRVLH_DW_Execute, (process_method_func)daObjCRVLH_DW_IsDelete,
    (process_method_func)daObjCRVLH_DW_Draw,
};

/* 80BD4DE8-80BD4E18 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_CRVLH_DW */
extern actor_process_profile_definition g_profile_Obj_CRVLH_DW = {
    fpcLy_CURRENT_e,          // mLayerID
    3,                        // mListID
    fpcPi_CURRENT_e,          // mListPrio
    PROC_Obj_CRVLH_DW,        // mProcName
    &g_fpcLf_Method.mBase,    // sub_method
    sizeof(daObjCRVLH_DW_c),  // mSize
    0,                        // mSizeOther
    0,                        // mParameters
    &g_fopAc_Method.base,     // sub_method
    471,                      // mPriority
    &l_daObjCRVLH_DW_Method,  // sub_method
    0x40180,                  // mStatus
    fopAc_ACTOR_e,            // mActorType
    fopAc_CULLBOX_CUSTOM_e,   // cullType
};