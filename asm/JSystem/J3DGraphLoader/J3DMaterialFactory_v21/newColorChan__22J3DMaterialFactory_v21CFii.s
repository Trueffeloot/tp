lbl_8033386C:
/* 8033386C  81 04 00 04 */	lwz r8, 4(r4)
/* 80333870  80 E4 00 08 */	lwz r7, 8(r4)
/* 80333874  54 A0 08 3C */	slwi r0, r5, 1
/* 80333878  7C 07 02 2E */	lhzx r0, r7, r0
/* 8033387C  1C 00 01 38 */	mulli r0, r0, 0x138
/* 80333880  7C A8 02 14 */	add r5, r8, r0
/* 80333884  54 C0 08 3C */	slwi r0, r6, 1
/* 80333888  7C A5 02 14 */	add r5, r5, r0
/* 8033388C  A0 05 00 0C */	lhz r0, 0xc(r5)
/* 80333890  28 00 FF FF */	cmplwi r0, 0xffff
/* 80333894  41 82 00 C0 */	beq lbl_80333954
/* 80333898  80 84 00 14 */	lwz r4, 0x14(r4)
/* 8033389C  54 00 1B 78 */	rlwinm r0, r0, 3, 0xd, 0x1c
/* 803338A0  7C 84 02 14 */	add r4, r4, r0
/* 803338A4  88 A4 00 05 */	lbz r5, 5(r4)
/* 803338A8  38 05 FF 01 */	addi r0, r5, -255
/* 803338AC  30 00 FF FF */	addic r0, r0, -1
/* 803338B0  7C 00 01 10 */	subfe r0, r0, r0
/* 803338B4  7C A9 00 78 */	andc r9, r5, r0
/* 803338B8  88 E4 00 04 */	lbz r7, 4(r4)
/* 803338BC  88 C4 00 03 */	lbz r6, 3(r4)
/* 803338C0  88 A4 00 02 */	lbz r5, 2(r4)
/* 803338C4  88 04 00 00 */	lbz r0, 0(r4)
/* 803338C8  54 08 0B FC */	rlwinm r8, r0, 1, 0xf, 0x1e
/* 803338CC  88 04 00 01 */	lbz r0, 1(r4)
/* 803338D0  7D 00 03 78 */	or r0, r8, r0
/* 803338D4  54 04 06 B0 */	rlwinm r4, r0, 0, 0x1a, 0x18
/* 803338D8  55 20 34 B2 */	rlwinm r0, r9, 6, 0x12, 0x19
/* 803338DC  7C 80 03 78 */	or r0, r4, r0
/* 803338E0  50 A0 17 7A */	rlwimi r0, r5, 2, 0x1d, 0x1d
/* 803338E4  50 A0 17 38 */	rlwimi r0, r5, 2, 0x1c, 0x1c
/* 803338E8  50 A0 16 F6 */	rlwimi r0, r5, 2, 0x1b, 0x1b
/* 803338EC  50 A0 16 B4 */	rlwimi r0, r5, 2, 0x1a, 0x1a
/* 803338F0  50 A0 3D 28 */	rlwimi r0, r5, 7, 0x14, 0x14
/* 803338F4  50 A0 3C E6 */	rlwimi r0, r5, 7, 0x13, 0x13
/* 803338F8  54 A4 3C A4 */	rlwinm r4, r5, 7, 0x12, 0x12
/* 803338FC  50 04 04 FE */	rlwimi r4, r0, 0, 0x13, 0x1f
/* 80333900  54 A0 3C 62 */	rlwinm r0, r5, 7, 0x11, 0x11
/* 80333904  50 80 04 BE */	rlwimi r0, r4, 0, 0x12, 0x1f
/* 80333908  54 04 06 6C */	rlwinm r4, r0, 0, 0x19, 0x16
/* 8033390C  30 07 FF FF */	addic r0, r7, -1
/* 80333910  7C 00 01 10 */	subfe r0, r0, r0
/* 80333914  7C C0 00 78 */	andc r0, r6, r0
/* 80333918  54 00 38 30 */	slwi r0, r0, 7
/* 8033391C  7C 80 03 78 */	or r0, r4, r0
/* 80333920  54 05 05 EA */	rlwinm r5, r0, 0, 0x17, 0x15
/* 80333924  20 87 00 02 */	subfic r4, r7, 2
/* 80333928  30 04 FF FF */	addic r0, r4, -1
/* 8033392C  7C 00 21 10 */	subfe r0, r0, r4
/* 80333930  54 00 4B EC */	rlwinm r0, r0, 9, 0xf, 0x16
/* 80333934  7C A0 03 78 */	or r0, r5, r0
/* 80333938  54 04 05 A8 */	rlwinm r4, r0, 0, 0x16, 0x14
/* 8033393C  30 07 FF FF */	addic r0, r7, -1
/* 80333940  7C 00 39 10 */	subfe r0, r0, r7
/* 80333944  54 00 53 AA */	rlwinm r0, r0, 0xa, 0xe, 0x15
/* 80333948  7C 80 03 78 */	or r0, r4, r0
/* 8033394C  B0 03 00 00 */	sth r0, 0(r3)
/* 80333950  4E 80 00 20 */	blr 
lbl_80333954:
/* 80333954  39 02 C9 F0 */	la r8, j3dDefaultColorChanInfo(r2) /* 804563F0-_SDA2_BASE_ */
/* 80333958  88 A8 00 05 */	lbz r5, 5(r8)
/* 8033395C  3C 80 00 01 */	lis r4, 0x0001 /* 0x0000FFFF@ha */
/* 80333960  38 04 FF FF */	addi r0, r4, 0xFFFF /* 0x0000FFFF@l */
/* 80333964  7C 00 28 50 */	subf r0, r0, r5
/* 80333968  30 00 FF FF */	addic r0, r0, -1
/* 8033396C  7C 00 01 10 */	subfe r0, r0, r0
/* 80333970  7C A9 00 78 */	andc r9, r5, r0
/* 80333974  88 E8 00 04 */	lbz r7, 4(r8)
/* 80333978  88 C8 00 03 */	lbz r6, 3(r8)
/* 8033397C  88 A8 00 02 */	lbz r5, 2(r8)
/* 80333980  88 88 00 01 */	lbz r4, 1(r8)
/* 80333984  88 02 C9 F0 */	lbz r0, j3dDefaultColorChanInfo(r2)
/* 80333988  54 00 0B FC */	rlwinm r0, r0, 1, 0xf, 0x1e
/* 8033398C  7C 00 23 78 */	or r0, r0, r4
/* 80333990  54 04 06 B0 */	rlwinm r4, r0, 0, 0x1a, 0x18
/* 80333994  55 20 34 B2 */	rlwinm r0, r9, 6, 0x12, 0x19
/* 80333998  7C 80 03 78 */	or r0, r4, r0
/* 8033399C  50 A0 17 7A */	rlwimi r0, r5, 2, 0x1d, 0x1d
/* 803339A0  50 A0 17 38 */	rlwimi r0, r5, 2, 0x1c, 0x1c
/* 803339A4  50 A0 16 F6 */	rlwimi r0, r5, 2, 0x1b, 0x1b
/* 803339A8  50 A0 16 B4 */	rlwimi r0, r5, 2, 0x1a, 0x1a
/* 803339AC  50 A0 3D 28 */	rlwimi r0, r5, 7, 0x14, 0x14
/* 803339B0  50 A0 3C E6 */	rlwimi r0, r5, 7, 0x13, 0x13
/* 803339B4  54 A4 3C A4 */	rlwinm r4, r5, 7, 0x12, 0x12
/* 803339B8  50 04 04 FE */	rlwimi r4, r0, 0, 0x13, 0x1f
/* 803339BC  54 A0 3C 62 */	rlwinm r0, r5, 7, 0x11, 0x11
/* 803339C0  50 80 04 BE */	rlwimi r0, r4, 0, 0x12, 0x1f
/* 803339C4  54 04 06 6C */	rlwinm r4, r0, 0, 0x19, 0x16
/* 803339C8  30 07 FF FF */	addic r0, r7, -1
/* 803339CC  7C 00 01 10 */	subfe r0, r0, r0
/* 803339D0  7C C0 00 78 */	andc r0, r6, r0
/* 803339D4  54 00 38 30 */	slwi r0, r0, 7
/* 803339D8  7C 80 03 78 */	or r0, r4, r0
/* 803339DC  54 05 05 EA */	rlwinm r5, r0, 0, 0x17, 0x15
/* 803339E0  20 87 00 02 */	subfic r4, r7, 2
/* 803339E4  30 04 FF FF */	addic r0, r4, -1
/* 803339E8  7C 00 21 10 */	subfe r0, r0, r4
/* 803339EC  54 00 4B EC */	rlwinm r0, r0, 9, 0xf, 0x16
/* 803339F0  7C A0 03 78 */	or r0, r5, r0
/* 803339F4  54 04 05 A8 */	rlwinm r4, r0, 0, 0x16, 0x14
/* 803339F8  30 07 FF FF */	addic r0, r7, -1
/* 803339FC  7C 00 39 10 */	subfe r0, r0, r7
/* 80333A00  54 00 53 AA */	rlwinm r0, r0, 0xa, 0xe, 0x15
/* 80333A04  7C 80 03 78 */	or r0, r4, r0
/* 80333A08  B0 03 00 00 */	sth r0, 0(r3)
/* 80333A0C  4E 80 00 20 */	blr 