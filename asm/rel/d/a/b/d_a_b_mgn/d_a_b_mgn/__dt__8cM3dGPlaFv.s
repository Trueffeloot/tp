lbl_806078DC:
/* 806078DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806078E0  7C 08 02 A6 */	mflr r0
/* 806078E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 806078E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 806078EC  7C 7F 1B 79 */	or. r31, r3, r3
/* 806078F0  41 82 00 1C */	beq lbl_8060790C
/* 806078F4  3C A0 80 61 */	lis r5, __vt__8cM3dGPla@ha /* 0x80610420@ha */
/* 806078F8  38 05 04 20 */	addi r0, r5, __vt__8cM3dGPla@l /* 0x80610420@l */
/* 806078FC  90 1F 00 10 */	stw r0, 0x10(r31)
/* 80607900  7C 80 07 35 */	extsh. r0, r4
/* 80607904  40 81 00 08 */	ble lbl_8060790C
/* 80607908  4B CC 74 35 */	bl __dl__FPv
lbl_8060790C:
/* 8060790C  7F E3 FB 78 */	mr r3, r31
/* 80607910  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80607914  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80607918  7C 08 03 A6 */	mtlr r0
/* 8060791C  38 21 00 10 */	addi r1, r1, 0x10
/* 80607920  4E 80 00 20 */	blr 
