/* nvidia */
{ 0x10de, 0x0010, 0x0ff0, "" }, /* RIVA */
{ 0x10de, 0x0020, 0x0ff0, "" }, /* RIVA */
{ 0x10de, 0x00a0, 0x0ff0, "" }, /* RIVA */
{ 0x10de, 0x0040, 0x0ff0, "(*)" },
{ 0x10de, 0x0090, 0x0ff0, "(*)" },
{ 0x10de, 0x00C0, 0x0ff0, "(*)" },
{ 0x10de, 0x0100, 0x0ff0, "" }, /* GeForce 256 */
{ 0x10de, 0x0110, 0x0ff0, "(*)" },
{ 0x10de, 0x0120, 0x0ff0, "(*)" },
{ 0x10de, 0x0130, 0x0ff0, "(*)" },
{ 0x10de, 0x0140, 0x0ff0, "(*)" },
{ 0x10de, 0x0150, 0x0ff0, "(*)" },
{ 0x10de, 0x0160, 0x0ff0, "(*)" },
{ 0x10de, 0x0170, 0x0ff0, "(*)" },
{ 0x10de, 0x0180, 0x0ff0, "(*)" },
{ 0x10de, 0x0190, 0x0ff0, "(*)" },
{ 0x10de, 0x01A0, 0x0ff0, "(*)", { 0x01a8, 0x01aa, 0x01ac, 0x01ad, 0x01ab, 0x01a9, 0x01a4, 0x01a5, 0x01a6 }},
{ 0x10de, 0x01D0, 0x0ff0, "(*)" },
{ 0x10de, 0x01F0, 0x0ff0, "(*)" },
{ 0x10de, 0x0200, 0x0ff0, "(*)" },
{ 0x10de, 0x0210, 0x0ff0, "(*)" },
{ 0x10de, 0x0250, 0x0ff0, "(*)" },
{ 0x10de, 0x0280, 0x0ff0, "(*)" },
{ 0x10de, 0x0300, 0x0ff0, "(*)" },
{ 0x10de, 0x0310, 0x0ff0, "(*)" },
{ 0x10de, 0x0320, 0x0ff0, "(*)" },
{ 0x10de, 0x0330, 0x0ff0, "(*)" },
{ 0x10de, 0x0340, 0x0ff0, "(*)" },

/* nvidia sgs */
/* { 0x12d2, 0x0010, 0x0ff0, "" }, */ /* too old to list */

/* via unichrome */
{ 0x1106, 0x3108, 0xffff, "" },
{ 0x1106, 0x3118, 0xffff, "" },
{ 0x1106, 0x3122, 0xffff, "" },
{ 0x1106, 0x7205, 0xffff, "" },

/* ati r128 */
{ 0x1002, 0x4c45, 0xffff, "" },
{ 0x1002, 0x4c46, 0xffff, "" },
{ 0x1002, 0x4d46, 0xffff, "" },
{ 0x1002, 0x4d4c, 0xffff, "" },
{ 0x1002, 0x5000, 0xff00, "" },
{ 0x1002, 0x5200, 0xff00, "" },
{ 0x1002, 0x5300, 0xff00, "", { 0x5354 } },
{ 0x1002, 0x5440, 0xfff0, "" },
{ 0x1002, 0x5450, 0xfff0, "" },

{ 0x1002, 0x4242, 0xffff, "" },
{ 0x1002, 0x4336, 0xffff, "" },
{ 0x1002, 0x4437, 0xffff, "" },
{ 0x1002, 0x7c37, 0xffff, "" },
{ 0x1002, 0x4c57, 0xffff, "" },
{ 0x1002, 0x4c58, 0xffff, "" },
{ 0x1002, 0x4c59, 0xffff, "" },
{ 0x1002, 0x4c5A, 0xffff, "" },
{ 0x1002, 0x4c5B, 0xffff, "" },
{ 0x1002, 0x4c5C, 0xffff, "" },
{ 0x1002, 0x4c5D, 0xffff, "" },
{ 0x1002, 0x4c5E, 0xffff, "" },
{ 0x1002, 0x4c5F, 0xffff, "" },
{ 0x1002, 0x4c60, 0xfff0, "" },
{ 0x1002, 0x4c70, 0xfff0, "" },
{ 0x1002, 0x4c80, 0xfff0, "" },
{ 0x1002, 0x4c90, 0xfff0, "" },
{ 0x1002, 0x4cA0, 0xfff0, "" },
{ 0x1002, 0x4cB0, 0xfff0, "" },
{ 0x1002, 0x4cC0, 0xfff0, "" },
{ 0x1002, 0x4cD0, 0xfff0, "" },
{ 0x1002, 0x4cE0, 0xfff0, "" },
{ 0x1002, 0x4cF0, 0xfff0, "" },
{ 0x1002, 0x5460, 0xfff0, "" },
{ 0x1002, 0x3100, 0xff00, "" },
{ 0x1002, 0x3E00, 0xff00, "" },
{ 0x1002, 0x4100, 0xff00, "", { 0x4167, 0x4147, 0x4158, 0x4154, 0x4155, 0x4156, 0x4157, 0x4165, 0x4166, 0x4164, 0x4171, 0x4170, 0x4172, 0x4168 } },
{ 0x1002, 0x4900, 0xff00, "" },
{ 0x1002, 0x4a00, 0xff00, "" },
{ 0x1002, 0x4e00, 0xff00, "", { 0x4e67, 0x4e47, 0x4e4b, 0x4e66, 0x4e65, 0x4e64, 0x4e69, 0x4e68, 0x4e6a } },
{ 0x1002, 0x5100, 0xff00, "", { 0x516d } },
{ 0x1002, 0x5500, 0xff00, "" },
{ 0x1002, 0x5800, 0xff00, "" },
{ 0x1002, 0x5900, 0xff00, "", { 0x5941, 0x5940 } },
{ 0x1002, 0x5b00, 0xff00, "" },
{ 0x1002, 0x5c00, 0xff00, "" },
{ 0x1002, 0x5d00, 0xff00, "" },

