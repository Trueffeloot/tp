lbl_800E4DEC:
/* 800E4DEC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 800E4DF0  7C 08 02 A6 */	mflr r0
/* 800E4DF4  90 01 00 34 */	stw r0, 0x34(r1)
/* 800E4DF8  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 800E4DFC  F3 E1 00 28 */	psq_st f31, 40(r1), 0, 0 /* qr0 */
/* 800E4E00  39 61 00 20 */	addi r11, r1, 0x20
/* 800E4E04  48 27 D3 D9 */	bl _savegpr_29
/* 800E4E08  7C 7D 1B 78 */	mr r29, r3
/* 800E4E0C  80 03 31 A0 */	lwz r0, 0x31a0(r3)
/* 800E4E10  54 00 05 6B */	rlwinm. r0, r0, 0, 0x15, 0x15
/* 800E4E14  41 82 00 58 */	beq lbl_800E4E6C
/* 800E4E18  81 83 06 28 */	lwz r12, 0x628(r3)
/* 800E4E1C  81 8C 01 90 */	lwz r12, 0x190(r12)
/* 800E4E20  7D 89 03 A6 */	mtctr r12
/* 800E4E24  4E 80 04 21 */	bctrl 
/* 800E4E28  28 03 00 00 */	cmplwi r3, 0
/* 800E4E2C  41 82 00 24 */	beq lbl_800E4E50
/* 800E4E30  7F A3 EB 78 */	mr r3, r29
/* 800E4E34  48 00 ED 7D */	bl getCanoeMaxSpeed__9daAlink_cCFv
/* 800E4E38  C0 1D 33 98 */	lfs f0, 0x3398(r29)
/* 800E4E3C  EC 00 08 24 */	fdivs f0, f0, f1
/* 800E4E40  FC 00 02 10 */	fabs f0, f0
/* 800E4E44  FC 00 00 18 */	frsp f0, f0
/* 800E4E48  FF E0 00 90 */	fmr f31, f0
/* 800E4E4C  48 00 00 E4 */	b lbl_800E4F30
lbl_800E4E50:
/* 800E4E50  C0 22 94 44 */	lfs f1, lit_14760(r2)
/* 800E4E54  C0 1D 33 98 */	lfs f0, 0x3398(r29)
/* 800E4E58  EC 01 00 32 */	fmuls f0, f1, f0
/* 800E4E5C  FC 00 02 10 */	fabs f0, f0
/* 800E4E60  FC 00 00 18 */	frsp f0, f0
/* 800E4E64  FF E0 00 90 */	fmr f31, f0
/* 800E4E68  48 00 00 C8 */	b lbl_800E4F30
lbl_800E4E6C:
/* 800E4E6C  83 FD 27 E0 */	lwz r31, 0x27e0(r29)
/* 800E4E70  3B C0 00 01 */	li r30, 1
/* 800E4E74  7F E3 FB 78 */	mr r3, r31
/* 800E4E78  4B F8 E9 6D */	bl LockonTruth__12dAttention_cFv
/* 800E4E7C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800E4E80  40 82 00 14 */	bne lbl_800E4E94
/* 800E4E84  80 1F 03 34 */	lwz r0, 0x334(r31)
/* 800E4E88  54 00 00 85 */	rlwinm. r0, r0, 0, 2, 2
/* 800E4E8C  40 82 00 08 */	bne lbl_800E4E94
/* 800E4E90  3B C0 00 00 */	li r30, 0
lbl_800E4E94:
/* 800E4E94  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 800E4E98  41 82 00 1C */	beq lbl_800E4EB4
/* 800E4E9C  7F A3 EB 78 */	mr r3, r29
/* 800E4EA0  4B FF EE 55 */	bl checkGrabCarryActor__9daAlink_cFv
/* 800E4EA4  2C 03 00 00 */	cmpwi r3, 0
/* 800E4EA8  40 82 00 0C */	bne lbl_800E4EB4
/* 800E4EAC  C3 E2 92 B8 */	lfs f31, lit_6040(r2)
/* 800E4EB0  48 00 00 80 */	b lbl_800E4F30
lbl_800E4EB4:
/* 800E4EB4  A0 1D 2F E8 */	lhz r0, 0x2fe8(r29)
/* 800E4EB8  28 00 00 1B */	cmplwi r0, 0x1b
/* 800E4EBC  40 82 00 28 */	bne lbl_800E4EE4
/* 800E4EC0  C0 3D 34 78 */	lfs f1, 0x3478(r29)
/* 800E4EC4  3C 60 80 39 */	lis r3, m__18daAlinkHIO_move_c0@ha /* 0x8038D6BC@ha */
/* 800E4EC8  38 63 D6 BC */	addi r3, r3, m__18daAlinkHIO_move_c0@l /* 0x8038D6BC@l */
/* 800E4ECC  C0 03 00 30 */	lfs f0, 0x30(r3)
/* 800E4ED0  EC 01 00 24 */	fdivs f0, f1, f0
/* 800E4ED4  FC 00 02 10 */	fabs f0, f0
/* 800E4ED8  FC 00 00 18 */	frsp f0, f0
/* 800E4EDC  FF E0 00 90 */	fmr f31, f0
/* 800E4EE0  48 00 00 24 */	b lbl_800E4F04
lbl_800E4EE4:
/* 800E4EE4  C0 3D 33 98 */	lfs f1, 0x3398(r29)
/* 800E4EE8  3C 60 80 39 */	lis r3, m__18daAlinkHIO_move_c0@ha /* 0x8038D6BC@ha */
/* 800E4EEC  38 63 D6 BC */	addi r3, r3, m__18daAlinkHIO_move_c0@l /* 0x8038D6BC@l */
/* 800E4EF0  C0 03 00 30 */	lfs f0, 0x30(r3)
/* 800E4EF4  EC 01 00 24 */	fdivs f0, f1, f0
/* 800E4EF8  FC 00 02 10 */	fabs f0, f0
/* 800E4EFC  FC 00 00 18 */	frsp f0, f0
/* 800E4F00  FF E0 00 90 */	fmr f31, f0
lbl_800E4F04:
/* 800E4F04  7F A3 EB 78 */	mr r3, r29
/* 800E4F08  38 80 00 01 */	li r4, 1
/* 800E4F0C  38 A0 00 01 */	li r5, 1
/* 800E4F10  4B FD 65 A9 */	bl checkHeavyStateOn__9daAlink_cFii
/* 800E4F14  2C 03 00 00 */	cmpwi r3, 0
/* 800E4F18  41 82 00 18 */	beq lbl_800E4F30
/* 800E4F1C  C0 22 92 B8 */	lfs f1, lit_6040(r2)
/* 800E4F20  C0 1D 34 34 */	lfs f0, 0x3434(r29)
/* 800E4F24  EC 00 00 32 */	fmuls f0, f0, f0
/* 800E4F28  EC 01 00 24 */	fdivs f0, f1, f0
/* 800E4F2C  EF FF 00 32 */	fmuls f31, f31, f0
lbl_800E4F30:
/* 800E4F30  C0 02 92 B8 */	lfs f0, lit_6040(r2)
/* 800E4F34  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 800E4F38  40 81 00 08 */	ble lbl_800E4F40
/* 800E4F3C  FF E0 00 90 */	fmr f31, f0
lbl_800E4F40:
/* 800E4F40  38 7D 33 E8 */	addi r3, r29, 0x33e8
/* 800E4F44  FC 20 F8 90 */	fmr f1, f31
/* 800E4F48  C0 42 93 EC */	lfs f2, lit_13119(r2)
/* 800E4F4C  48 18 B7 F5 */	bl cLib_chaseF__FPfff
/* 800E4F50  C0 5D 33 E8 */	lfs f2, 0x33e8(r29)
/* 800E4F54  A8 1D 20 50 */	lha r0, 0x2050(r29)
/* 800E4F58  C8 22 92 B0 */	lfd f1, lit_6025(r2)
/* 800E4F5C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 800E4F60  90 01 00 0C */	stw r0, 0xc(r1)
/* 800E4F64  3C 00 43 30 */	lis r0, 0x4330
/* 800E4F68  90 01 00 08 */	stw r0, 8(r1)
/* 800E4F6C  C8 01 00 08 */	lfd f0, 8(r1)
/* 800E4F70  EC 00 08 28 */	fsubs f0, f0, f1
/* 800E4F74  EC 02 00 32 */	fmuls f0, f2, f0
/* 800E4F78  D0 1D 20 58 */	stfs f0, 0x2058(r29)
/* 800E4F7C  C0 1D 20 58 */	lfs f0, 0x2058(r29)
/* 800E4F80  80 7D 1F 54 */	lwz r3, 0x1f54(r29)
/* 800E4F84  D0 03 00 08 */	stfs f0, 8(r3)
/* 800E4F88  E3 E1 00 28 */	psq_l f31, 40(r1), 0, 0 /* qr0 */
/* 800E4F8C  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 800E4F90  39 61 00 20 */	addi r11, r1, 0x20
/* 800E4F94  48 27 D2 95 */	bl _restgpr_29
/* 800E4F98  80 01 00 34 */	lwz r0, 0x34(r1)
/* 800E4F9C  7C 08 03 A6 */	mtlr r0
/* 800E4FA0  38 21 00 30 */	addi r1, r1, 0x30
/* 800E4FA4  4E 80 00 20 */	blr 
