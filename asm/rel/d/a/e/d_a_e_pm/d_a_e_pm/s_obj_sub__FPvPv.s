lbl_80743D10:
/* 80743D10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80743D14  7C 08 02 A6 */	mflr r0
/* 80743D18  90 01 00 14 */	stw r0, 0x14(r1)
/* 80743D1C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80743D20  93 C1 00 08 */	stw r30, 8(r1)
/* 80743D24  7C 7E 1B 78 */	mr r30, r3
/* 80743D28  3B E0 00 00 */	li r31, 0
lbl_80743D2C:
/* 80743D2C  7F C3 F3 78 */	mr r3, r30
/* 80743D30  4B 8D 4F B1 */	bl fopAc_IsActor__FPv
/* 80743D34  2C 03 00 00 */	cmpwi r3, 0
/* 80743D38  41 82 00 2C */	beq lbl_80743D64
/* 80743D3C  A8 1E 00 08 */	lha r0, 8(r30)
/* 80743D40  2C 00 01 D9 */	cmpwi r0, 0x1d9
/* 80743D44  40 82 00 20 */	bne lbl_80743D64
/* 80743D48  28 1E 00 00 */	cmplwi r30, 0
/* 80743D4C  41 82 00 18 */	beq lbl_80743D64
/* 80743D50  88 1E 06 1A */	lbz r0, 0x61a(r30)
/* 80743D54  28 00 00 00 */	cmplwi r0, 0
/* 80743D58  40 82 00 0C */	bne lbl_80743D64
/* 80743D5C  7F C3 F3 78 */	mr r3, r30
/* 80743D60  48 00 00 14 */	b lbl_80743D74
lbl_80743D64:
/* 80743D64  3B FF 00 01 */	addi r31, r31, 1
/* 80743D68  2C 1F 00 05 */	cmpwi r31, 5
/* 80743D6C  41 80 FF C0 */	blt lbl_80743D2C
/* 80743D70  38 60 00 00 */	li r3, 0
lbl_80743D74:
/* 80743D74  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80743D78  83 C1 00 08 */	lwz r30, 8(r1)
/* 80743D7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80743D80  7C 08 03 A6 */	mtlr r0
/* 80743D84  38 21 00 10 */	addi r1, r1, 0x10
/* 80743D88  4E 80 00 20 */	blr 