/* 802BDEDC 002BAE1C  C0 2D 82 5C */ lfs f1, lbl_804507DC-_SDA_BASE_(r13)
/* 802BDEE0 002BAE20  C0 0D 82 58 */ lfs f0, lbl_804507D8-_SDA_BASE_(r13)
/* 802BDEE4 002BAE24  EC 01 00 24 */ fdivs f0, f1, f0
/* 802BDEE8 002BAE28  D0 0D 8D D0 */ stfs f0, lbl_80451350-_SDA_BASE_(r13)
/* 802BDEEC 002BAE2C  4E 80 00 20 */ blr