lbl_8096A518:
/* 8096A518  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 8096A51C  7C 08 02 A6 */	mflr r0
/* 8096A520  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 8096A524  3C 80 80 97 */	lis r4, l_cyl_src@ha /* 0x8096C920@ha */
/* 8096A528  38 84 C9 20 */	addi r4, r4, l_cyl_src@l /* 0x8096C920@l */
/* 8096A52C  80 A4 01 54 */	lwz r5, 0x154(r4)
/* 8096A530  80 04 01 58 */	lwz r0, 0x158(r4)
/* 8096A534  90 A1 00 8C */	stw r5, 0x8c(r1)
/* 8096A538  90 01 00 90 */	stw r0, 0x90(r1)
/* 8096A53C  80 04 01 5C */	lwz r0, 0x15c(r4)
/* 8096A540  90 01 00 94 */	stw r0, 0x94(r1)
/* 8096A544  80 04 01 60 */	lwz r0, 0x160(r4)
/* 8096A548  90 01 00 28 */	stw r0, 0x28(r1)
/* 8096A54C  38 01 00 8C */	addi r0, r1, 0x8c
/* 8096A550  90 01 00 28 */	stw r0, 0x28(r1)
/* 8096A554  80 A4 01 64 */	lwz r5, 0x164(r4)
/* 8096A558  80 04 01 68 */	lwz r0, 0x168(r4)
/* 8096A55C  90 A1 00 80 */	stw r5, 0x80(r1)
/* 8096A560  90 01 00 84 */	stw r0, 0x84(r1)
/* 8096A564  80 04 01 6C */	lwz r0, 0x16c(r4)
/* 8096A568  90 01 00 88 */	stw r0, 0x88(r1)
/* 8096A56C  80 04 01 70 */	lwz r0, 0x170(r4)
/* 8096A570  90 01 00 24 */	stw r0, 0x24(r1)
/* 8096A574  38 01 00 80 */	addi r0, r1, 0x80
/* 8096A578  90 01 00 24 */	stw r0, 0x24(r1)
/* 8096A57C  80 A4 01 74 */	lwz r5, 0x174(r4)
/* 8096A580  80 04 01 78 */	lwz r0, 0x178(r4)
/* 8096A584  90 A1 00 74 */	stw r5, 0x74(r1)
/* 8096A588  90 01 00 78 */	stw r0, 0x78(r1)
/* 8096A58C  80 04 01 7C */	lwz r0, 0x17c(r4)
/* 8096A590  90 01 00 7C */	stw r0, 0x7c(r1)
/* 8096A594  80 04 01 80 */	lwz r0, 0x180(r4)
/* 8096A598  90 01 00 20 */	stw r0, 0x20(r1)
/* 8096A59C  38 01 00 74 */	addi r0, r1, 0x74
/* 8096A5A0  90 01 00 20 */	stw r0, 0x20(r1)
/* 8096A5A4  80 A4 01 84 */	lwz r5, 0x184(r4)
/* 8096A5A8  80 04 01 88 */	lwz r0, 0x188(r4)
/* 8096A5AC  90 A1 00 68 */	stw r5, 0x68(r1)
/* 8096A5B0  90 01 00 6C */	stw r0, 0x6c(r1)
/* 8096A5B4  80 04 01 8C */	lwz r0, 0x18c(r4)
/* 8096A5B8  90 01 00 70 */	stw r0, 0x70(r1)
/* 8096A5BC  80 04 01 90 */	lwz r0, 0x190(r4)
/* 8096A5C0  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8096A5C4  38 01 00 68 */	addi r0, r1, 0x68
/* 8096A5C8  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8096A5CC  80 A4 01 94 */	lwz r5, 0x194(r4)
/* 8096A5D0  80 04 01 98 */	lwz r0, 0x198(r4)
/* 8096A5D4  90 A1 00 5C */	stw r5, 0x5c(r1)
/* 8096A5D8  90 01 00 60 */	stw r0, 0x60(r1)
/* 8096A5DC  80 04 01 9C */	lwz r0, 0x19c(r4)
/* 8096A5E0  90 01 00 64 */	stw r0, 0x64(r1)
/* 8096A5E4  80 04 01 A0 */	lwz r0, 0x1a0(r4)
/* 8096A5E8  90 01 00 18 */	stw r0, 0x18(r1)
/* 8096A5EC  38 01 00 5C */	addi r0, r1, 0x5c
/* 8096A5F0  90 01 00 18 */	stw r0, 0x18(r1)
/* 8096A5F4  80 A4 01 A4 */	lwz r5, 0x1a4(r4)
/* 8096A5F8  80 04 01 A8 */	lwz r0, 0x1a8(r4)
/* 8096A5FC  90 A1 00 50 */	stw r5, 0x50(r1)
/* 8096A600  90 01 00 54 */	stw r0, 0x54(r1)
/* 8096A604  80 04 01 AC */	lwz r0, 0x1ac(r4)
/* 8096A608  90 01 00 58 */	stw r0, 0x58(r1)
/* 8096A60C  80 04 01 B0 */	lwz r0, 0x1b0(r4)
/* 8096A610  90 01 00 14 */	stw r0, 0x14(r1)
/* 8096A614  38 01 00 50 */	addi r0, r1, 0x50
/* 8096A618  90 01 00 14 */	stw r0, 0x14(r1)
/* 8096A61C  80 A4 01 B4 */	lwz r5, 0x1b4(r4)
/* 8096A620  80 04 01 B8 */	lwz r0, 0x1b8(r4)
/* 8096A624  90 A1 00 44 */	stw r5, 0x44(r1)
/* 8096A628  90 01 00 48 */	stw r0, 0x48(r1)
/* 8096A62C  80 04 01 BC */	lwz r0, 0x1bc(r4)
/* 8096A630  90 01 00 4C */	stw r0, 0x4c(r1)
/* 8096A634  38 A4 00 44 */	addi r5, r4, 0x44
/* 8096A638  C0 05 00 44 */	lfs f0, 0x44(r5)
/* 8096A63C  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 8096A640  80 04 01 C0 */	lwz r0, 0x1c0(r4)
/* 8096A644  90 01 00 10 */	stw r0, 0x10(r1)
/* 8096A648  38 01 00 44 */	addi r0, r1, 0x44
/* 8096A64C  90 01 00 10 */	stw r0, 0x10(r1)
/* 8096A650  80 A4 01 C4 */	lwz r5, 0x1c4(r4)
/* 8096A654  80 04 01 C8 */	lwz r0, 0x1c8(r4)
/* 8096A658  90 A1 00 38 */	stw r5, 0x38(r1)
/* 8096A65C  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8096A660  80 04 01 CC */	lwz r0, 0x1cc(r4)
/* 8096A664  90 01 00 40 */	stw r0, 0x40(r1)
/* 8096A668  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 8096A66C  80 04 01 D0 */	lwz r0, 0x1d0(r4)
/* 8096A670  90 01 00 0C */	stw r0, 0xc(r1)
/* 8096A674  38 01 00 38 */	addi r0, r1, 0x38
/* 8096A678  90 01 00 0C */	stw r0, 0xc(r1)
/* 8096A67C  80 A4 01 D4 */	lwz r5, 0x1d4(r4)
/* 8096A680  80 04 01 D8 */	lwz r0, 0x1d8(r4)
/* 8096A684  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 8096A688  90 01 00 30 */	stw r0, 0x30(r1)
/* 8096A68C  80 04 01 DC */	lwz r0, 0x1dc(r4)
/* 8096A690  90 01 00 34 */	stw r0, 0x34(r1)
/* 8096A694  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8096A698  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 8096A69C  90 01 00 08 */	stw r0, 8(r1)
/* 8096A6A0  38 01 00 2C */	addi r0, r1, 0x2c
/* 8096A6A4  90 01 00 08 */	stw r0, 8(r1)
/* 8096A6A8  38 C1 00 94 */	addi r6, r1, 0x94
/* 8096A6AC  38 A4 01 E0 */	addi r5, r4, 0x1e0
/* 8096A6B0  38 00 00 04 */	li r0, 4
/* 8096A6B4  7C 09 03 A6 */	mtctr r0
lbl_8096A6B8:
/* 8096A6B8  80 85 00 04 */	lwz r4, 4(r5)
/* 8096A6BC  84 05 00 08 */	lwzu r0, 8(r5)
/* 8096A6C0  90 86 00 04 */	stw r4, 4(r6)
/* 8096A6C4  94 06 00 08 */	stwu r0, 8(r6)
/* 8096A6C8  42 00 FF F0 */	bdnz lbl_8096A6B8
/* 8096A6CC  80 05 00 04 */	lwz r0, 4(r5)
/* 8096A6D0  90 06 00 04 */	stw r0, 4(r6)
/* 8096A6D4  38 01 00 28 */	addi r0, r1, 0x28
/* 8096A6D8  90 01 00 98 */	stw r0, 0x98(r1)
/* 8096A6DC  38 01 00 24 */	addi r0, r1, 0x24
/* 8096A6E0  90 01 00 9C */	stw r0, 0x9c(r1)
/* 8096A6E4  38 01 00 20 */	addi r0, r1, 0x20
/* 8096A6E8  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 8096A6EC  38 01 00 1C */	addi r0, r1, 0x1c
/* 8096A6F0  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8096A6F4  38 01 00 18 */	addi r0, r1, 0x18
/* 8096A6F8  90 01 00 A8 */	stw r0, 0xa8(r1)
/* 8096A6FC  38 01 00 14 */	addi r0, r1, 0x14
/* 8096A700  90 01 00 AC */	stw r0, 0xac(r1)
/* 8096A704  38 01 00 10 */	addi r0, r1, 0x10
/* 8096A708  90 01 00 B0 */	stw r0, 0xb0(r1)
/* 8096A70C  38 01 00 0C */	addi r0, r1, 0xc
/* 8096A710  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 8096A714  38 01 00 08 */	addi r0, r1, 8
/* 8096A718  90 01 00 B8 */	stw r0, 0xb8(r1)
/* 8096A71C  A8 83 09 E0 */	lha r4, 0x9e0(r3)
/* 8096A720  7C 80 07 35 */	extsh. r0, r4
/* 8096A724  41 80 00 1C */	blt lbl_8096A740
/* 8096A728  2C 04 00 09 */	cmpwi r4, 9
/* 8096A72C  40 80 00 14 */	bge lbl_8096A740
/* 8096A730  A8 03 09 DA */	lha r0, 0x9da(r3)
/* 8096A734  B0 03 0D EA */	sth r0, 0xdea(r3)
/* 8096A738  38 81 00 98 */	addi r4, r1, 0x98
/* 8096A73C  4B 7E 8B 29 */	bl playMotionAnm__8daNpcF_cFPPPQ28daNpcF_c18daNpcF_anmPlayData
lbl_8096A740:
/* 8096A740  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 8096A744  7C 08 03 A6 */	mtlr r0
/* 8096A748  38 21 00 C0 */	addi r1, r1, 0xc0
/* 8096A74C  4E 80 00 20 */	blr 