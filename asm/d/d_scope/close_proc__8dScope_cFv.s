lbl_80194054:
/* 80194054  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80194058  A8 83 00 88 */	lha r4, 0x88(r3)
/* 8019405C  2C 04 00 00 */	cmpwi r4, 0
/* 80194060  40 81 00 54 */	ble lbl_801940B4
/* 80194064  38 04 FF FF */	addi r0, r4, -1
/* 80194068  B0 03 00 88 */	sth r0, 0x88(r3)
/* 8019406C  C0 62 A0 10 */	lfs f3, lit_3756(r2)
/* 80194070  C0 42 A0 34 */	lfs f2, lit_3902(r2)
/* 80194074  A8 03 00 88 */	lha r0, 0x88(r3)
/* 80194078  C8 22 A0 40 */	lfd f1, lit_3906(r2)
/* 8019407C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80194080  90 01 00 0C */	stw r0, 0xc(r1)
/* 80194084  3C 00 43 30 */	lis r0, 0x4330
/* 80194088  90 01 00 08 */	stw r0, 8(r1)
/* 8019408C  C8 01 00 08 */	lfd f0, 8(r1)
/* 80194090  EC 20 08 28 */	fsubs f1, f0, f1
/* 80194094  C0 02 A0 38 */	lfs f0, lit_3903(r2)
/* 80194098  EC 01 00 24 */	fdivs f0, f1, f0
/* 8019409C  EC 02 00 32 */	fmuls f0, f2, f0
/* 801940A0  EC 03 00 28 */	fsubs f0, f3, f0
/* 801940A4  D0 03 00 80 */	stfs f0, 0x80(r3)
/* 801940A8  C0 02 A0 3C */	lfs f0, lit_3904(r2)
/* 801940AC  D0 03 00 84 */	stfs f0, 0x84(r3)
/* 801940B0  48 00 00 1C */	b lbl_801940CC
lbl_801940B4:
/* 801940B4  C0 02 A0 10 */	lfs f0, lit_3756(r2)
/* 801940B8  D0 03 00 80 */	stfs f0, 0x80(r3)
/* 801940BC  C0 02 A0 14 */	lfs f0, lit_3757(r2)
/* 801940C0  D0 03 00 84 */	stfs f0, 0x84(r3)
/* 801940C4  38 00 00 01 */	li r0, 1
/* 801940C8  98 03 00 8E */	stb r0, 0x8e(r3)
lbl_801940CC:
/* 801940CC  38 21 00 10 */	addi r1, r1, 0x10
/* 801940D0  4E 80 00 20 */	blr 
