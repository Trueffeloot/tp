lbl_80303BDC:
/* 80303BDC  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 80303BE0  7C 08 02 A6 */	mflr r0
/* 80303BE4  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80303BE8  DB E1 00 B0 */	stfd f31, 0xb0(r1)
/* 80303BEC  F3 E1 00 B8 */	psq_st f31, 184(r1), 0, 0 /* qr0 */
/* 80303BF0  DB C1 00 A0 */	stfd f30, 0xa0(r1)
/* 80303BF4  F3 C1 00 A8 */	psq_st f30, 168(r1), 0, 0 /* qr0 */
/* 80303BF8  DB A1 00 90 */	stfd f29, 0x90(r1)
/* 80303BFC  F3 A1 00 98 */	psq_st f29, 152(r1), 0, 0 /* qr0 */
/* 80303C00  DB 81 00 80 */	stfd f28, 0x80(r1)
/* 80303C04  F3 81 00 88 */	psq_st f28, 136(r1), 0, 0 /* qr0 */
/* 80303C08  39 61 00 80 */	addi r11, r1, 0x80
/* 80303C0C  48 05 E5 B9 */	bl _savegpr_23
/* 80303C10  7C 77 1B 78 */	mr r23, r3
/* 80303C14  FF 80 08 90 */	fmr f28, f1
/* 80303C18  FF A0 10 90 */	fmr f29, f2
/* 80303C1C  7C 98 23 78 */	mr r24, r4
/* 80303C20  7C B9 2B 78 */	mr r25, r5
/* 80303C24  7C DA 33 78 */	mr r26, r6
/* 80303C28  7C FB 3B 78 */	mr r27, r7
/* 80303C2C  7D 1C 43 78 */	mr r28, r8
/* 80303C30  7D 3D 4B 78 */	mr r29, r9
/* 80303C34  7D 5E 53 78 */	mr r30, r10
/* 80303C38  AB E1 00 CA */	lha r31, 0xca(r1)
/* 80303C3C  80 61 00 CC */	lwz r3, 0xcc(r1)
/* 80303C40  EF FC 18 2A */	fadds f31, f28, f3
/* 80303C44  EF DD 20 2A */	fadds f30, f29, f4
/* 80303C48  38 97 00 80 */	addi r4, r23, 0x80
/* 80303C4C  38 A1 00 20 */	addi r5, r1, 0x20
/* 80303C50  48 04 28 95 */	bl PSMTXConcat
/* 80303C54  80 77 01 50 */	lwz r3, 0x150(r23)
/* 80303C58  28 03 00 00 */	cmplwi r3, 0
/* 80303C5C  41 82 00 10 */	beq lbl_80303C6C
/* 80303C60  88 03 00 0E */	lbz r0, 0xe(r3)
/* 80303C64  28 00 00 00 */	cmplwi r0, 0
/* 80303C68  41 82 01 BC */	beq lbl_80303E24
lbl_80303C6C:
/* 80303C6C  38 61 00 20 */	addi r3, r1, 0x20
/* 80303C70  38 80 00 00 */	li r4, 0
/* 80303C74  48 05 C5 D9 */	bl GXLoadPosMtxImm
/* 80303C78  80 17 01 38 */	lwz r0, 0x138(r23)
/* 80303C7C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80303C80  80 17 01 3C */	lwz r0, 0x13c(r23)
/* 80303C84  90 01 00 18 */	stw r0, 0x18(r1)
/* 80303C88  80 17 01 40 */	lwz r0, 0x140(r23)
/* 80303C8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80303C90  80 17 01 44 */	lwz r0, 0x144(r23)
/* 80303C94  90 01 00 10 */	stw r0, 0x10(r1)
/* 80303C98  80 77 01 50 */	lwz r3, 0x150(r23)
/* 80303C9C  28 03 00 00 */	cmplwi r3, 0
/* 80303CA0  41 82 00 90 */	beq lbl_80303D30
/* 80303CA4  A0 03 00 1C */	lhz r0, 0x1c(r3)
/* 80303CA8  54 00 07 FE */	clrlwi r0, r0, 0x1f
/* 80303CAC  28 00 00 01 */	cmplwi r0, 1
/* 80303CB0  40 82 00 5C */	bne lbl_80303D0C
/* 80303CB4  88 03 00 0F */	lbz r0, 0xf(r3)
/* 80303CB8  2C 00 00 01 */	cmpwi r0, 1
/* 80303CBC  40 82 00 74 */	bne lbl_80303D30
/* 80303CC0  88 01 00 1F */	lbz r0, 0x1f(r1)
/* 80303CC4  88 97 00 B3 */	lbz r4, 0xb3(r23)
/* 80303CC8  7C 00 21 D6 */	mullw r0, r0, r4
/* 80303CCC  38 60 00 FF */	li r3, 0xff
/* 80303CD0  7C 00 1B D6 */	divw r0, r0, r3
/* 80303CD4  98 01 00 1F */	stb r0, 0x1f(r1)
/* 80303CD8  88 01 00 1B */	lbz r0, 0x1b(r1)
/* 80303CDC  7C 00 21 D6 */	mullw r0, r0, r4
/* 80303CE0  7C 00 1B D6 */	divw r0, r0, r3
/* 80303CE4  98 01 00 1B */	stb r0, 0x1b(r1)
/* 80303CE8  88 01 00 17 */	lbz r0, 0x17(r1)
/* 80303CEC  7C 00 21 D6 */	mullw r0, r0, r4
/* 80303CF0  7C 00 1B D6 */	divw r0, r0, r3
/* 80303CF4  98 01 00 17 */	stb r0, 0x17(r1)
/* 80303CF8  88 01 00 13 */	lbz r0, 0x13(r1)
/* 80303CFC  7C 00 21 D6 */	mullw r0, r0, r4
/* 80303D00  7C 00 1B D6 */	divw r0, r0, r3
/* 80303D04  98 01 00 13 */	stb r0, 0x13(r1)
/* 80303D08  48 00 00 28 */	b lbl_80303D30
lbl_80303D0C:
/* 80303D0C  88 17 00 B4 */	lbz r0, 0xb4(r23)
/* 80303D10  28 00 00 00 */	cmplwi r0, 0
/* 80303D14  41 82 00 1C */	beq lbl_80303D30
/* 80303D18  88 17 00 B3 */	lbz r0, 0xb3(r23)
/* 80303D1C  90 01 00 08 */	stw r0, 8(r1)
/* 80303D20  90 01 00 0C */	stw r0, 0xc(r1)
/* 80303D24  38 60 00 02 */	li r3, 2
/* 80303D28  38 81 00 0C */	addi r4, r1, 0xc
/* 80303D2C  48 05 9D 1D */	bl GXSetChanMatColor
lbl_80303D30:
/* 80303D30  38 60 00 00 */	li r3, 0
/* 80303D34  38 80 00 09 */	li r4, 9
/* 80303D38  38 A0 00 01 */	li r5, 1
/* 80303D3C  38 C0 00 04 */	li r6, 4
/* 80303D40  38 E0 00 00 */	li r7, 0
/* 80303D44  48 05 78 81 */	bl GXSetVtxAttrFmt
/* 80303D48  38 60 00 00 */	li r3, 0
/* 80303D4C  38 80 00 0D */	li r4, 0xd
/* 80303D50  38 A0 00 01 */	li r5, 1
/* 80303D54  38 C0 00 03 */	li r6, 3
/* 80303D58  38 E0 00 08 */	li r7, 8
/* 80303D5C  48 05 78 69 */	bl GXSetVtxAttrFmt
/* 80303D60  38 60 00 80 */	li r3, 0x80
/* 80303D64  38 80 00 00 */	li r4, 0
/* 80303D68  38 A0 00 04 */	li r5, 4
/* 80303D6C  48 05 89 F9 */	bl GXBegin
/* 80303D70  3C 60 CC 01 */	lis r3, 0xCC01 /* 0xCC008000@ha */
/* 80303D74  D3 83 80 00 */	stfs f28, 0x8000(r3)  /* 0xCC008000@l */
/* 80303D78  D3 A3 80 00 */	stfs f29, -0x8000(r3)
/* 80303D7C  C0 02 C8 C4 */	lfs f0, lit_1784(r2)
/* 80303D80  D0 03 80 00 */	stfs f0, -0x8000(r3)
/* 80303D84  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80303D88  90 03 80 00 */	stw r0, -0x8000(r3)
/* 80303D8C  B3 03 80 00 */	sth r24, -0x8000(r3)
/* 80303D90  B3 23 80 00 */	sth r25, -0x8000(r3)
/* 80303D94  D3 E3 80 00 */	stfs f31, -0x8000(r3)
/* 80303D98  D3 A3 80 00 */	stfs f29, -0x8000(r3)
/* 80303D9C  C0 02 C8 C4 */	lfs f0, lit_1784(r2)
/* 80303DA0  D0 03 80 00 */	stfs f0, -0x8000(r3)
/* 80303DA4  80 01 00 18 */	lwz r0, 0x18(r1)
/* 80303DA8  90 03 80 00 */	stw r0, -0x8000(r3)
/* 80303DAC  B3 43 80 00 */	sth r26, -0x8000(r3)
/* 80303DB0  B3 63 80 00 */	sth r27, -0x8000(r3)
/* 80303DB4  D3 E3 80 00 */	stfs f31, -0x8000(r3)
/* 80303DB8  D3 C3 80 00 */	stfs f30, -0x8000(r3)
/* 80303DBC  C0 02 C8 C4 */	lfs f0, lit_1784(r2)
/* 80303DC0  D0 03 80 00 */	stfs f0, -0x8000(r3)
/* 80303DC4  80 01 00 10 */	lwz r0, 0x10(r1)
/* 80303DC8  90 03 80 00 */	stw r0, -0x8000(r3)
/* 80303DCC  B3 C3 80 00 */	sth r30, -0x8000(r3)
/* 80303DD0  B3 E3 80 00 */	sth r31, -0x8000(r3)
/* 80303DD4  D3 83 80 00 */	stfs f28, -0x8000(r3)
/* 80303DD8  D3 C3 80 00 */	stfs f30, -0x8000(r3)
/* 80303DDC  C0 02 C8 C4 */	lfs f0, lit_1784(r2)
/* 80303DE0  D0 03 80 00 */	stfs f0, -0x8000(r3)
/* 80303DE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80303DE8  90 03 80 00 */	stw r0, -0x8000(r3)
/* 80303DEC  B3 83 80 00 */	sth r28, -0x8000(r3)
/* 80303DF0  B3 A3 80 00 */	sth r29, -0x8000(r3)
/* 80303DF4  38 60 00 00 */	li r3, 0
/* 80303DF8  38 80 00 0D */	li r4, 0xd
/* 80303DFC  38 A0 00 01 */	li r5, 1
/* 80303E00  38 C0 00 02 */	li r6, 2
/* 80303E04  38 E0 00 0F */	li r7, 0xf
/* 80303E08  48 05 77 BD */	bl GXSetVtxAttrFmt
/* 80303E0C  38 60 00 00 */	li r3, 0
/* 80303E10  38 80 00 09 */	li r4, 9
/* 80303E14  38 A0 00 01 */	li r5, 1
/* 80303E18  38 C0 00 03 */	li r6, 3
/* 80303E1C  38 E0 00 00 */	li r7, 0
/* 80303E20  48 05 77 A5 */	bl GXSetVtxAttrFmt
lbl_80303E24:
/* 80303E24  E3 E1 00 B8 */	psq_l f31, 184(r1), 0, 0 /* qr0 */
/* 80303E28  CB E1 00 B0 */	lfd f31, 0xb0(r1)
/* 80303E2C  E3 C1 00 A8 */	psq_l f30, 168(r1), 0, 0 /* qr0 */
/* 80303E30  CB C1 00 A0 */	lfd f30, 0xa0(r1)
/* 80303E34  E3 A1 00 98 */	psq_l f29, 152(r1), 0, 0 /* qr0 */
/* 80303E38  CB A1 00 90 */	lfd f29, 0x90(r1)
/* 80303E3C  E3 81 00 88 */	psq_l f28, 136(r1), 0, 0 /* qr0 */
/* 80303E40  CB 81 00 80 */	lfd f28, 0x80(r1)
/* 80303E44  39 61 00 80 */	addi r11, r1, 0x80
/* 80303E48  48 05 E3 C9 */	bl _restgpr_23
/* 80303E4C  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 80303E50  7C 08 03 A6 */	mtlr r0
/* 80303E54  38 21 00 C0 */	addi r1, r1, 0xc0
/* 80303E58  4E 80 00 20 */	blr 
