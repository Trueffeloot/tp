lbl_80AEC6BC:
/* 80AEC6BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80AEC6C0  7C 08 02 A6 */	mflr r0
/* 80AEC6C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80AEC6C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80AEC6CC  7C 7F 1B 79 */	or. r31, r3, r3
/* 80AEC6D0  41 82 00 1C */	beq lbl_80AEC6EC
/* 80AEC6D4  3C A0 80 AF */	lis r5, __vt__22daNpcT_MotionSeqMngr_c@ha /* 0x80AEC9B8@ha */
/* 80AEC6D8  38 05 C9 B8 */	addi r0, r5, __vt__22daNpcT_MotionSeqMngr_c@l /* 0x80AEC9B8@l */
/* 80AEC6DC  90 1F 00 20 */	stw r0, 0x20(r31)
/* 80AEC6E0  7C 80 07 35 */	extsh. r0, r4
/* 80AEC6E4  40 81 00 08 */	ble lbl_80AEC6EC
/* 80AEC6E8  4B 7E 26 55 */	bl __dl__FPv
lbl_80AEC6EC:
/* 80AEC6EC  7F E3 FB 78 */	mr r3, r31
/* 80AEC6F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80AEC6F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80AEC6F8  7C 08 03 A6 */	mtlr r0
/* 80AEC6FC  38 21 00 10 */	addi r1, r1, 0x10
/* 80AEC700  4E 80 00 20 */	blr 
