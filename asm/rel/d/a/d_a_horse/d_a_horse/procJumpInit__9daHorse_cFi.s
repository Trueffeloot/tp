lbl_80843008:
/* 80843008  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8084300C  7C 08 02 A6 */	mflr r0
/* 80843010  90 01 00 34 */	stw r0, 0x34(r1)
/* 80843014  39 61 00 30 */	addi r11, r1, 0x30
/* 80843018  4B B1 F1 C5 */	bl _savegpr_29
/* 8084301C  7C 7E 1B 78 */	mr r30, r3
/* 80843020  7C 9D 23 78 */	mr r29, r4
/* 80843024  3C 80 80 84 */	lis r4, lit_3894@ha /* 0x808454AC@ha */
/* 80843028  3B E4 54 AC */	addi r31, r4, lit_3894@l /* 0x808454AC@l */
/* 8084302C  80 03 17 4C */	lwz r0, 0x174c(r3)
/* 80843030  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 80843034  41 82 00 0C */	beq lbl_80843040
/* 80843038  38 60 00 00 */	li r3, 0
/* 8084303C  48 00 02 8C */	b lbl_808432C8
lbl_80843040:
/* 80843040  80 1E 17 44 */	lwz r0, 0x1744(r30)
/* 80843044  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80843048  40 82 00 18 */	bne lbl_80843060
/* 8084304C  80 1E 17 40 */	lwz r0, 0x1740(r30)
/* 80843050  28 00 00 07 */	cmplwi r0, 7
/* 80843054  41 82 00 0C */	beq lbl_80843060
/* 80843058  4B FF F3 85 */	bl procStopInit__9daHorse_cFv
/* 8084305C  48 00 02 6C */	b lbl_808432C8
lbl_80843060:
/* 80843060  3C 60 80 84 */	lis r3, lit_9992@ha /* 0x80845A00@ha */
/* 80843064  38 83 5A 00 */	addi r4, r3, lit_9992@l /* 0x80845A00@l */
/* 80843068  80 64 00 00 */	lwz r3, 0(r4)
/* 8084306C  80 04 00 04 */	lwz r0, 4(r4)
/* 80843070  90 7E 18 A4 */	stw r3, 0x18a4(r30)
/* 80843074  90 1E 18 A8 */	stw r0, 0x18a8(r30)
/* 80843078  80 04 00 08 */	lwz r0, 8(r4)
/* 8084307C  90 1E 18 AC */	stw r0, 0x18ac(r30)
/* 80843080  38 00 00 04 */	li r0, 4
/* 80843084  98 1E 16 B4 */	stb r0, 0x16b4(r30)
/* 80843088  7F C3 F3 78 */	mr r3, r30
/* 8084308C  4B FF DC 19 */	bl resetNeckAnime__9daHorse_cFv
/* 80843090  B3 BE 17 20 */	sth r29, 0x1720(r30)
/* 80843094  2C 1D 00 00 */	cmpwi r29, 0
/* 80843098  41 82 00 2C */	beq lbl_808430C4
/* 8084309C  7F C3 F3 78 */	mr r3, r30
/* 808430A0  38 80 00 0D */	li r4, 0xd
/* 808430A4  38 DF 00 20 */	addi r6, r31, 0x20
/* 808430A8  C0 26 00 E4 */	lfs f1, 0xe4(r6)
/* 808430AC  C0 46 00 E8 */	lfs f2, 0xe8(r6)
/* 808430B0  A8 A6 00 12 */	lha r5, 0x12(r6)
/* 808430B4  C0 66 00 EC */	lfs f3, 0xec(r6)
/* 808430B8  38 C0 00 00 */	li r6, 0
/* 808430BC  4B FF 71 51 */	bl setSingleAnime__9daHorse_cFUsffsfi
/* 808430C0  48 00 00 28 */	b lbl_808430E8
lbl_808430C4:
/* 808430C4  7F C3 F3 78 */	mr r3, r30
/* 808430C8  38 80 00 0C */	li r4, 0xc
/* 808430CC  38 DF 00 20 */	addi r6, r31, 0x20
/* 808430D0  C0 26 00 98 */	lfs f1, 0x98(r6)
/* 808430D4  C0 46 00 9C */	lfs f2, 0x9c(r6)
/* 808430D8  A8 A6 00 06 */	lha r5, 6(r6)
/* 808430DC  C0 66 00 A0 */	lfs f3, 0xa0(r6)
/* 808430E0  38 C0 00 00 */	li r6, 0
/* 808430E4  4B FF 71 29 */	bl setSingleAnime__9daHorse_cFUsffsfi
lbl_808430E8:
/* 808430E8  C0 5E 05 2C */	lfs f2, 0x52c(r30)
/* 808430EC  C0 3F 02 74 */	lfs f1, 0x274(r31)
/* 808430F0  C0 1E 17 8C */	lfs f0, 0x178c(r30)
/* 808430F4  EC 01 00 32 */	fmuls f0, f1, f0
/* 808430F8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 808430FC  40 80 00 08 */	bge lbl_80843104
/* 80843100  D0 1E 05 2C */	stfs f0, 0x52c(r30)
lbl_80843104:
/* 80843104  C0 3F 02 2C */	lfs f1, 0x22c(r31)
/* 80843108  C0 1E 05 2C */	lfs f0, 0x52c(r30)
/* 8084310C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80843110  D0 1E 17 74 */	stfs f0, 0x1774(r30)
/* 80843114  C0 5F 02 C0 */	lfs f2, 0x2c0(r31)
/* 80843118  C0 3E 17 6C */	lfs f1, 0x176c(r30)
/* 8084311C  C0 1E 04 D4 */	lfs f0, 0x4d4(r30)
/* 80843120  EC 01 00 28 */	fsubs f0, f1, f0
/* 80843124  EC 82 00 2A */	fadds f4, f2, f0
/* 80843128  C0 7E 17 68 */	lfs f3, 0x1768(r30)
/* 8084312C  EC 23 00 F2 */	fmuls f1, f3, f3
/* 80843130  EC 04 01 32 */	fmuls f0, f4, f4
/* 80843134  EC 41 00 2A */	fadds f2, f1, f0
/* 80843138  C0 1F 01 50 */	lfs f0, 0x150(r31)
/* 8084313C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80843140  40 81 00 0C */	ble lbl_8084314C
/* 80843144  FC 00 10 34 */	frsqrte f0, f2
/* 80843148  EC 40 00 B2 */	fmuls f2, f0, f2
lbl_8084314C:
/* 8084314C  C0 3E 05 2C */	lfs f1, 0x52c(r30)
/* 80843150  EC 03 10 24 */	fdivs f0, f3, f2
/* 80843154  EC 01 00 32 */	fmuls f0, f1, f0
/* 80843158  D0 1E 05 2C */	stfs f0, 0x52c(r30)
/* 8084315C  C0 3E 17 68 */	lfs f1, 0x1768(r30)
/* 80843160  C0 1E 05 2C */	lfs f0, 0x52c(r30)
/* 80843164  EC 01 00 24 */	fdivs f0, f1, f0
/* 80843168  FC 00 00 1E */	fctiwz f0, f0
/* 8084316C  D8 01 00 08 */	stfd f0, 8(r1)
/* 80843170  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80843174  B0 1E 17 1A */	sth r0, 0x171a(r30)
/* 80843178  A8 1E 17 1A */	lha r0, 0x171a(r30)
/* 8084317C  38 9F 00 20 */	addi r4, r31, 0x20
/* 80843180  A8 64 00 18 */	lha r3, 0x18(r4)
/* 80843184  7C 00 18 00 */	cmpw r0, r3
/* 80843188  40 80 00 34 */	bge lbl_808431BC
/* 8084318C  B0 7E 17 1A */	sth r3, 0x171a(r30)
/* 80843190  C0 5E 17 68 */	lfs f2, 0x1768(r30)
/* 80843194  A8 1E 17 1A */	lha r0, 0x171a(r30)
/* 80843198  C8 3F 01 80 */	lfd f1, 0x180(r31)
/* 8084319C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 808431A0  90 01 00 0C */	stw r0, 0xc(r1)
/* 808431A4  3C 00 43 30 */	lis r0, 0x4330
/* 808431A8  90 01 00 08 */	stw r0, 8(r1)
/* 808431AC  C8 01 00 08 */	lfd f0, 8(r1)
/* 808431B0  EC 00 08 28 */	fsubs f0, f0, f1
/* 808431B4  EC 02 00 24 */	fdivs f0, f2, f0
/* 808431B8  D0 1E 05 2C */	stfs f0, 0x52c(r30)
lbl_808431BC:
/* 808431BC  C0 3E 17 70 */	lfs f1, 0x1770(r30)
/* 808431C0  C0 1E 05 2C */	lfs f0, 0x52c(r30)
/* 808431C4  EC 01 00 24 */	fdivs f0, f1, f0
/* 808431C8  FC 00 00 1E */	fctiwz f0, f0
/* 808431CC  D8 01 00 08 */	stfd f0, 8(r1)
/* 808431D0  80 01 00 0C */	lwz r0, 0xc(r1)
/* 808431D4  B0 1E 17 1E */	sth r0, 0x171e(r30)
/* 808431D8  A8 1E 17 1E */	lha r0, 0x171e(r30)
/* 808431DC  A8 64 00 18 */	lha r3, 0x18(r4)
/* 808431E0  7C 00 18 00 */	cmpw r0, r3
/* 808431E4  40 80 00 08 */	bge lbl_808431EC
/* 808431E8  B0 7E 17 1E */	sth r3, 0x171e(r30)
lbl_808431EC:
/* 808431EC  C0 1F 02 E0 */	lfs f0, 0x2e0(r31)
/* 808431F0  EC 20 01 32 */	fmuls f1, f0, f4
/* 808431F4  A8 1E 17 1E */	lha r0, 0x171e(r30)
/* 808431F8  7C 00 01 D6 */	mullw r0, r0, r0
/* 808431FC  C8 5F 01 80 */	lfd f2, 0x180(r31)
/* 80843200  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80843204  90 01 00 0C */	stw r0, 0xc(r1)
/* 80843208  3C 60 43 30 */	lis r3, 0x4330
/* 8084320C  90 61 00 08 */	stw r3, 8(r1)
/* 80843210  C8 01 00 08 */	lfd f0, 8(r1)
/* 80843214  EC 00 10 28 */	fsubs f0, f0, f2
/* 80843218  EC 01 00 24 */	fdivs f0, f1, f0
/* 8084321C  D0 1E 17 7C */	stfs f0, 0x177c(r30)
/* 80843220  A8 1E 17 1A */	lha r0, 0x171a(r30)
/* 80843224  7C 00 01 D6 */	mullw r0, r0, r0
/* 80843228  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8084322C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80843230  90 61 00 10 */	stw r3, 0x10(r1)
/* 80843234  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80843238  EC 00 10 28 */	fsubs f0, f0, f2
/* 8084323C  EC 01 00 24 */	fdivs f0, f1, f0
/* 80843240  D0 1E 05 30 */	stfs f0, 0x530(r30)
/* 80843244  C0 1E 05 30 */	lfs f0, 0x530(r30)
/* 80843248  FC 20 00 50 */	fneg f1, f0
/* 8084324C  A8 1E 17 1A */	lha r0, 0x171a(r30)
/* 80843250  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80843254  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80843258  90 61 00 18 */	stw r3, 0x18(r1)
/* 8084325C  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 80843260  EC 00 10 28 */	fsubs f0, f0, f2
/* 80843264  EC 01 00 32 */	fmuls f0, f1, f0
/* 80843268  D0 1E 04 FC */	stfs f0, 0x4fc(r30)
/* 8084326C  80 9E 17 44 */	lwz r4, 0x1744(r30)
/* 80843270  3C 60 FF FF */	lis r3, 0xFFFF /* 0xFFFEF5EF@ha */
/* 80843274  38 03 F5 EF */	addi r0, r3, 0xF5EF /* 0xFFFEF5EF@l */
/* 80843278  7C 80 00 38 */	and r0, r4, r0
/* 8084327C  90 1E 17 44 */	stw r0, 0x1744(r30)
/* 80843280  38 00 00 00 */	li r0, 0
/* 80843284  B0 1E 17 02 */	sth r0, 0x1702(r30)
/* 80843288  B0 1E 17 1C */	sth r0, 0x171c(r30)
/* 8084328C  C0 1E 04 D0 */	lfs f0, 0x4d0(r30)
/* 80843290  D0 1E 17 D0 */	stfs f0, 0x17d0(r30)
/* 80843294  C0 1E 04 D4 */	lfs f0, 0x4d4(r30)
/* 80843298  D0 1E 17 D4 */	stfs f0, 0x17d4(r30)
/* 8084329C  C0 1E 04 D8 */	lfs f0, 0x4d8(r30)
/* 808432A0  D0 1E 17 D8 */	stfs f0, 0x17d8(r30)
/* 808432A4  C0 3F 02 68 */	lfs f1, 0x268(r31)
/* 808432A8  C0 1E 17 68 */	lfs f0, 0x1768(r30)
/* 808432AC  EC 00 00 32 */	fmuls f0, f0, f0
/* 808432B0  EC 01 00 32 */	fmuls f0, f1, f0
/* 808432B4  EC 01 00 32 */	fmuls f0, f1, f0
/* 808432B8  D0 1E 17 78 */	stfs f0, 0x1778(r30)
/* 808432BC  38 00 01 2C */	li r0, 0x12c
/* 808432C0  B0 1E 17 22 */	sth r0, 0x1722(r30)
/* 808432C4  38 60 00 01 */	li r3, 1
lbl_808432C8:
/* 808432C8  39 61 00 30 */	addi r11, r1, 0x30
/* 808432CC  4B B1 EF 5D */	bl _restgpr_29
/* 808432D0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 808432D4  7C 08 03 A6 */	mtlr r0
/* 808432D8  38 21 00 30 */	addi r1, r1, 0x30
/* 808432DC  4E 80 00 20 */	blr 
