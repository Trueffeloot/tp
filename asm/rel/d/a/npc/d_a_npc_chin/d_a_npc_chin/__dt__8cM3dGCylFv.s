lbl_809917C8:
/* 809917C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809917CC  7C 08 02 A6 */	mflr r0
/* 809917D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 809917D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809917D8  7C 7F 1B 79 */	or. r31, r3, r3
/* 809917DC  41 82 00 1C */	beq lbl_809917F8
/* 809917E0  3C A0 80 99 */	lis r5, __vt__8cM3dGCyl@ha /* 0x809923E0@ha */
/* 809917E4  38 05 23 E0 */	addi r0, r5, __vt__8cM3dGCyl@l /* 0x809923E0@l */
/* 809917E8  90 1F 00 14 */	stw r0, 0x14(r31)
/* 809917EC  7C 80 07 35 */	extsh. r0, r4
/* 809917F0  40 81 00 08 */	ble lbl_809917F8
/* 809917F4  4B 93 D5 49 */	bl __dl__FPv
lbl_809917F8:
/* 809917F8  7F E3 FB 78 */	mr r3, r31
/* 809917FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80991800  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80991804  7C 08 03 A6 */	mtlr r0
/* 80991808  38 21 00 10 */	addi r1, r1, 0x10
/* 8099180C  4E 80 00 20 */	blr 
