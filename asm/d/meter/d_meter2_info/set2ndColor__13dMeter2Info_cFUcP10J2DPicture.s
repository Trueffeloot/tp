lbl_8021D644:
/* 8021D644  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8021D648  7C 08 02 A6 */	mflr r0
/* 8021D64C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8021D650  39 61 00 30 */	addi r11, r1, 0x30
/* 8021D654  48 14 4B 89 */	bl _savegpr_29
/* 8021D658  7C BF 2B 78 */	mr r31, r5
/* 8021D65C  3C 60 80 3A */	lis r3, black_color_4634@ha /* 0x80398A78@ha */
/* 8021D660  3B C3 8A 78 */	addi r30, r3, black_color_4634@l /* 0x80398A78@l */
/* 8021D664  54 9D 15 BA */	rlwinm r29, r4, 2, 0x16, 0x1d
/* 8021D668  38 7E 04 0C */	addi r3, r30, 0x40c
/* 8021D66C  7C 03 E8 2E */	lwzx r0, r3, r29
/* 8021D670  90 01 00 18 */	stw r0, 0x18(r1)
/* 8021D674  38 7E 03 78 */	addi r3, r30, 0x378
/* 8021D678  7C 03 E8 2E */	lwzx r0, r3, r29
/* 8021D67C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8021D680  7F E3 FB 78 */	mr r3, r31
/* 8021D684  38 81 00 1C */	addi r4, r1, 0x1c
/* 8021D688  38 A1 00 18 */	addi r5, r1, 0x18
/* 8021D68C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8021D690  81 8C 01 30 */	lwz r12, 0x130(r12)
/* 8021D694  7D 89 03 A6 */	mtctr r12
/* 8021D698  4E 80 04 21 */	bctrl 
/* 8021D69C  38 7E 06 5C */	addi r3, r30, 0x65c
/* 8021D6A0  7C 03 E8 2E */	lwzx r0, r3, r29
/* 8021D6A4  90 01 00 08 */	stw r0, 8(r1)
/* 8021D6A8  38 7E 05 C8 */	addi r3, r30, 0x5c8
/* 8021D6AC  7C 03 E8 2E */	lwzx r0, r3, r29
/* 8021D6B0  90 01 00 0C */	stw r0, 0xc(r1)
/* 8021D6B4  38 7E 05 34 */	addi r3, r30, 0x534
/* 8021D6B8  7C 03 E8 2E */	lwzx r0, r3, r29
/* 8021D6BC  90 01 00 10 */	stw r0, 0x10(r1)
/* 8021D6C0  38 7E 04 A0 */	addi r3, r30, 0x4a0
/* 8021D6C4  7C 03 E8 2E */	lwzx r0, r3, r29
/* 8021D6C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8021D6CC  88 01 00 14 */	lbz r0, 0x14(r1)
/* 8021D6D0  98 1F 01 38 */	stb r0, 0x138(r31)
/* 8021D6D4  88 01 00 15 */	lbz r0, 0x15(r1)
/* 8021D6D8  98 1F 01 39 */	stb r0, 0x139(r31)
/* 8021D6DC  88 01 00 16 */	lbz r0, 0x16(r1)
/* 8021D6E0  98 1F 01 3A */	stb r0, 0x13a(r31)
/* 8021D6E4  88 01 00 17 */	lbz r0, 0x17(r1)
/* 8021D6E8  98 1F 01 3B */	stb r0, 0x13b(r31)
/* 8021D6EC  88 01 00 10 */	lbz r0, 0x10(r1)
/* 8021D6F0  98 1F 01 3C */	stb r0, 0x13c(r31)
/* 8021D6F4  88 01 00 11 */	lbz r0, 0x11(r1)
/* 8021D6F8  98 1F 01 3D */	stb r0, 0x13d(r31)
/* 8021D6FC  88 01 00 12 */	lbz r0, 0x12(r1)
/* 8021D700  98 1F 01 3E */	stb r0, 0x13e(r31)
/* 8021D704  88 01 00 13 */	lbz r0, 0x13(r1)
/* 8021D708  98 1F 01 3F */	stb r0, 0x13f(r31)
/* 8021D70C  88 01 00 0C */	lbz r0, 0xc(r1)
/* 8021D710  98 1F 01 40 */	stb r0, 0x140(r31)
/* 8021D714  88 01 00 0D */	lbz r0, 0xd(r1)
/* 8021D718  98 1F 01 41 */	stb r0, 0x141(r31)
/* 8021D71C  88 01 00 0E */	lbz r0, 0xe(r1)
/* 8021D720  98 1F 01 42 */	stb r0, 0x142(r31)
/* 8021D724  88 01 00 0F */	lbz r0, 0xf(r1)
/* 8021D728  98 1F 01 43 */	stb r0, 0x143(r31)
/* 8021D72C  88 01 00 08 */	lbz r0, 8(r1)
/* 8021D730  98 1F 01 44 */	stb r0, 0x144(r31)
/* 8021D734  88 01 00 09 */	lbz r0, 9(r1)
/* 8021D738  98 1F 01 45 */	stb r0, 0x145(r31)
/* 8021D73C  88 01 00 0A */	lbz r0, 0xa(r1)
/* 8021D740  98 1F 01 46 */	stb r0, 0x146(r31)
/* 8021D744  88 01 00 0B */	lbz r0, 0xb(r1)
/* 8021D748  98 1F 01 47 */	stb r0, 0x147(r31)
/* 8021D74C  39 61 00 30 */	addi r11, r1, 0x30
/* 8021D750  48 14 4A D9 */	bl _restgpr_29
/* 8021D754  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8021D758  7C 08 03 A6 */	mtlr r0
/* 8021D75C  38 21 00 30 */	addi r1, r1, 0x30
/* 8021D760  4E 80 00 20 */	blr 
