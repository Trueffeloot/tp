lbl_80BB14C8:
/* 80BB14C8  80 83 10 2C */	lwz r4, 0x102c(r3)
/* 80BB14CC  28 04 00 00 */	cmplwi r4, 0
/* 80BB14D0  41 82 00 30 */	beq lbl_80BB1500
/* 80BB14D4  80 04 00 F4 */	lwz r0, 0xf4(r4)
/* 80BB14D8  60 00 00 01 */	ori r0, r0, 1
/* 80BB14DC  90 04 00 F4 */	stw r0, 0xf4(r4)
/* 80BB14E0  38 00 00 01 */	li r0, 1
/* 80BB14E4  90 04 00 24 */	stw r0, 0x24(r4)
/* 80BB14E8  80 83 10 2C */	lwz r4, 0x102c(r3)
/* 80BB14EC  80 04 00 F4 */	lwz r0, 0xf4(r4)
/* 80BB14F0  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 80BB14F4  90 04 00 F4 */	stw r0, 0xf4(r4)
/* 80BB14F8  38 00 00 00 */	li r0, 0
/* 80BB14FC  90 03 10 2C */	stw r0, 0x102c(r3)
lbl_80BB1500:
/* 80BB1500  80 83 10 30 */	lwz r4, 0x1030(r3)
/* 80BB1504  28 04 00 00 */	cmplwi r4, 0
/* 80BB1508  41 82 00 30 */	beq lbl_80BB1538
/* 80BB150C  80 04 00 F4 */	lwz r0, 0xf4(r4)
/* 80BB1510  60 00 00 01 */	ori r0, r0, 1
/* 80BB1514  90 04 00 F4 */	stw r0, 0xf4(r4)
/* 80BB1518  38 00 00 01 */	li r0, 1
/* 80BB151C  90 04 00 24 */	stw r0, 0x24(r4)
/* 80BB1520  80 83 10 30 */	lwz r4, 0x1030(r3)
/* 80BB1524  80 04 00 F4 */	lwz r0, 0xf4(r4)
/* 80BB1528  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 80BB152C  90 04 00 F4 */	stw r0, 0xf4(r4)
/* 80BB1530  38 00 00 00 */	li r0, 0
/* 80BB1534  90 03 10 30 */	stw r0, 0x1030(r3)
lbl_80BB1538:
/* 80BB1538  38 00 00 00 */	li r0, 0
/* 80BB153C  98 03 0F EA */	stb r0, 0xfea(r3)
/* 80BB1540  38 00 00 01 */	li r0, 1
/* 80BB1544  98 03 0F E4 */	stb r0, 0xfe4(r3)
/* 80BB1548  4E 80 00 20 */	blr 
