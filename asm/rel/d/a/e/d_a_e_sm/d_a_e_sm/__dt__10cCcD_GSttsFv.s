lbl_807980A0:
/* 807980A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 807980A4  7C 08 02 A6 */	mflr r0
/* 807980A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 807980AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 807980B0  7C 7F 1B 79 */	or. r31, r3, r3
/* 807980B4  41 82 00 1C */	beq lbl_807980D0
/* 807980B8  3C A0 80 7A */	lis r5, __vt__10cCcD_GStts@ha /* 0x80798914@ha */
/* 807980BC  38 05 89 14 */	addi r0, r5, __vt__10cCcD_GStts@l /* 0x80798914@l */
/* 807980C0  90 1F 00 00 */	stw r0, 0(r31)
/* 807980C4  7C 80 07 35 */	extsh. r0, r4
/* 807980C8  40 81 00 08 */	ble lbl_807980D0
/* 807980CC  4B B3 6C 71 */	bl __dl__FPv
lbl_807980D0:
/* 807980D0  7F E3 FB 78 */	mr r3, r31
/* 807980D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 807980D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 807980DC  7C 08 03 A6 */	mtlr r0
/* 807980E0  38 21 00 10 */	addi r1, r1, 0x10
/* 807980E4  4E 80 00 20 */	blr 
