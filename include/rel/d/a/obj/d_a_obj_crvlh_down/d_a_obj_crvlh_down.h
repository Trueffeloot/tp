#ifndef D_A_OBJ_CRVLH_DOWN_H
#define D_A_OBJ_CRVLH_DOWN_H

#include "d/bg/d_bg_s_movebg_actor.h"
#include "d/cc/d_cc_d.h"
#include "d/com/d_com_inf_game.h"
#include "f_op/f_op_actor_mng.h"

class daObjCRVLH_DW_c : public dBgS_MoveBgActor {
public:
    /* 80BD4138 */ void initCcCylinder();
    /* 80BD41A4 */ void SetCcSyl();
    /* 80BD4268 */ void BgRelease();
    /* 80BD42D8 */ void Break();
    /* 80BD45A4 */ void Obj_Hit();
    /* 80BD4644 */ void setBaseMtx();
    /* 80BD46EC */ int CreateHeap();
    /* 80BD4764 */ int create();
    /* 80BD4A84 */ int Create();
    /* 80BD4AC8 */ int Execute(Mtx**);
    /* 80BD4C44 */ int Draw();
    /* 80BD4CC8 */ int Delete();

    /* 0x5A0 */ u32 mCrvlhUpID;
    /* 0x5A4 */ s32 mCrvlhHahenID;
    /* 0x5A8 */ cXyz field_0x5a8; // unused
    /* 0x5B4 */ f32 mActorGroundY;
    /* 0x5B8 */ u8 mBroken;
    /* 0x5B9 */ u8 field_0x5B9[0x5BB - 0x5B9];
    /* 0x5BB */ u8 mHahenIsSet;
    /* 0x5BC */ u8 mSwitch;
    /* 0x5BD */ u8 field_0x5BD[0x5C4 - 0x5BD];
    /* 0x5C4 */ J3DModel* mpModel;
    /* 0x5C8 */ request_of_phase_process_class mPhaseReq;
    /* 0x5D0 */ dCcD_Stts mStts;
    /* 0x60C */ dCcD_Cyl mCollider;
    /* 0x748 */ u8 field_0x748[0x4];
};

#endif /* D_A_OBJ_CRVLH_DOWN_H */
