lbl_80747500:
/* 80747500  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80747504  7C 08 02 A6 */	mflr r0
/* 80747508  90 01 00 44 */	stw r0, 0x44(r1)
/* 8074750C  39 61 00 40 */	addi r11, r1, 0x40
/* 80747510  4B C1 AC C9 */	bl _savegpr_28
/* 80747514  7C 7F 1B 78 */	mr r31, r3
/* 80747518  3C 80 80 75 */	lis r4, lit_3910@ha /* 0x8074BF3C@ha */
/* 8074751C  3B A4 BF 3C */	addi r29, r4, lit_3910@l /* 0x8074BF3C@l */
/* 80747520  3C 80 80 40 */	lis r4, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80747524  38 84 61 C0 */	addi r4, r4, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80747528  83 84 5D AC */	lwz r28, 0x5dac(r4)
/* 8074752C  4B 8D 17 B5 */	bl fopAc_IsActor__FPv
/* 80747530  2C 03 00 00 */	cmpwi r3, 0
/* 80747534  41 82 01 50 */	beq lbl_80747684
/* 80747538  A8 1F 00 08 */	lha r0, 8(r31)
/* 8074753C  2C 00 01 2B */	cmpwi r0, 0x12b
/* 80747540  40 82 01 44 */	bne lbl_80747684
/* 80747544  80 1F 00 B0 */	lwz r0, 0xb0(r31)
/* 80747548  54 1E E7 3E */	rlwinm r30, r0, 0x1c, 0x1c, 0x1f
/* 8074754C  C0 5C 04 D8 */	lfs f2, 0x4d8(r28)
/* 80747550  C0 1C 04 D0 */	lfs f0, 0x4d0(r28)
/* 80747554  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80747558  C0 3D 00 04 */	lfs f1, 4(r29)
/* 8074755C  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 80747560  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80747564  C0 5F 04 D8 */	lfs f2, 0x4d8(r31)
/* 80747568  C0 1F 04 D0 */	lfs f0, 0x4d0(r31)
/* 8074756C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80747570  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 80747574  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 80747578  38 61 00 0C */	addi r3, r1, 0xc
/* 8074757C  38 81 00 18 */	addi r4, r1, 0x18
/* 80747580  4B BF FE 1D */	bl PSVECSquareDistance
/* 80747584  C0 1D 00 04 */	lfs f0, 4(r29)
/* 80747588  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8074758C  40 81 00 58 */	ble lbl_807475E4
/* 80747590  FC 00 08 34 */	frsqrte f0, f1
/* 80747594  C8 9D 00 10 */	lfd f4, 0x10(r29)
/* 80747598  FC 44 00 32 */	fmul f2, f4, f0
/* 8074759C  C8 7D 00 18 */	lfd f3, 0x18(r29)
/* 807475A0  FC 00 00 32 */	fmul f0, f0, f0
/* 807475A4  FC 01 00 32 */	fmul f0, f1, f0
/* 807475A8  FC 03 00 28 */	fsub f0, f3, f0
/* 807475AC  FC 02 00 32 */	fmul f0, f2, f0
/* 807475B0  FC 44 00 32 */	fmul f2, f4, f0
/* 807475B4  FC 00 00 32 */	fmul f0, f0, f0
/* 807475B8  FC 01 00 32 */	fmul f0, f1, f0
/* 807475BC  FC 03 00 28 */	fsub f0, f3, f0
/* 807475C0  FC 02 00 32 */	fmul f0, f2, f0
/* 807475C4  FC 44 00 32 */	fmul f2, f4, f0
/* 807475C8  FC 00 00 32 */	fmul f0, f0, f0
/* 807475CC  FC 01 00 32 */	fmul f0, f1, f0
/* 807475D0  FC 03 00 28 */	fsub f0, f3, f0
/* 807475D4  FC 02 00 32 */	fmul f0, f2, f0
/* 807475D8  FC 21 00 32 */	fmul f1, f1, f0
/* 807475DC  FC 20 08 18 */	frsp f1, f1
/* 807475E0  48 00 00 88 */	b lbl_80747668
lbl_807475E4:
/* 807475E4  C8 1D 00 20 */	lfd f0, 0x20(r29)
/* 807475E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 807475EC  40 80 00 10 */	bge lbl_807475FC
/* 807475F0  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 807475F4  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 807475F8  48 00 00 70 */	b lbl_80747668
lbl_807475FC:
/* 807475FC  D0 21 00 08 */	stfs f1, 8(r1)
/* 80747600  80 81 00 08 */	lwz r4, 8(r1)
/* 80747604  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 80747608  3C 00 7F 80 */	lis r0, 0x7f80
/* 8074760C  7C 03 00 00 */	cmpw r3, r0
/* 80747610  41 82 00 14 */	beq lbl_80747624
/* 80747614  40 80 00 40 */	bge lbl_80747654
/* 80747618  2C 03 00 00 */	cmpwi r3, 0
/* 8074761C  41 82 00 20 */	beq lbl_8074763C
/* 80747620  48 00 00 34 */	b lbl_80747654
lbl_80747624:
/* 80747624  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80747628  41 82 00 0C */	beq lbl_80747634
/* 8074762C  38 00 00 01 */	li r0, 1
/* 80747630  48 00 00 28 */	b lbl_80747658
lbl_80747634:
/* 80747634  38 00 00 02 */	li r0, 2
/* 80747638  48 00 00 20 */	b lbl_80747658
lbl_8074763C:
/* 8074763C  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80747640  41 82 00 0C */	beq lbl_8074764C
/* 80747644  38 00 00 05 */	li r0, 5
/* 80747648  48 00 00 10 */	b lbl_80747658
lbl_8074764C:
/* 8074764C  38 00 00 03 */	li r0, 3
/* 80747650  48 00 00 08 */	b lbl_80747658
lbl_80747654:
/* 80747654  38 00 00 04 */	li r0, 4
lbl_80747658:
/* 80747658  2C 00 00 01 */	cmpwi r0, 1
/* 8074765C  40 82 00 0C */	bne lbl_80747668
/* 80747660  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80747664  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
lbl_80747668:
/* 80747668  C0 1D 01 B0 */	lfs f0, 0x1b0(r29)
/* 8074766C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80747670  40 80 00 14 */	bge lbl_80747684
/* 80747674  28 1E 00 01 */	cmplwi r30, 1
/* 80747678  40 82 00 0C */	bne lbl_80747684
/* 8074767C  7F E3 FB 78 */	mr r3, r31
/* 80747680  48 00 00 08 */	b lbl_80747688
lbl_80747684:
/* 80747684  38 60 00 00 */	li r3, 0
lbl_80747688:
/* 80747688  39 61 00 40 */	addi r11, r1, 0x40
/* 8074768C  4B C1 AB 99 */	bl _restgpr_28
/* 80747690  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80747694  7C 08 03 A6 */	mtlr r0
/* 80747698  38 21 00 40 */	addi r1, r1, 0x40
/* 8074769C  4E 80 00 20 */	blr 