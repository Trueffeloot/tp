lbl_80763554:
/* 80763554  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80763558  7C 08 02 A6 */	mflr r0
/* 8076355C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80763560  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80763564  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80763568  7C 7E 1B 78 */	mr r30, r3
/* 8076356C  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80763570  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80763574  83 E3 5D AC */	lwz r31, 0x5dac(r3)
/* 80763578  C0 7E 0A 1C */	lfs f3, 0xa1c(r30)
/* 8076357C  3C 60 80 76 */	lis r3, lit_3788@ha /* 0x80764D0C@ha */
/* 80763580  C0 43 4D 0C */	lfs f2, lit_3788@l(r3)  /* 0x80764D0C@l */
/* 80763584  88 1E 0A 68 */	lbz r0, 0xa68(r30)
/* 80763588  3C 60 80 76 */	lis r3, lit_4183@ha /* 0x80764DAC@ha */
/* 8076358C  C8 23 4D AC */	lfd f1, lit_4183@l(r3)  /* 0x80764DAC@l */
/* 80763590  90 01 00 24 */	stw r0, 0x24(r1)
/* 80763594  3C 00 43 30 */	lis r0, 0x4330
/* 80763598  90 01 00 20 */	stw r0, 0x20(r1)
/* 8076359C  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 807635A0  EC 00 08 28 */	fsubs f0, f0, f1
/* 807635A4  EC 02 00 32 */	fmuls f0, f2, f0
/* 807635A8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 807635AC  40 80 00 18 */	bge lbl_807635C4
/* 807635B0  38 00 00 01 */	li r0, 1
/* 807635B4  B0 1E 0A 42 */	sth r0, 0xa42(r30)
/* 807635B8  38 00 00 00 */	li r0, 0
/* 807635BC  B0 1E 0A 44 */	sth r0, 0xa44(r30)
/* 807635C0  98 1E 0A 64 */	stb r0, 0xa64(r30)
lbl_807635C4:
/* 807635C4  38 61 00 14 */	addi r3, r1, 0x14
/* 807635C8  38 9F 04 F8 */	addi r4, r31, 0x4f8
/* 807635CC  3C A0 80 76 */	lis r5, lit_3890@ha /* 0x80764D54@ha */
/* 807635D0  C0 25 4D 54 */	lfs f1, lit_3890@l(r5)  /* 0x80764D54@l */
/* 807635D4  4B B0 35 B1 */	bl __ml__4cXyzCFf
/* 807635D8  38 61 00 08 */	addi r3, r1, 8
/* 807635DC  38 9F 04 D0 */	addi r4, r31, 0x4d0
/* 807635E0  38 A1 00 14 */	addi r5, r1, 0x14
/* 807635E4  4B B0 35 01 */	bl __pl__4cXyzCFRC3Vec
/* 807635E8  C0 01 00 08 */	lfs f0, 8(r1)
/* 807635EC  D0 1E 0A 10 */	stfs f0, 0xa10(r30)
/* 807635F0  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 807635F4  D0 1E 0A 14 */	stfs f0, 0xa14(r30)
/* 807635F8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 807635FC  D0 1E 0A 18 */	stfs f0, 0xa18(r30)
/* 80763600  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80763604  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80763608  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8076360C  7C 08 03 A6 */	mtlr r0
/* 80763610  38 21 00 30 */	addi r1, r1, 0x30
/* 80763614  4E 80 00 20 */	blr 
