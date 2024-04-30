#ifndef D_A_OBJ_CRVLH_UP_H
#define D_A_OBJ_CRVLH_UP_H

#include "d/bg/d_bg_s_movebg_actor.h"
#include "f_op/f_op_actor_mng.h"
#include "d/com/d_com_inf_game.h"
#include "d/cc/d_cc_d.h"

class daObjCRVLH_UP_c : public dBgS_MoveBgActor {
public:
    /* 80BD4F1C */ void HakaiSet();
    /* 80BD4FB0 */ void UpMotion();
    /* 80BD4FD8 */ void Hakai();
    /* 80BD5254 */ void setBaseMtx();
    /* 80BD5378 */ int CreateHeap();
    /* 80BD53F0 */ int create();
    /* 80BD56EC */ int Create();
    /* 80BD5730 */ int Execute(Mtx**);
    /* 80BD593C */ int Draw();
    /* 80BD59C0 */ int Delete();

    /* 0x5A0 */ u8 field_0x5A0[0x5A4 - 0x5A0];
    /* 0x5A4 */ s32 mActor;
    /* 0x5A8 */ s32 mActor2;
    /* 0x5AC */ cXyz field_0x5ac[3];
    /* 0x5D0 */ f32 field_0x5d0;
    /* 0x5D4 */ u8 field_0x5d4;
    /* 0x5D5 */ u8 field_0x5D5[0x5D6 - 0x5D5];
    /* 0x5D6 */ s16 field_0x5d6;
    /* 0x5D8 */ s16 field_0x5d8;
    /* 0x5DA */ u8 field_0x5da;
    /* 0x5DB */ u8 field_0x5db;
    /* 0x5DC */ f32 field_0x5dc;
    /* 0x5E0 */ u8 field_0x5E0[0x5E8 - 0x5E0];
    /* 0x5E8 */ J3DModel* mpModel;
    /* 0x5EC */ request_of_phase_process_class mPhaseReq;
    /* 0x5F4 */ dCcD_Stts mStts;
    /* 0x630 */ dCcD_Cyl mCollider;
};

#endif /* D_A_OBJ_CRVLH_UP_H */
