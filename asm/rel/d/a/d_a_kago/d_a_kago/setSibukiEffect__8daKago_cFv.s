lbl_8085350C:
/* 8085350C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80853510  7C 08 02 A6 */	mflr r0
/* 80853514  90 01 00 64 */	stw r0, 0x64(r1)
/* 80853518  39 61 00 60 */	addi r11, r1, 0x60
/* 8085351C  4B B0 EC AD */	bl _savegpr_24
/* 80853520  7C 7F 1B 78 */	mr r31, r3
/* 80853524  C0 43 04 D8 */	lfs f2, 0x4d8(r3)
/* 80853528  C0 23 07 0C */	lfs f1, 0x70c(r3)
/* 8085352C  3C 60 80 85 */	lis r3, l_HIO@ha /* 0x80854F78@ha */
/* 80853530  38 63 4F 78 */	addi r3, r3, l_HIO@l /* 0x80854F78@l */
/* 80853534  C0 03 00 50 */	lfs f0, 0x50(r3)
/* 80853538  EC 21 00 2A */	fadds f1, f1, f0
/* 8085353C  C0 1F 04 D0 */	lfs f0, 0x4d0(r31)
/* 80853540  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80853544  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 80853548  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 8085354C  38 61 00 28 */	addi r3, r1, 0x28
/* 80853550  38 80 00 00 */	li r4, 0
/* 80853554  A8 BF 04 E6 */	lha r5, 0x4e6(r31)
/* 80853558  38 C0 00 00 */	li r6, 0
/* 8085355C  4B A1 3E 99 */	bl __ct__5csXyzFsss
/* 80853560  3B 00 00 00 */	li r24, 0
/* 80853564  3B C0 00 00 */	li r30, 0
/* 80853568  3B A0 00 00 */	li r29, 0
/* 8085356C  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80853570  3B 43 61 C0 */	addi r26, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80853574  3C 60 80 85 */	lis r3, kago_wave_id_7737@ha /* 0x80854E84@ha */
/* 80853578  3B 63 4E 84 */	addi r27, r3, kago_wave_id_7737@l /* 0x80854E84@l */
/* 8085357C  3C 60 80 85 */	lis r3, lit_3932@ha /* 0x80854B10@ha */
/* 80853580  3B 83 4B 10 */	addi r28, r3, lit_3932@l /* 0x80854B10@l */
lbl_80853584:
/* 80853584  80 7A 5D 3C */	lwz r3, 0x5d3c(r26)
/* 80853588  38 00 00 FF */	li r0, 0xff
/* 8085358C  90 01 00 08 */	stw r0, 8(r1)
/* 80853590  38 80 00 00 */	li r4, 0
/* 80853594  90 81 00 0C */	stw r4, 0xc(r1)
/* 80853598  38 00 FF FF */	li r0, -1
/* 8085359C  90 01 00 10 */	stw r0, 0x10(r1)
/* 808535A0  90 81 00 14 */	stw r4, 0x14(r1)
/* 808535A4  90 81 00 18 */	stw r4, 0x18(r1)
/* 808535A8  90 81 00 1C */	stw r4, 0x1c(r1)
/* 808535AC  3B 3D 0B 44 */	addi r25, r29, 0xb44
/* 808535B0  7C 9F C8 2E */	lwzx r4, r31, r25
/* 808535B4  38 A0 00 00 */	li r5, 0
/* 808535B8  7C DB F2 2E */	lhzx r6, r27, r30
/* 808535BC  38 E1 00 30 */	addi r7, r1, 0x30
/* 808535C0  39 1F 01 0C */	addi r8, r31, 0x10c
/* 808535C4  39 21 00 28 */	addi r9, r1, 0x28
/* 808535C8  39 40 00 00 */	li r10, 0
/* 808535CC  C0 3C 00 00 */	lfs f1, 0(r28)
/* 808535D0  4B 7F 9E FD */	bl set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf
/* 808535D4  7C 7F C9 2E */	stwx r3, r31, r25
/* 808535D8  3B 18 00 01 */	addi r24, r24, 1
/* 808535DC  2C 18 00 03 */	cmpwi r24, 3
/* 808535E0  3B DE 00 02 */	addi r30, r30, 2
/* 808535E4  3B BD 00 04 */	addi r29, r29, 4
/* 808535E8  41 80 FF 9C */	blt lbl_80853584
/* 808535EC  88 1F 06 E7 */	lbz r0, 0x6e7(r31)
/* 808535F0  28 00 00 00 */	cmplwi r0, 0
/* 808535F4  40 82 00 34 */	bne lbl_80853628
/* 808535F8  3C 60 00 07 */	lis r3, 0x0007 /* 0x00070496@ha */
/* 808535FC  38 03 04 96 */	addi r0, r3, 0x0496 /* 0x00070496@l */
/* 80853600  90 01 00 24 */	stw r0, 0x24(r1)
/* 80853604  38 7F 05 74 */	addi r3, r31, 0x574
/* 80853608  38 81 00 24 */	addi r4, r1, 0x24
/* 8085360C  38 A0 00 00 */	li r5, 0
/* 80853610  38 C0 FF FF */	li r6, -1
/* 80853614  81 9F 05 74 */	lwz r12, 0x574(r31)
/* 80853618  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8085361C  7D 89 03 A6 */	mtctr r12
/* 80853620  4E 80 04 21 */	bctrl 
/* 80853624  48 00 00 30 */	b lbl_80853654
lbl_80853628:
/* 80853628  3C 60 00 07 */	lis r3, 0x0007 /* 0x0007049C@ha */
/* 8085362C  38 03 04 9C */	addi r0, r3, 0x049C /* 0x0007049C@l */
/* 80853630  90 01 00 20 */	stw r0, 0x20(r1)
/* 80853634  38 7F 05 74 */	addi r3, r31, 0x574
/* 80853638  38 81 00 20 */	addi r4, r1, 0x20
/* 8085363C  38 A0 00 00 */	li r5, 0
/* 80853640  38 C0 FF FF */	li r6, -1
/* 80853644  81 9F 05 74 */	lwz r12, 0x574(r31)
/* 80853648  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8085364C  7D 89 03 A6 */	mtctr r12
/* 80853650  4E 80 04 21 */	bctrl 
lbl_80853654:
/* 80853654  39 61 00 60 */	addi r11, r1, 0x60
/* 80853658  4B B0 EB BD */	bl _restgpr_24
/* 8085365C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80853660  7C 08 03 A6 */	mtlr r0
/* 80853664  38 21 00 60 */	addi r1, r1, 0x60
/* 80853668  4E 80 00 20 */	blr 