lbl_80A11330:
/* 80A11330  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80A11334  7C 08 02 A6 */	mflr r0
/* 80A11338  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A1133C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80A11340  7C 7F 1B 79 */	or. r31, r3, r3
/* 80A11344  41 82 00 1C */	beq lbl_80A11360
/* 80A11348  3C A0 80 A1 */	lis r5, __vt__8cM3dGPla@ha /* 0x80A14500@ha */
/* 80A1134C  38 05 45 00 */	addi r0, r5, __vt__8cM3dGPla@l /* 0x80A14500@l */
/* 80A11350  90 1F 00 10 */	stw r0, 0x10(r31)
/* 80A11354  7C 80 07 35 */	extsh. r0, r4
/* 80A11358  40 81 00 08 */	ble lbl_80A11360
/* 80A1135C  4B 8B D9 E1 */	bl __dl__FPv
lbl_80A11360:
/* 80A11360  7F E3 FB 78 */	mr r3, r31
/* 80A11364  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80A11368  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80A1136C  7C 08 03 A6 */	mtlr r0
/* 80A11370  38 21 00 10 */	addi r1, r1, 0x10
/* 80A11374  4E 80 00 20 */	blr 