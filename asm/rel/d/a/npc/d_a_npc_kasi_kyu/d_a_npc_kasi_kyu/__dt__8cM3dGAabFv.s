lbl_80A21BCC:
/* 80A21BCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80A21BD0  7C 08 02 A6 */	mflr r0
/* 80A21BD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A21BD8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80A21BDC  7C 7F 1B 79 */	or. r31, r3, r3
/* 80A21BE0  41 82 00 1C */	beq lbl_80A21BFC
/* 80A21BE4  3C A0 80 A2 */	lis r5, __vt__8cM3dGAab@ha /* 0x80A25FC8@ha */
/* 80A21BE8  38 05 5F C8 */	addi r0, r5, __vt__8cM3dGAab@l /* 0x80A25FC8@l */
/* 80A21BEC  90 1F 00 18 */	stw r0, 0x18(r31)
/* 80A21BF0  7C 80 07 35 */	extsh. r0, r4
/* 80A21BF4  40 81 00 08 */	ble lbl_80A21BFC
/* 80A21BF8  4B 8A D1 45 */	bl __dl__FPv
lbl_80A21BFC:
/* 80A21BFC  7F E3 FB 78 */	mr r3, r31
/* 80A21C00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80A21C04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80A21C08  7C 08 03 A6 */	mtlr r0
/* 80A21C0C  38 21 00 10 */	addi r1, r1, 0x10
/* 80A21C10  4E 80 00 20 */	blr 
