lbl_800C70F8:
/* 800C70F8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800C70FC  7C 08 02 A6 */	mflr r0
/* 800C7100  90 01 00 24 */	stw r0, 0x24(r1)
/* 800C7104  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800C7108  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800C710C  7C 7F 1B 78 */	mr r31, r3
/* 800C7110  7C 9E 23 78 */	mr r30, r4
/* 800C7114  38 80 00 1A */	li r4, 0x1a
/* 800C7118  4B FF AE 55 */	bl commonProcInit__9daAlink_cFQ29daAlink_c12daAlink_PROC
/* 800C711C  2C 1E 00 02 */	cmpwi r30, 2
/* 800C7120  40 82 00 84 */	bne lbl_800C71A4
/* 800C7124  7F E3 FB 78 */	mr r3, r31
/* 800C7128  38 80 00 D7 */	li r4, 0xd7
/* 800C712C  3C A0 80 39 */	lis r5, m__23daAlinkHIO_smallJump_c0@ha /* 0x8038E11C@ha */
/* 800C7130  38 C5 E1 1C */	addi r6, r5, m__23daAlinkHIO_smallJump_c0@l /* 0x8038E11C@l */
/* 800C7134  C0 26 00 04 */	lfs f1, 4(r6)
/* 800C7138  C0 42 93 44 */	lfs f2, lit_7977(r2)
/* 800C713C  A8 A6 00 00 */	lha r5, 0(r6)
/* 800C7140  C0 66 00 0C */	lfs f3, 0xc(r6)
/* 800C7144  4B FE 5E C9 */	bl setSingleAnime__9daAlink_cFQ29daAlink_c11daAlink_ANMffsf
/* 800C7148  7F E3 FB 78 */	mr r3, r31
/* 800C714C  4B FE D7 85 */	bl setJumpMode__9daAlink_cFv
/* 800C7150  C0 02 93 20 */	lfs f0, lit_7449(r2)
/* 800C7154  D0 1F 04 FC */	stfs f0, 0x4fc(r31)
/* 800C7158  7F E3 FB 78 */	mr r3, r31
/* 800C715C  3C 80 00 01 */	lis r4, 0x0001 /* 0x00010005@ha */
/* 800C7160  38 84 00 05 */	addi r4, r4, 0x0005 /* 0x00010005@l */
/* 800C7164  81 9F 06 28 */	lwz r12, 0x628(r31)
/* 800C7168  81 8C 01 14 */	lwz r12, 0x114(r12)
/* 800C716C  7D 89 03 A6 */	mtctr r12
/* 800C7170  4E 80 04 21 */	bctrl 
/* 800C7174  38 00 00 0F */	li r0, 0xf
/* 800C7178  98 1F 2F 99 */	stb r0, 0x2f99(r31)
/* 800C717C  C0 1F 35 8C */	lfs f0, 0x358c(r31)
/* 800C7180  D0 1F 33 B0 */	stfs f0, 0x33b0(r31)
/* 800C7184  3C 60 80 42 */	lis r3, l_waitBaseAnime@ha /* 0x80425514@ha */
/* 800C7188  C4 03 55 14 */	lfsu f0, l_waitBaseAnime@l(r3)  /* 0x80425514@l */
/* 800C718C  D0 1F 34 D4 */	stfs f0, 0x34d4(r31)
/* 800C7190  C0 03 00 04 */	lfs f0, 4(r3)
/* 800C7194  D0 1F 34 D8 */	stfs f0, 0x34d8(r31)
/* 800C7198  C0 03 00 08 */	lfs f0, 8(r3)
/* 800C719C  D0 1F 34 DC */	stfs f0, 0x34dc(r31)
/* 800C71A0  48 00 00 E8 */	b lbl_800C7288
lbl_800C71A4:
/* 800C71A4  7F E3 FB 78 */	mr r3, r31
/* 800C71A8  38 80 00 D7 */	li r4, 0xd7
/* 800C71AC  3C A0 80 39 */	lis r5, m__23daAlinkHIO_smallJump_c0@ha /* 0x8038E11C@ha */
/* 800C71B0  38 A5 E1 1C */	addi r5, r5, m__23daAlinkHIO_smallJump_c0@l /* 0x8038E11C@l */
/* 800C71B4  4B FE 5F 41 */	bl setSingleAnimeParam__9daAlink_cFQ29daAlink_c11daAlink_ANMPC16daAlinkHIO_anm_c
/* 800C71B8  2C 1E 00 01 */	cmpwi r30, 1
/* 800C71BC  40 82 00 BC */	bne lbl_800C7278
/* 800C71C0  C0 22 93 78 */	lfs f1, lit_8676(r2)
/* 800C71C4  80 7F 27 F4 */	lwz r3, 0x27f4(r31)
/* 800C71C8  C0 03 04 D4 */	lfs f0, 0x4d4(r3)
/* 800C71CC  EC 01 00 2A */	fadds f0, f1, f0
/* 800C71D0  D0 1F 34 78 */	stfs f0, 0x3478(r31)
/* 800C71D4  C0 5F 34 78 */	lfs f2, 0x3478(r31)
/* 800C71D8  C0 22 92 E0 */	lfs f1, lit_6845(r2)
/* 800C71DC  C0 1F 04 D4 */	lfs f0, 0x4d4(r31)
/* 800C71E0  EC 01 00 2A */	fadds f0, f1, f0
/* 800C71E4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 800C71E8  40 80 00 08 */	bge lbl_800C71F0
/* 800C71EC  D0 1F 34 78 */	stfs f0, 0x3478(r31)
lbl_800C71F0:
/* 800C71F0  80 7F 27 F4 */	lwz r3, 0x27f4(r31)
/* 800C71F4  C0 63 04 D0 */	lfs f3, 0x4d0(r3)
/* 800C71F8  D0 61 00 08 */	stfs f3, 8(r1)
/* 800C71FC  C0 03 04 D4 */	lfs f0, 0x4d4(r3)
/* 800C7200  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 800C7204  C0 43 04 D8 */	lfs f2, 0x4d8(r3)
/* 800C7208  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 800C720C  80 03 00 B0 */	lwz r0, 0xb0(r3)
/* 800C7210  28 00 00 02 */	cmplwi r0, 2
/* 800C7214  40 82 00 3C */	bne lbl_800C7250
/* 800C7218  A8 03 04 E6 */	lha r0, 0x4e6(r3)
/* 800C721C  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 800C7220  3C 60 80 44 */	lis r3, sincosTable___5JMath@ha /* 0x80439A20@ha */
/* 800C7224  38 63 9A 20 */	addi r3, r3, sincosTable___5JMath@l /* 0x80439A20@l */
/* 800C7228  7C 03 04 2E */	lfsx f0, r3, r0
/* 800C722C  C0 22 95 18 */	lfs f1, lit_20824(r2)
/* 800C7230  EC 01 00 32 */	fmuls f0, f1, f0
/* 800C7234  EC 03 00 2A */	fadds f0, f3, f0
/* 800C7238  D0 01 00 08 */	stfs f0, 8(r1)
/* 800C723C  7C 63 02 14 */	add r3, r3, r0
/* 800C7240  C0 03 00 04 */	lfs f0, 4(r3)
/* 800C7244  EC 01 00 32 */	fmuls f0, f1, f0
/* 800C7248  EC 02 00 2A */	fadds f0, f2, f0
/* 800C724C  D0 01 00 10 */	stfs f0, 0x10(r1)
lbl_800C7250:
/* 800C7250  38 7F 04 D0 */	addi r3, r31, 0x4d0
/* 800C7254  38 81 00 08 */	addi r4, r1, 8
/* 800C7258  48 1A 99 AD */	bl cLib_targetAngleY__FPC3VecPC3Vec
/* 800C725C  B0 7F 30 0C */	sth r3, 0x300c(r31)
/* 800C7260  38 00 00 01 */	li r0, 1
/* 800C7264  B0 1F 30 0E */	sth r0, 0x300e(r31)
/* 800C7268  7F E3 FB 78 */	mr r3, r31
/* 800C726C  38 80 00 00 */	li r4, 0
/* 800C7270  48 01 B3 11 */	bl setHeavyBoots__9daAlink_cFi
/* 800C7274  48 00 00 14 */	b lbl_800C7288
lbl_800C7278:
/* 800C7278  C0 1F 34 F0 */	lfs f0, 0x34f0(r31)
/* 800C727C  D0 1F 34 78 */	stfs f0, 0x3478(r31)
/* 800C7280  38 00 00 00 */	li r0, 0
/* 800C7284  B0 1F 30 0E */	sth r0, 0x300e(r31)
lbl_800C7288:
/* 800C7288  C0 02 92 C0 */	lfs f0, lit_6108(r2)
/* 800C728C  D0 1F 33 98 */	stfs f0, 0x3398(r31)
/* 800C7290  3C 60 80 42 */	lis r3, l_waitBaseAnime@ha /* 0x80425514@ha */
/* 800C7294  38 63 55 14 */	addi r3, r3, l_waitBaseAnime@l /* 0x80425514@l */
/* 800C7298  C0 03 00 04 */	lfs f0, 4(r3)
/* 800C729C  D0 1F 33 B0 */	stfs f0, 0x33b0(r31)
/* 800C72A0  C0 03 00 00 */	lfs f0, 0(r3)
/* 800C72A4  D0 1F 35 88 */	stfs f0, 0x3588(r31)
/* 800C72A8  C0 03 00 04 */	lfs f0, 4(r3)
/* 800C72AC  D0 1F 35 8C */	stfs f0, 0x358c(r31)
/* 800C72B0  C0 03 00 08 */	lfs f0, 8(r3)
/* 800C72B4  D0 1F 35 90 */	stfs f0, 0x3590(r31)
/* 800C72B8  38 60 00 01 */	li r3, 1
/* 800C72BC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800C72C0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800C72C4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800C72C8  7C 08 03 A6 */	mtlr r0
/* 800C72CC  38 21 00 20 */	addi r1, r1, 0x20
/* 800C72D0  4E 80 00 20 */	blr 
