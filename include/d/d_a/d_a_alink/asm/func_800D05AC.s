/* 800D05AC 000CD4EC  A0 03 2F E8 */ lhz r0, 0x2fe8(r3)
/* 800D05B0 000CD4F0  20 00 01 14 */ subfic r0, r0, 0x114
/* 800D05B4 000CD4F4  7C 00 00 34 */ cntlzw r0, r0
/* 800D05B8 000CD4F8  54 03 DE 3E */ rlwinm r3, r0, 0x1b, 0x18, 0x1f
/* 800D05BC 000CD4FC  4E 80 00 20 */ blr