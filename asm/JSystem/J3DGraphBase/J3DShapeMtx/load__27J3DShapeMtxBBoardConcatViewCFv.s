lbl_803142D4:
/* 803142D4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 803142D8  7C 08 02 A6 */	mflr r0
/* 803142DC  90 01 00 44 */	stw r0, 0x44(r1)
/* 803142E0  3C 80 80 43 */	lis r4, j3dSys@ha /* 0x80434AC8@ha */
/* 803142E4  38 C4 4A C8 */	addi r6, r4, j3dSys@l /* 0x80434AC8@l */
/* 803142E8  81 06 00 38 */	lwz r8, 0x38(r6)
/* 803142EC  80 E8 00 04 */	lwz r7, 4(r8)
/* 803142F0  80 A7 00 4C */	lwz r5, 0x4c(r7)
/* 803142F4  A0 83 00 04 */	lhz r4, 4(r3)
/* 803142F8  54 80 08 3C */	slwi r0, r4, 1
/* 803142FC  7C 05 02 2E */	lhzx r0, r5, r0
/* 80314300  80 67 00 48 */	lwz r3, 0x48(r7)
/* 80314304  7C 63 20 AE */	lbzx r3, r3, r4
/* 80314308  28 03 00 00 */	cmplwi r3, 0
/* 8031430C  40 82 00 24 */	bne lbl_80314330
/* 80314310  80 68 00 84 */	lwz r3, 0x84(r8)
/* 80314314  80 63 00 34 */	lwz r3, 0x34(r3)
/* 80314318  1C 00 00 30 */	mulli r0, r0, 0x30
/* 8031431C  7C 83 02 14 */	add r4, r3, r0
/* 80314320  7C C3 33 78 */	mr r3, r6
/* 80314324  38 A1 00 08 */	addi r5, r1, 8
/* 80314328  48 03 21 BD */	bl PSMTXConcat
/* 8031432C  48 00 00 20 */	b lbl_8031434C
lbl_80314330:
/* 80314330  80 68 00 84 */	lwz r3, 0x84(r8)
/* 80314334  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80314338  1C 00 00 30 */	mulli r0, r0, 0x30
/* 8031433C  7C 83 02 14 */	add r4, r3, r0
/* 80314340  7C C3 33 78 */	mr r3, r6
/* 80314344  38 A1 00 08 */	addi r5, r1, 8
/* 80314348  48 03 21 9D */	bl PSMTXConcat
lbl_8031434C:
/* 8031434C  38 61 00 08 */	addi r3, r1, 8
/* 80314350  4B FF D3 21 */	bl J3DCalcBBoardMtx__FPA4_f
/* 80314354  38 61 00 08 */	addi r3, r1, 8
/* 80314358  38 80 00 00 */	li r4, 0
/* 8031435C  4B FF B7 85 */	bl J3DFifoLoadPosMtxImm__FPA4_fUl
/* 80314360  C0 22 C9 9C */	lfs f1, lit_1423(r2)
/* 80314364  C0 01 00 08 */	lfs f0, 8(r1)
/* 80314368  EC 01 00 24 */	fdivs f0, f1, f0
/* 8031436C  D0 01 00 08 */	stfs f0, 8(r1)
/* 80314370  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80314374  EC 01 00 24 */	fdivs f0, f1, f0
/* 80314378  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8031437C  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 80314380  EC 01 00 24 */	fdivs f0, f1, f0
/* 80314384  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80314388  C0 02 C9 98 */	lfs f0, lit_1032(r2)
/* 8031438C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80314390  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80314394  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80314398  88 0D 90 30 */	lbz r0, struct_804515B0+0x0(r13)
/* 8031439C  28 00 00 00 */	cmplwi r0, 0
/* 803143A0  40 82 00 14 */	bne lbl_803143B4
/* 803143A4  38 61 00 08 */	addi r3, r1, 8
/* 803143A8  38 80 00 00 */	li r4, 0
/* 803143AC  4B FF B7 B5 */	bl J3DFifoLoadNrmMtxImm__FPA4_fUl
/* 803143B0  48 00 00 24 */	b lbl_803143D4
lbl_803143B4:
/* 803143B4  3C 60 80 43 */	lis r3, j3dSys@ha /* 0x80434AC8@ha */
/* 803143B8  38 63 4A C8 */	addi r3, r3, j3dSys@l /* 0x80434AC8@l */
/* 803143BC  80 83 01 18 */	lwz r4, 0x118(r3)
/* 803143C0  38 61 00 08 */	addi r3, r1, 8
/* 803143C4  4B FF D9 D1 */	bl J3DScaleNrmMtx__FPA4_fRC3Vec
/* 803143C8  38 61 00 08 */	addi r3, r1, 8
/* 803143CC  38 80 00 00 */	li r4, 0
/* 803143D0  4B FF B7 91 */	bl J3DFifoLoadNrmMtxImm__FPA4_fUl
lbl_803143D4:
/* 803143D4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803143D8  7C 08 03 A6 */	mtlr r0
/* 803143DC  38 21 00 40 */	addi r1, r1, 0x40
/* 803143E0  4E 80 00 20 */	blr 