/* ati rage */
{ 0x1002, 0x4354, 0xffff, "" },
{ 0x1002, 0x4554, 0xffff, "" },
{ 0x1002, 0x4742, 0xffff, "" },
{ 0x1002, 0x4744, 0xffff, "" },
{ 0x1002, 0x4749, 0xffff, "" },
{ 0x1002, 0x4750, 0xffff, "" },
{ 0x1002, 0x4751, 0xffff, "" },
{ 0x1002, 0x4754, 0xffff, "" },
{ 0x1002, 0x4755, 0xffff, "" },
{ 0x1002, 0x4756, 0xffff, "" },
{ 0x1002, 0x4757, 0xffff, "" },
{ 0x1002, 0x4758, 0xffff, "" },
{ 0x1002, 0x475A, 0xffff, "" },
{ 0x1002, 0x4C42, 0xffff, "" },
{ 0x1002, 0x4C44, 0xffff, "" },
{ 0x1002, 0x4C47, 0xffff, "" },
{ 0x1002, 0x4C49, 0xffff, "" },
{ 0x1002, 0x4C50, 0xffff, "" },
{ 0x1002, 0x5654, 0xffff, "" },
{ 0x1002, 0x5655, 0xffff, "" },
{ 0x1002, 0x5656, 0xffff, "" },

/* g400 */
{ 0x102b, 0x0525, 0xffff, "" },
{ 0x102b, 0x0520, 0xffff, "" },
{ 0x102b, 0x0521, 0xffff, "" },
{ 0x102b, 0x051a, 0xffff, "" },
{ 0x102b, 0x051e, 0xffff, "" },
{ 0x102b, 0x2527, 0xffff, "" },
{ 0x102b, 0x1000, 0xffff, "" },
{ 0x102b, 0x1001, 0xffff, "" },

/* matrox millenium */
{ 0x102b, 0x0519, 0xffff, "" },
{ 0x102b, 0x051b, 0xffff, "" },
{ 0x102b, 0x051f, 0xffff, "" },

/* 3dfx */
{ 0x121a, 0x0003, 0xffff, "(*)" },
{ 0x121a, 0x0005, 0xffff, "" },
{ 0x121a, 0x0009, 0xffff, "" },

/* Permedia pm2 */
{ 0x3d3d, 0x0007, 0xffff, "(*)" },
{ 0x3d3d, 0x0009, 0xffff, "(*)" },

