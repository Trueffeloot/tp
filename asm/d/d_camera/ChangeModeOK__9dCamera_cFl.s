lbl_801614F4:
/* 801614F4  3C A0 80 40 */	lis r5, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 801614F8  38 A5 61 C0 */	addi r5, r5, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 801614FC  80 05 51 84 */	lwz r0, 0x5184(r5)
/* 80161500  2C 00 00 00 */	cmpwi r0, 0
/* 80161504  40 82 00 10 */	bne lbl_80161514
/* 80161508  80 03 06 0C */	lwz r0, 0x60c(r3)
/* 8016150C  54 00 00 85 */	rlwinm. r0, r0, 0, 2, 2
/* 80161510  41 82 00 0C */	beq lbl_8016151C
lbl_80161514:
/* 80161514  38 60 00 00 */	li r3, 0
/* 80161518  4E 80 00 20 */	blr 
lbl_8016151C:
/* 8016151C  80 A3 06 84 */	lwz r5, 0x684(r3)
/* 80161520  80 03 06 8C */	lwz r0, 0x68c(r3)
/* 80161524  1C 00 00 44 */	mulli r0, r0, 0x44
/* 80161528  7C A5 02 14 */	add r5, r5, r0
/* 8016152C  80 03 01 90 */	lwz r0, 0x190(r3)
/* 80161530  1C 00 00 16 */	mulli r0, r0, 0x16
/* 80161534  7C 65 02 14 */	add r3, r5, r0
/* 80161538  54 80 08 3C */	slwi r0, r4, 1
/* 8016153C  7C 63 02 14 */	add r3, r3, r0
/* 80161540  A8 03 00 18 */	lha r0, 0x18(r3)
/* 80161544  54 00 0F FE */	srwi r0, r0, 0x1f
/* 80161548  68 03 00 01 */	xori r3, r0, 1
/* 8016154C  4E 80 00 20 */	blr 
