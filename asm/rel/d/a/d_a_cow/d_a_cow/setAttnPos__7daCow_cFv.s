lbl_806615EC:
/* 806615EC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 806615F0  7C 08 02 A6 */	mflr r0
/* 806615F4  90 01 00 34 */	stw r0, 0x34(r1)
/* 806615F8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 806615FC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80661600  7C 7E 1B 78 */	mr r30, r3
/* 80661604  3C 60 80 66 */	lis r3, lit_3987@ha /* 0x80662DB0@ha */
/* 80661608  3B E3 2D B0 */	addi r31, r3, lit_3987@l /* 0x80662DB0@l */
/* 8066160C  80 7E 05 74 */	lwz r3, 0x574(r30)
/* 80661610  28 03 00 00 */	cmplwi r3, 0
/* 80661614  41 82 00 F4 */	beq lbl_80661708
/* 80661618  80 1E 05 5C */	lwz r0, 0x55c(r30)
/* 8066161C  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 80661620  41 82 00 74 */	beq lbl_80661694
/* 80661624  C0 1F 00 18 */	lfs f0, 0x18(r31)
/* 80661628  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8066162C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80661630  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80661634  80 63 00 04 */	lwz r3, 4(r3)
/* 80661638  80 63 00 84 */	lwz r3, 0x84(r3)
/* 8066163C  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80661640  38 63 02 10 */	addi r3, r3, 0x210
/* 80661644  3C 80 80 3E */	lis r4, now__14mDoMtx_stack_c@ha /* 0x803DD470@ha */
/* 80661648  38 84 D4 70 */	addi r4, r4, now__14mDoMtx_stack_c@l /* 0x803DD470@l */
/* 8066164C  4B CE 4E 65 */	bl PSMTXCopy
/* 80661650  3C 60 80 3E */	lis r3, now__14mDoMtx_stack_c@ha /* 0x803DD470@ha */
/* 80661654  38 63 D4 70 */	addi r3, r3, now__14mDoMtx_stack_c@l /* 0x803DD470@l */
/* 80661658  38 81 00 14 */	addi r4, r1, 0x14
/* 8066165C  38 BE 05 38 */	addi r5, r30, 0x538
/* 80661660  4B CE 57 0D */	bl PSMTXMultVec
/* 80661664  C0 7E 05 38 */	lfs f3, 0x538(r30)
/* 80661668  D0 61 00 08 */	stfs f3, 8(r1)
/* 8066166C  C0 5E 05 3C */	lfs f2, 0x53c(r30)
/* 80661670  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 80661674  C0 3E 05 40 */	lfs f1, 0x540(r30)
/* 80661678  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8066167C  C0 1F 00 CC */	lfs f0, 0xcc(r31)
/* 80661680  EC 00 10 2A */	fadds f0, f0, f2
/* 80661684  D0 7E 05 50 */	stfs f3, 0x550(r30)
/* 80661688  D0 1E 05 54 */	stfs f0, 0x554(r30)
/* 8066168C  D0 3E 05 58 */	stfs f1, 0x558(r30)
/* 80661690  48 00 00 78 */	b lbl_80661708
lbl_80661694:
/* 80661694  C0 1F 01 30 */	lfs f0, 0x130(r31)
/* 80661698  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8066169C  C0 1F 00 CC */	lfs f0, 0xcc(r31)
/* 806616A0  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 806616A4  C0 1F 00 18 */	lfs f0, 0x18(r31)
/* 806616A8  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 806616AC  80 63 00 04 */	lwz r3, 4(r3)
/* 806616B0  80 63 00 84 */	lwz r3, 0x84(r3)
/* 806616B4  80 63 00 0C */	lwz r3, 0xc(r3)
/* 806616B8  38 63 01 B0 */	addi r3, r3, 0x1b0
/* 806616BC  3C 80 80 3E */	lis r4, now__14mDoMtx_stack_c@ha /* 0x803DD470@ha */
/* 806616C0  38 84 D4 70 */	addi r4, r4, now__14mDoMtx_stack_c@l /* 0x803DD470@l */
/* 806616C4  4B CE 4D ED */	bl PSMTXCopy
/* 806616C8  3C 60 80 3E */	lis r3, now__14mDoMtx_stack_c@ha /* 0x803DD470@ha */
/* 806616CC  38 63 D4 70 */	addi r3, r3, now__14mDoMtx_stack_c@l /* 0x803DD470@l */
/* 806616D0  38 81 00 14 */	addi r4, r1, 0x14
/* 806616D4  38 BE 05 38 */	addi r5, r30, 0x538
/* 806616D8  4B CE 56 95 */	bl PSMTXMultVec
/* 806616DC  C0 7E 05 38 */	lfs f3, 0x538(r30)
/* 806616E0  D0 61 00 08 */	stfs f3, 8(r1)
/* 806616E4  C0 5E 05 3C */	lfs f2, 0x53c(r30)
/* 806616E8  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 806616EC  C0 3E 05 40 */	lfs f1, 0x540(r30)
/* 806616F0  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 806616F4  C0 1F 00 E0 */	lfs f0, 0xe0(r31)
/* 806616F8  EC 00 10 2A */	fadds f0, f0, f2
/* 806616FC  D0 7E 05 50 */	stfs f3, 0x550(r30)
/* 80661700  D0 1E 05 54 */	stfs f0, 0x554(r30)
/* 80661704  D0 3E 05 58 */	stfs f1, 0x558(r30)
lbl_80661708:
/* 80661708  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8066170C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80661710  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80661714  7C 08 03 A6 */	mtlr r0
/* 80661718  38 21 00 30 */	addi r1, r1, 0x30
/* 8066171C  4E 80 00 20 */	blr 
