lbl_806430E0:
/* 806430E0  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 806430E4  7C 08 02 A6 */	mflr r0
/* 806430E8  90 01 00 54 */	stw r0, 0x54(r1)
/* 806430EC  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 806430F0  3C 80 80 65 */	lis r4, lit_3757@ha /* 0x8064EB1C@ha */
/* 806430F4  3B E4 EB 1C */	addi r31, r4, lit_3757@l /* 0x8064EB1C@l */
/* 806430F8  88 03 07 28 */	lbz r0, 0x728(r3)
/* 806430FC  54 00 10 3A */	slwi r0, r0, 2
/* 80643100  7C 63 02 14 */	add r3, r3, r0
/* 80643104  80 63 07 2C */	lwz r3, 0x72c(r3)
/* 80643108  38 81 00 0C */	addi r4, r1, 0xc
/* 8064310C  4B 9D 68 B1 */	bl fopAcM_SearchByID__FUiPP10fopAc_ac_c
/* 80643110  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80643114  28 04 00 00 */	cmplwi r4, 0
/* 80643118  40 82 00 0C */	bne lbl_80643124
/* 8064311C  38 60 00 00 */	li r3, 0
/* 80643120  48 00 01 C4 */	b lbl_806432E4
lbl_80643124:
/* 80643124  A8 04 04 E6 */	lha r0, 0x4e6(r4)
/* 80643128  C0 3F 01 B4 */	lfs f1, 0x1b4(r31)
/* 8064312C  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 80643130  3C 60 80 44 */	lis r3, sincosTable___5JMath@ha /* 0x80439A20@ha */
/* 80643134  38 63 9A 20 */	addi r3, r3, sincosTable___5JMath@l /* 0x80439A20@l */
/* 80643138  7C 03 04 2E */	lfsx f0, r3, r0
/* 8064313C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80643140  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80643144  C0 1F 00 28 */	lfs f0, 0x28(r31)
/* 80643148  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8064314C  7C 63 02 14 */	add r3, r3, r0
/* 80643150  C0 03 00 04 */	lfs f0, 4(r3)
/* 80643154  EC 01 00 32 */	fmuls f0, f1, f0
/* 80643158  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 8064315C  38 61 00 34 */	addi r3, r1, 0x34
/* 80643160  38 84 04 D0 */	addi r4, r4, 0x4d0
/* 80643164  7C 65 1B 78 */	mr r5, r3
/* 80643168  4B D0 3F 29 */	bl PSVECAdd
/* 8064316C  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80643170  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80643174  80 63 5D AC */	lwz r3, 0x5dac(r3)
/* 80643178  C0 63 04 D0 */	lfs f3, 0x4d0(r3)
/* 8064317C  D0 61 00 28 */	stfs f3, 0x28(r1)
/* 80643180  C0 03 04 D4 */	lfs f0, 0x4d4(r3)
/* 80643184  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80643188  C0 43 04 D8 */	lfs f2, 0x4d8(r3)
/* 8064318C  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 80643190  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 80643194  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80643198  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 8064319C  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 806431A0  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 806431A4  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 806431A8  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 806431AC  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 806431B0  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 806431B4  38 61 00 10 */	addi r3, r1, 0x10
/* 806431B8  38 81 00 1C */	addi r4, r1, 0x1c
/* 806431BC  4B D0 41 E1 */	bl PSVECSquareDistance
/* 806431C0  C0 1F 00 28 */	lfs f0, 0x28(r31)
/* 806431C4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 806431C8  40 81 00 58 */	ble lbl_80643220
/* 806431CC  FC 00 08 34 */	frsqrte f0, f1
/* 806431D0  C8 9F 00 80 */	lfd f4, 0x80(r31)
/* 806431D4  FC 44 00 32 */	fmul f2, f4, f0
/* 806431D8  C8 7F 00 88 */	lfd f3, 0x88(r31)
/* 806431DC  FC 00 00 32 */	fmul f0, f0, f0
/* 806431E0  FC 01 00 32 */	fmul f0, f1, f0
/* 806431E4  FC 03 00 28 */	fsub f0, f3, f0
/* 806431E8  FC 02 00 32 */	fmul f0, f2, f0
/* 806431EC  FC 44 00 32 */	fmul f2, f4, f0
/* 806431F0  FC 00 00 32 */	fmul f0, f0, f0
/* 806431F4  FC 01 00 32 */	fmul f0, f1, f0
/* 806431F8  FC 03 00 28 */	fsub f0, f3, f0
/* 806431FC  FC 02 00 32 */	fmul f0, f2, f0
/* 80643200  FC 44 00 32 */	fmul f2, f4, f0
/* 80643204  FC 00 00 32 */	fmul f0, f0, f0
/* 80643208  FC 01 00 32 */	fmul f0, f1, f0
/* 8064320C  FC 03 00 28 */	fsub f0, f3, f0
/* 80643210  FC 02 00 32 */	fmul f0, f2, f0
/* 80643214  FC 21 00 32 */	fmul f1, f1, f0
/* 80643218  FC 20 08 18 */	frsp f1, f1
/* 8064321C  48 00 00 88 */	b lbl_806432A4
lbl_80643220:
/* 80643220  C8 1F 00 90 */	lfd f0, 0x90(r31)
/* 80643224  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80643228  40 80 00 10 */	bge lbl_80643238
/* 8064322C  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80643230  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 80643234  48 00 00 70 */	b lbl_806432A4
lbl_80643238:
/* 80643238  D0 21 00 08 */	stfs f1, 8(r1)
/* 8064323C  80 81 00 08 */	lwz r4, 8(r1)
/* 80643240  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 80643244  3C 00 7F 80 */	lis r0, 0x7f80
/* 80643248  7C 03 00 00 */	cmpw r3, r0
/* 8064324C  41 82 00 14 */	beq lbl_80643260
/* 80643250  40 80 00 40 */	bge lbl_80643290
/* 80643254  2C 03 00 00 */	cmpwi r3, 0
/* 80643258  41 82 00 20 */	beq lbl_80643278
/* 8064325C  48 00 00 34 */	b lbl_80643290
lbl_80643260:
/* 80643260  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80643264  41 82 00 0C */	beq lbl_80643270
/* 80643268  38 00 00 01 */	li r0, 1
/* 8064326C  48 00 00 28 */	b lbl_80643294
lbl_80643270:
/* 80643270  38 00 00 02 */	li r0, 2
/* 80643274  48 00 00 20 */	b lbl_80643294
lbl_80643278:
/* 80643278  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8064327C  41 82 00 0C */	beq lbl_80643288
/* 80643280  38 00 00 05 */	li r0, 5
/* 80643284  48 00 00 10 */	b lbl_80643294
lbl_80643288:
/* 80643288  38 00 00 03 */	li r0, 3
/* 8064328C  48 00 00 08 */	b lbl_80643294
lbl_80643290:
/* 80643290  38 00 00 04 */	li r0, 4
lbl_80643294:
/* 80643294  2C 00 00 01 */	cmpwi r0, 1
/* 80643298  40 82 00 0C */	bne lbl_806432A4
/* 8064329C  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 806432A0  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
lbl_806432A4:
/* 806432A4  C0 1F 01 B8 */	lfs f0, 0x1b8(r31)
/* 806432A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 806432AC  40 80 00 34 */	bge lbl_806432E0
/* 806432B0  C0 41 00 38 */	lfs f2, 0x38(r1)
/* 806432B4  C0 1F 00 78 */	lfs f0, 0x78(r31)
/* 806432B8  EC 02 00 28 */	fsubs f0, f2, f0
/* 806432BC  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 806432C0  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 806432C4  40 80 00 1C */	bge lbl_806432E0
/* 806432C8  C0 1F 00 64 */	lfs f0, 0x64(r31)
/* 806432CC  EC 00 10 2A */	fadds f0, f0, f2
/* 806432D0  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 806432D4  40 81 00 0C */	ble lbl_806432E0
/* 806432D8  38 60 00 01 */	li r3, 1
/* 806432DC  48 00 00 08 */	b lbl_806432E4
lbl_806432E0:
/* 806432E0  38 60 00 00 */	li r3, 0
lbl_806432E4:
/* 806432E4  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 806432E8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 806432EC  7C 08 03 A6 */	mtlr r0
/* 806432F0  38 21 00 50 */	addi r1, r1, 0x50
/* 806432F4  4E 80 00 20 */	blr 
