lbl_8012948C:
/* 8012948C  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80129490  7C 08 02 A6 */	mflr r0
/* 80129494  90 01 00 74 */	stw r0, 0x74(r1)
/* 80129498  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8012949C  F3 E1 00 68 */	psq_st f31, 104(r1), 0, 0 /* qr0 */
/* 801294A0  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 801294A4  F3 C1 00 58 */	psq_st f30, 88(r1), 0, 0 /* qr0 */
/* 801294A8  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 801294AC  F3 A1 00 48 */	psq_st f29, 72(r1), 0, 0 /* qr0 */
/* 801294B0  DB 81 00 30 */	stfd f28, 0x30(r1)
/* 801294B4  F3 81 00 38 */	psq_st f28, 56(r1), 0, 0 /* qr0 */
/* 801294B8  39 61 00 30 */	addi r11, r1, 0x30
/* 801294BC  48 23 8D 11 */	bl _savegpr_25
/* 801294C0  7C 7B 1B 78 */	mr r27, r3
/* 801294C4  FF 80 08 90 */	fmr f28, f1
/* 801294C8  FF A0 10 90 */	fmr f29, f2
/* 801294CC  FF C0 18 90 */	fmr f30, f3
/* 801294D0  7C 9C 23 78 */	mr r28, r4
/* 801294D4  7C BD 2B 78 */	mr r29, r5
/* 801294D8  7C DE 33 78 */	mr r30, r6
/* 801294DC  FF E0 20 90 */	fmr f31, f4
/* 801294E0  38 9B 1F 58 */	addi r4, r27, 0x1f58
/* 801294E4  57 9F 18 38 */	slwi r31, r28, 3
/* 801294E8  3C A0 80 39 */	lis r5, m_wlAnmDataTable__9daAlink_c@ha /* 0x80391010@ha */
/* 801294EC  38 A5 10 10 */	addi r5, r5, m_wlAnmDataTable__9daAlink_c@l /* 0x80391010@l */
/* 801294F0  7C A5 FA 2E */	lhzx r5, r5, r31
/* 801294F4  38 C0 2C 00 */	li r6, 0x2c00
/* 801294F8  4B F7 A8 15 */	bl getAnimeResource__9daAlink_cFP14daPy_anmHeap_cUsUl
/* 801294FC  7C 7A 1B 79 */	or. r26, r3, r3
/* 80129500  40 82 00 10 */	bne lbl_80129510
/* 80129504  83 5B 1F 2C */	lwz r26, 0x1f2c(r27)
/* 80129508  3B 20 00 00 */	li r25, 0
/* 8012950C  48 00 00 08 */	b lbl_80129514
lbl_80129510:
/* 80129510  3B 20 00 01 */	li r25, 1
lbl_80129514:
/* 80129514  7F 63 DB 78 */	mr r3, r27
/* 80129518  38 9B 1F 6C */	addi r4, r27, 0x1f6c
/* 8012951C  57 A0 18 38 */	slwi r0, r29, 3
/* 80129520  3C A0 80 39 */	lis r5, m_wlAnmDataTable__9daAlink_c@ha /* 0x80391010@ha */
/* 80129524  38 A5 10 10 */	addi r5, r5, m_wlAnmDataTable__9daAlink_c@l /* 0x80391010@l */
/* 80129528  7C A5 02 2E */	lhzx r5, r5, r0
/* 8012952C  38 C0 2C 00 */	li r6, 0x2c00
/* 80129530  4B F7 A7 DD */	bl getAnimeResource__9daAlink_cFP14daPy_anmHeap_cUsUl
/* 80129534  7C 66 1B 78 */	mr r6, r3
/* 80129538  7C C0 33 79 */	or. r0, r6, r6
/* 8012953C  40 82 00 08 */	bne lbl_80129544
/* 80129540  80 DB 1F 34 */	lwz r6, 0x1f34(r27)
lbl_80129544:
/* 80129544  28 00 00 00 */	cmplwi r0, 0
/* 80129548  41 82 00 08 */	beq lbl_80129550
/* 8012954C  63 39 00 01 */	ori r25, r25, 1
lbl_80129550:
/* 80129550  2C 19 00 00 */	cmpwi r25, 0
/* 80129554  41 82 00 1C */	beq lbl_80129570
/* 80129558  C0 02 92 C0 */	lfs f0, lit_6108(r2)
/* 8012955C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80129560  40 80 00 10 */	bge lbl_80129570
/* 80129564  3C 60 80 39 */	lis r3, m__20daAlinkHIO_wlMove_c0@ha /* 0x8038EE28@ha */
/* 80129568  38 63 EE 28 */	addi r3, r3, m__20daAlinkHIO_wlMove_c0@l /* 0x8038EE28@l */
/* 8012956C  C3 E3 00 94 */	lfs f31, 0x94(r3)
lbl_80129570:
/* 80129570  7F 63 DB 78 */	mr r3, r27
/* 80129574  7F 44 D3 78 */	mr r4, r26
/* 80129578  38 A0 00 00 */	li r5, 0
/* 8012957C  38 E0 00 00 */	li r7, 0
/* 80129580  FC 20 E0 90 */	fmr f1, f28
/* 80129584  FC 40 E8 90 */	fmr f2, f29
/* 80129588  FC 60 F0 90 */	fmr f3, f30
/* 8012958C  7F C8 F3 78 */	mr r8, r30
/* 80129590  4B F8 31 C5 */	bl commonDoubleAnime__9daAlink_cFP15J3DAnmTransformP15J3DAnmTransformP15J3DAnmTransformP15J3DAnmTransformfffi
/* 80129594  C0 02 92 C0 */	lfs f0, lit_6108(r2)
/* 80129598  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8012959C  4C 41 13 82 */	cror 2, 1, 2
/* 801295A0  40 82 00 18 */	bne lbl_801295B8
/* 801295A4  80 7B 20 60 */	lwz r3, 0x2060(r27)
/* 801295A8  FC 20 F8 90 */	fmr f1, f31
/* 801295AC  38 80 00 00 */	li r4, 0
/* 801295B0  38 A0 00 28 */	li r5, 0x28
/* 801295B4  4B EE 62 95 */	bl initOldFrameMorf__22mDoExt_MtxCalcOldFrameFfUsUs
lbl_801295B8:
/* 801295B8  7F 63 DB 78 */	mr r3, r27
/* 801295BC  38 80 00 8B */	li r4, 0x8b
/* 801295C0  4B F8 62 E1 */	bl setFaceBasicTexture__9daAlink_cFQ29daAlink_c13daAlink_FTANM
/* 801295C4  7F 63 DB 78 */	mr r3, r27
/* 801295C8  48 00 DE 31 */	bl checkWolfLieCode__9daAlink_cFv
/* 801295CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801295D0  41 82 00 10 */	beq lbl_801295E0
/* 801295D4  38 00 00 02 */	li r0, 2
/* 801295D8  98 1B 2F 9B */	stb r0, 0x2f9b(r27)
/* 801295DC  48 00 00 18 */	b lbl_801295F4
lbl_801295E0:
/* 801295E0  3C 60 80 39 */	lis r3, m_wlAnmDataTable__9daAlink_c@ha /* 0x80391010@ha */
/* 801295E4  38 03 10 10 */	addi r0, r3, m_wlAnmDataTable__9daAlink_c@l /* 0x80391010@l */
/* 801295E8  7C 60 FA 14 */	add r3, r0, r31
/* 801295EC  88 03 00 02 */	lbz r0, 2(r3)
/* 801295F0  98 1B 2F 9B */	stb r0, 0x2f9b(r27)
lbl_801295F4:
/* 801295F4  80 1B 31 A0 */	lwz r0, 0x31a0(r27)
/* 801295F8  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801295FC  41 82 00 14 */	beq lbl_80129610
/* 80129600  38 1B 1F D0 */	addi r0, r27, 0x1fd0
/* 80129604  90 1B 21 5C */	stw r0, 0x215c(r27)
/* 80129608  7F 80 E3 78 */	mr r0, r28
/* 8012960C  48 00 00 10 */	b lbl_8012961C
lbl_80129610:
/* 80129610  38 1B 1F E8 */	addi r0, r27, 0x1fe8
/* 80129614  90 1B 21 5C */	stw r0, 0x215c(r27)
/* 80129618  7F A0 EB 78 */	mr r0, r29
lbl_8012961C:
/* 8012961C  54 04 18 38 */	slwi r4, r0, 3
/* 80129620  3C 60 80 39 */	lis r3, m_wlAnmDataTable__9daAlink_c@ha /* 0x80391010@ha */
/* 80129624  38 03 10 10 */	addi r0, r3, m_wlAnmDataTable__9daAlink_c@l /* 0x80391010@l */
/* 80129628  7C 60 22 14 */	add r3, r0, r4
/* 8012962C  38 03 00 04 */	addi r0, r3, 4
/* 80129630  90 1B 21 60 */	stw r0, 0x2160(r27)
/* 80129634  88 03 00 03 */	lbz r0, 3(r3)
/* 80129638  98 1B 2F D8 */	stb r0, 0x2fd8(r27)
/* 8012963C  38 60 00 01 */	li r3, 1
/* 80129640  E3 E1 00 68 */	psq_l f31, 104(r1), 0, 0 /* qr0 */
/* 80129644  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 80129648  E3 C1 00 58 */	psq_l f30, 88(r1), 0, 0 /* qr0 */
/* 8012964C  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 80129650  E3 A1 00 48 */	psq_l f29, 72(r1), 0, 0 /* qr0 */
/* 80129654  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 80129658  E3 81 00 38 */	psq_l f28, 56(r1), 0, 0 /* qr0 */
/* 8012965C  CB 81 00 30 */	lfd f28, 0x30(r1)
/* 80129660  39 61 00 30 */	addi r11, r1, 0x30
/* 80129664  48 23 8B B5 */	bl _restgpr_25
/* 80129668  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8012966C  7C 08 03 A6 */	mtlr r0
/* 80129670  38 21 00 70 */	addi r1, r1, 0x70
/* 80129674  4E 80 00 20 */	blr 
