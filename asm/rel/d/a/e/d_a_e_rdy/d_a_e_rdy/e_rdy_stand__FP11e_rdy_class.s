lbl_80772580:
/* 80772580  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80772584  7C 08 02 A6 */	mflr r0
/* 80772588  90 01 00 24 */	stw r0, 0x24(r1)
/* 8077258C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80772590  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80772594  7C 7F 1B 78 */	mr r31, r3
/* 80772598  3C 80 80 78 */	lis r4, lit_4018@ha /* 0x80779DFC@ha */
/* 8077259C  3B C4 9D FC */	addi r30, r4, lit_4018@l /* 0x80779DFC@l */
/* 807725A0  A8 03 05 B4 */	lha r0, 0x5b4(r3)
/* 807725A4  2C 00 00 01 */	cmpwi r0, 1
/* 807725A8  41 82 00 60 */	beq lbl_80772608
/* 807725AC  40 80 00 A4 */	bge lbl_80772650
/* 807725B0  2C 00 00 00 */	cmpwi r0, 0
/* 807725B4  40 80 00 08 */	bge lbl_807725BC
/* 807725B8  48 00 00 98 */	b lbl_80772650
lbl_807725BC:
/* 807725BC  A8 1F 0A 60 */	lha r0, 0xa60(r31)
/* 807725C0  2C 00 00 00 */	cmpwi r0, 0
/* 807725C4  40 82 00 8C */	bne lbl_80772650
/* 807725C8  38 80 00 1E */	li r4, 0x1e
/* 807725CC  C0 3E 00 58 */	lfs f1, 0x58(r30)
/* 807725D0  38 A0 00 02 */	li r5, 2
/* 807725D4  C0 5E 00 08 */	lfs f2, 8(r30)
/* 807725D8  4B FF 98 A9 */	bl anm_init__FP11e_rdy_classifUcf
/* 807725DC  38 00 00 01 */	li r0, 1
/* 807725E0  B0 1F 05 B4 */	sth r0, 0x5b4(r31)
/* 807725E4  C0 3E 00 D8 */	lfs f1, 0xd8(r30)
/* 807725E8  4B AF 53 6D */	bl cM_rndF__Ff
/* 807725EC  C0 1E 00 D4 */	lfs f0, 0xd4(r30)
/* 807725F0  EC 00 08 2A */	fadds f0, f0, f1
/* 807725F4  FC 00 00 1E */	fctiwz f0, f0
/* 807725F8  D8 01 00 08 */	stfd f0, 8(r1)
/* 807725FC  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80772600  B0 1F 0A 60 */	sth r0, 0xa60(r31)
/* 80772604  48 00 00 4C */	b lbl_80772650
lbl_80772608:
/* 80772608  A8 1F 0A 60 */	lha r0, 0xa60(r31)
/* 8077260C  2C 00 00 00 */	cmpwi r0, 0
/* 80772610  40 82 00 40 */	bne lbl_80772650
/* 80772614  38 80 00 4C */	li r4, 0x4c
/* 80772618  C0 3E 00 58 */	lfs f1, 0x58(r30)
/* 8077261C  38 A0 00 02 */	li r5, 2
/* 80772620  C0 5E 00 08 */	lfs f2, 8(r30)
/* 80772624  4B FF 98 5D */	bl anm_init__FP11e_rdy_classifUcf
/* 80772628  C0 3E 00 00 */	lfs f1, 0(r30)
/* 8077262C  4B AF 53 29 */	bl cM_rndF__Ff
/* 80772630  C0 1E 00 00 */	lfs f0, 0(r30)
/* 80772634  EC 00 08 2A */	fadds f0, f0, f1
/* 80772638  FC 00 00 1E */	fctiwz f0, f0
/* 8077263C  D8 01 00 08 */	stfd f0, 8(r1)
/* 80772640  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80772644  B0 1F 0A 60 */	sth r0, 0xa60(r31)
/* 80772648  38 00 00 00 */	li r0, 0
/* 8077264C  B0 1F 05 B4 */	sth r0, 0x5b4(r31)
lbl_80772650:
/* 80772650  C0 3F 0A 50 */	lfs f1, 0xa50(r31)
/* 80772654  38 80 40 00 */	li r4, 0x4000
/* 80772658  38 C0 00 00 */	li r6, 0
/* 8077265C  88 BF 0A 71 */	lbz r5, 0xa71(r31)
/* 80772660  2C 05 00 01 */	cmpwi r5, 1
/* 80772664  41 82 00 14 */	beq lbl_80772678
/* 80772668  3C 60 80 78 */	lis r3, S_find@ha /* 0x8077A8D4@ha */
/* 8077266C  A8 03 A8 D4 */	lha r0, S_find@l(r3)  /* 0x8077A8D4@l */
/* 80772670  2C 00 00 00 */	cmpwi r0, 0
/* 80772674  41 82 00 1C */	beq lbl_80772690
lbl_80772678:
/* 80772678  7C A0 07 74 */	extsb r0, r5
/* 8077267C  2C 00 00 01 */	cmpwi r0, 1
/* 80772680  40 82 00 08 */	bne lbl_80772688
/* 80772684  38 C0 00 01 */	li r6, 1
lbl_80772688:
/* 80772688  C0 3E 00 8C */	lfs f1, 0x8c(r30)
/* 8077268C  38 80 7F FF */	li r4, 0x7fff
lbl_80772690:
/* 80772690  A8 1F 0A 40 */	lha r0, 0xa40(r31)
/* 80772694  54 00 07 7F */	clrlwi. r0, r0, 0x1d
/* 80772698  41 82 00 0C */	beq lbl_807726A4
/* 8077269C  2C 06 00 00 */	cmpwi r6, 0
/* 807726A0  41 82 00 38 */	beq lbl_807726D8
lbl_807726A4:
/* 807726A4  7F E3 FB 78 */	mr r3, r31
/* 807726A8  4B FF A9 5D */	bl pl_check__FP11e_rdy_classfs
/* 807726AC  2C 03 00 00 */	cmpwi r3, 0
/* 807726B0  41 82 00 28 */	beq lbl_807726D8
/* 807726B4  88 1F 05 BA */	lbz r0, 0x5ba(r31)
/* 807726B8  28 00 00 01 */	cmplwi r0, 1
/* 807726BC  40 82 00 1C */	bne lbl_807726D8
/* 807726C0  38 00 00 03 */	li r0, 3
/* 807726C4  B0 1F 0A 42 */	sth r0, 0xa42(r31)
/* 807726C8  38 00 FF F6 */	li r0, -10
/* 807726CC  B0 1F 05 B4 */	sth r0, 0x5b4(r31)
/* 807726D0  38 00 00 3C */	li r0, 0x3c
/* 807726D4  B0 1F 0A 60 */	sth r0, 0xa60(r31)
lbl_807726D8:
/* 807726D8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 807726DC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 807726E0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 807726E4  7C 08 03 A6 */	mtlr r0
/* 807726E8  38 21 00 20 */	addi r1, r1, 0x20
/* 807726EC  4E 80 00 20 */	blr 
