//
// Generated By: dol2asm
// Translation Unit: f_pc/f_pc_method
//

#include "f_pc/f_pc_method.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Declarations:
//

/* 80022428-80022460 0038+00 s=4 e=6 z=0  None .text      fpcMtd_Method__FPFPv_iPv */
s32 fpcMtd_Method(process_method_func pFunc, void* pUserData) {
    if (pFunc != NULL)
        return pFunc(pUserData);
    else
        return 1;
}

/* 80022460-80022484 0024+00 s=0 e=10 z=0  None .text fpcMtd_Execute__FP20process_method_classPv
 */
s32 fpcMtd_Execute(process_method_class* pMthd, void* pUserData) {
    return fpcMtd_Method(pMthd->mpExecuteFunc, pUserData);
}

/* 80022484-800224A8 0024+00 s=0 e=10 z=0  None .text fpcMtd_IsDelete__FP20process_method_classPv
 */
s32 fpcMtd_IsDelete(process_method_class* pMthd, void* pUserData) {
    return fpcMtd_Method(pMthd->mpIsDeleteFunc, pUserData);
}

/* 800224A8-800224CC 0024+00 s=0 e=10 z=0  None .text      fpcMtd_Delete__FP20process_method_classPv
 */
s32 fpcMtd_Delete(process_method_class* pMthd, void* pUserData) {
    return fpcMtd_Method(pMthd->mpDeleteFunc, pUserData);
}

/* 800224CC-800224F0 0024+00 s=0 e=10 z=0  None .text      fpcMtd_Create__FP20process_method_classPv
 */
s32 fpcMtd_Create(process_method_class* pMthd, void* pUserData) {
    return fpcMtd_Method(pMthd->mpCreateFunc, pUserData);
}