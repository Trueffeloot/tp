lbl_8055A540:
/* 8055A540  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8055A544  7C 08 02 A6 */	mflr r0
/* 8055A548  90 01 00 34 */	stw r0, 0x34(r1)
/* 8055A54C  3C A0 80 56 */	lis r5, lit_4110@ha /* 0x8055A6A0@ha */
/* 8055A550  C0 25 A6 A0 */	lfs f1, lit_4110@l(r5)  /* 0x8055A6A0@l */
/* 8055A554  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 8055A558  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8055A55C  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 8055A560  C0 04 00 00 */	lfs f0, 0(r4)
/* 8055A564  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8055A568  C0 04 00 04 */	lfs f0, 4(r4)
/* 8055A56C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8055A570  C0 04 00 08 */	lfs f0, 8(r4)
/* 8055A574  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8055A578  D0 21 00 08 */	stfs f1, 8(r1)
/* 8055A57C  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8055A580  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8055A584  38 81 00 14 */	addi r4, r1, 0x14
/* 8055A588  38 A1 00 08 */	addi r5, r1, 8
/* 8055A58C  4B F3 23 C1 */	bl chkPointInArea__15daTag_EvtArea_cF4cXyz4cXyz
/* 8055A590  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8055A594  7C 08 03 A6 */	mtlr r0
/* 8055A598  38 21 00 30 */	addi r1, r1, 0x30
/* 8055A59C  4E 80 00 20 */	blr 