/* s3 savage */
#if 0
/* 1.9.20 */
{ 0x5333, 0x8811, 0xffff, "" },
{ 0x5333, 0x8903, 0xffff, "" },
{ 0x5333, 0x8904, 0xffff, "" },
{ 0x5333, 0x8a13, 0xffff, "" },
{ 0x5333, 0x5631, 0xffff, "" },
{ 0x5333, 0x883d, 0xffff, "" },
{ 0x5333, 0x8a01, 0xffff, "" },
{ 0x5333, 0x8a10, 0xffff, "" },
{ 0x5333, 0x8c00, 0xffff, "" },
{ 0x5333, 0x8c01, 0xffff, "" },
{ 0x5333, 0x8c02, 0xffff, "" },
{ 0x5333, 0x8c03, 0xffff, "" },
{ 0x5333, 0x8a20, 0xffff, "" },
{ 0x5333, 0x8a21, 0xffff, "" },
{ 0x5333, 0x8a22, 0xffff, "" },
{ 0x5333, 0x8a23, 0xffff, "" },
{ 0x5333, 0x9102, 0xffff, "" },
{ 0x5333, 0x8c10, 0xffff, "" },
{ 0x5333, 0x8c11, 0xffff, "" },
{ 0x5333, 0x8c12, 0xffff, "" },
{ 0x5333, 0x8c13, 0xffff, "" },
{ 0x5333, 0x8d01, 0xffff, "" },
{ 0x5333, 0x8d02, 0xffff, "" },
{ 0x5333, 0x8d03, 0xffff, "" },
{ 0x5333, 0x8d04, 0xffff, "" },
{ 0x5333, 0x8c22, 0xffff, "" },
{ 0x5333, 0x8c24, 0xffff, "" },
{ 0x5333, 0x8c26, 0xffff, "" },
{ 0x5333, 0x8c2a, 0xffff, "" },
{ 0x5333, 0x8c2b, 0xffff, "" },
{ 0x5333, 0x8c2c, 0xffff, "" },
{ 0x5333, 0x8c2d, 0xffff, "" },
{ 0x5333, 0x8c2e, 0xffff, "" },
{ 0x5333, 0x8c2f, 0xffff, "" },
#else
/* 1.9.17 patched */
{ 0x5333, 0x8811, 0xffff, "" },
{ 0x5333, 0x8903, 0xffff, "" },
{ 0x5333, 0x8904, 0xffff, "" },
{ 0x5333, 0x8a13, 0xffff, "" },
{ 0x5333, 0x5631, 0xffff, "" },
{ 0x5333, 0x883d, 0xffff, "" },
{ 0x5333, 0x8a01, 0xffff, "" },
{ 0x5333, 0x8a10, 0xffff, "" },
{ 0x5333, 0x8c00, 0xffff, "" },
{ 0x5333, 0x8c01, 0xffff, "" },
{ 0x5333, 0x8c02, 0xffff, "" },
{ 0x5333, 0x8c03, 0xffff, "" },
{ 0x5333, 0x8a20, 0xffff, "" },
{ 0x5333, 0x8a21, 0xffff, "" },
{ 0x5333, 0x8a22, 0xffff, "" },
{ 0x5333, 0x8a23, 0xffff, "" },
{ 0x5333, 0x8c10, 0xffff, "" },
{ 0x5333, 0x8c11, 0xffff, "" },
{ 0x5333, 0x8c12, 0xffff, "" },
{ 0x5333, 0x8c13, 0xffff, "" },
{ 0x5333, 0x9102, 0xffff, "" },
#endif

/* trident */
{ 0x1023, 0x8400, 0xff00, "" },
{ 0x1023, 0x8500, 0xff00, "" },
{ 0x1023, 0x8600, 0xff00, "" },
{ 0x1023, 0x8700, 0xff00, "" },
{ 0x1023, 0x8800, 0xff00, "" },
{ 0x1023, 0x8900, 0xff00, "" },
{ 0x1023, 0x8A00, 0xff00, "" },
{ 0x1023, 0x8B00, 0xff00, "" },
{ 0x1023, 0x8C00, 0xff00, "" },
{ 0x1023, 0x8D00, 0xff00, "" },
{ 0x1023, 0x8E00, 0xff00, "" },
{ 0x1023, 0x8F00, 0xff00, "" },
{ 0x1023, 0x9000, 0xff00, "" },
{ 0x1023, 0x9100, 0xff00, "" },
{ 0x1023, 0x9200, 0xff00, "" },
{ 0x1023, 0x9300, 0xff00, "" },
{ 0x1023, 0x9400, 0xff00, "" },
{ 0x1023, 0x9500, 0xff00, "" },
{ 0x1023, 0x9600, 0xff00, "" },
{ 0x1023, 0x9700, 0xff00, "" },
{ 0x1023, 0x9800, 0xff00, "" },
{ 0x1023, 0x9900, 0xfff0, "" },
{ 0x1023, 0x9910, 0xfff0, "" },
{ 0x1023, 0x9920, 0xfff0, "" },
{ 0x1023, 0x9930, 0xffff, "" },

/* rendition */
{ 0x1163, 0x2000, 0xffff, "(*)" },

/* sis */
/* { 0x1039, 0x0001, 0xffff, "" }, */ /* ? PCI Bridge ? */
{ 0x1039, 0x0002, 0xffff, "" },
{ 0x1039, 0x0205, 0xffff, "" },
{ 0x1039, 0x0215, 0xffff, "" },
{ 0x1039, 0x0225, 0xffff, "" },
{ 0x1039, 0x0200, 0xffff, "" },
{ 0x1039, 0x0300, 0xffff, "" },
{ 0x1039, 0x0310, 0xffff, "" },
{ 0x1039, 0x0315, 0xffff, "" },
{ 0x1039, 0x0325, 0xffff, "" },
{ 0x1039, 0x5300, 0xffff, "" },
{ 0x1039, 0x5315, 0xffff, "" },
{ 0x1039, 0x6300, 0xffff, "" },
{ 0x1039, 0x6306, 0xffff, "" },
{ 0x1039, 0x6325, 0xffff, "" },
{ 0x1039, 0x6326, 0xffff, "" },
{ 0x1039, 0x7300, 0xffff, "" },

/* cirrus laguna */
{ 0x1013, 0x00d0, 0xffff, "" },
{ 0x1013, 0x00d4, 0xffff, "" },
{ 0x1013, 0x00d6, 0xffff, "" },

/* apm */
{ 0x1142, 0x6424, 0xffff, "(*)" },
{ 0x1142, 0x643d, 0xffff, "(*)" },
