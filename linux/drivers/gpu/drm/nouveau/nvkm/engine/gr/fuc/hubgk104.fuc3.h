https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: MIT */
static uint32_t gk104_grhub_data[] = {
/* 0x0000: hub_mmio_list_head */
	0x00000300,
/* 0x0004: hub_mmio_list_tail */
	0x00000304,
/* 0x0008: gpc_count */
	0x00000000,
/* 0x000c: rop_count */
	0x00000000,
/* 0x0010: cmd_queue */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
/* 0x0058: ctx_current */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
/* 0x0100: chan_data */
/* 0x0100: chan_mmio_count */
	0x00000000,
/* 0x0104: chan_mmio_address */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
/* 0x0200: xfer_data */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
/* 0x0300: hub_mmio_list_base */
	0x0417e91c,
};

static uint32_t gk104_grhub_code[] = {
	0x039b0ef5,
/* 0x0004: queue_put */
	0x9800d898,
	0x86f001d9,
	0x0489b808,
	0xf00c1bf4,
	0x21f502f7,
	0x00f8037e,
/* 0x001c: queue_put_next */
	0xb60798c4,
	0x8dbb0384,
	0x0880b600,
	0x80008e80,
	0x90b6018f,
	0x0f94f001,
	0xf801d980,
/* 0x0039: queue_get */
	0x0131f400,
	0x9800d898,
	0x89b801d9,
	0x210bf404,
	0xb60789c4,
	0x9dbb0394,
	0x0890b600,
	0x98009e98,
	0x80b6019f,
	0x0f84f001,
	0xf400d880,
/* 0x0066: queue_get_done */
	0x00f80132,
/* 0x0068: nv_rd32 */
	0xf002ecb9,
	0x07f11fc9,
	0x03f0ca00,
	0x000cd001,
/* 0x007a: nv_rd32_wait */
	0xc7f104bd,
	0xc3f0ca00,
	0x00cccf01,
	0xf41fccc8,
	0xa7f0f31b,
	0x1021f506,
	0x00f7f101,
	0x01f3f0cb,
	0xf800ffcf,
/* 0x009d: nv_wr32 */
	0x0007f100,
	0x0103f0cc,
	0xbd000fd0,
	0x02ecb904,
	0xf01fc9f0,
	0x07f11ec9,
	0x03f0ca00,
	0x000cd001,
/* 0x00be: nv_wr32_wait */
	0xc7f104bd,
	0xc3f0ca00,
	0x00cccf01,
	0xf41fccc8,
	0x00f8f31b,
/* 0x00d0: wait_donez */
	0x99f094bd,
	0x0007f100,
	0x0203f00f,
	0xbd0009d0,
	0x0007f104,
	0x0203f006,
	0xbd000ad0,
/* 0x00ed: wait_donez_ne */
	0x0087f104,
	0x0183f000,
	0xff0088cf,
	0x1bf4888a,
	0xf094bdf3,
	0x07f10099,
	0x03f01700,
	0x0009d002,
	0x00f804bd,
/* 0x0110: wait_doneo */
	0x99f094bd,
	0x0007f100,
	0x0203f00f,
	0xbd0009d0,
	0x0007f104,
	0x0203f006,
	0xbd000ad0,
/* 0x012d: wait_doneo_e */
	0x0087f104,
	0x0183f000,
	0xff0088cf,
	0x0bf4888a,
	0xf094bdf3,
	0x07f10099,
	0x03f01700,
	0x0009d002,
	0x00f804bd,
/* 0x0150: mmctx_size */
/* 0x0152: nv_mmctx_size_loop */
	0xe89894bd,
	0x1a85b600,
	0xb60180b6,
	0x98bb0284,
	0x04e0b600,
	0xf404efb8,
	0x9fb9eb1b,
/* 0x016f: mmctx_xfer */
	0xbd00f802,
	0x0199f094,
	0x0f0007f1,
	0xd00203f0,
	0x04bd0009,
	0xbbfd94bd,
	0x120bf405,
	0xc40007f1,
	0xd00103f0,
	0x04bd000b,
/* 0x0197: mmctx_base_disabled */
	0xfd0099f0,
	0x0bf405ee,
	0x0007f11e,
	0x0103f0c6,
	0xbd000ed0,
	0x0007f104,
	0x0103f0c7,
	0xbd000fd0,
	0x0199f004,
/* 0x01b8: mmctx_multi_disabled */
	0xb600abc8,
	0xb9f010b4,
	0x01aec80c,
	0xfd11e4b6,
	0x07f105be,
	0x03f0c500,
	0x000bd001,
/* 0x01d6: mmctx_exec_loop */
/* 0x01d6: mmctx_wait_free */
	0xe7f104bd,
	0xe3f0c500,
	0x00eecf01,
	0xf41fe4f0,
	0xce98f30b,
	0x05e9fd00,
	0xc80007f1,
	0xd00103f0,
	0x04bd000e,
	0xb804c0b6,
	0x1bf404cd,
	0x02abc8d8,
/* 0x0207: mmctx_fini_wait */
	0xf11f1bf4,
	0xf0c500b7,
	0xbbcf01b3,
	0x1fb4f000,
	0xf410b4b0,
	0xa7f0f01b,
	0xd021f405,
/* 0x0223: mmctx_stop */
	0xc82b0ef4,
	0xb4b600ab,
	0x0cb9f010,
	0xf112b9f0,
	0xf0c50007,
	0x0bd00103,
/* 0x023b: mmctx_stop_wait */
	0xf104bd00,
	0xf0c500b7,
	0xbbcf01b3,
	0x12bbc800,
/* 0x024b: mmctx_done */
	0xbdf31bf4,
	0x0199f094,
	0x170007f1,
	0xd00203f0,
	0x04bd0009,
/* 0x025e: strand_wait */
	0xa0f900f8,
	0xf402a7f0,
	0xa0fcd021,
/* 0x026a: strand_pre */
	0x97f000f8,
	0xfc07f10c,
	0x0203f04a,
	0xbd0009d0,
	0x5e21f504,
/* 0x027f: strand_post */
	0xf000f802,
	0x07f10d97,
	0x03f04afc,
	0x0009d002,
	0x21f504bd,
	0x00f8025e,
/* 0x0294: strand_set */
	0xf10fc7f0,
	0xf04ffc07,
	0x0cd00203,
	0xf004bd00,
	0x07f10bc7,
	0x03f04afc,
	0x000cd002,
	0x07f104bd,
	0x03f04ffc,
	0x000ed002,
	0xc7f004bd,
	0xfc07f10a,
	0x0203f04a,
	0xbd000cd0,
	0x5e21f504,
/* 0x02d3: strand_ctx_init */
	0xbd00f802,
	0x0399f094,
	0x0f0007f1,
	0xd00203f0,
	0x04bd0009,
	0x026a21f5,
	0xf503e7f0,
	0xbd029421,
	0xfc07f1c4,
	0x0203f047,
	0xbd000cd0,
	0x01c7f004,
	0x4afc07f1,
	0xd00203f0,
	0x04bd000c,
	0x025e21f5,
	0xf1010c92,
	0xf046fc07,
	0x0cd00203,
	0xf004bd00,
	0x07f102c7,
	0x03f04afc,
	0x000cd002,
	0x21f504bd,
	0x21f5025e,
	0x87f1027f,
	0x83f04200,
	0x0097f102,
	0x0293f020,
	0x950099cf,
/* 0x034a: ctx_init_strand_loop */
	0x8ed008fe,
	0x408ed000,
	0xb6808acf,
	0xa0b606a5,
	0x00eabb01,
	0xb60480b6,
	0x1bf40192,
	0x08e4b6e8,
	0xbdf2efbc,
	0x0399f094,
	0x170007f1,
	0xd00203f0,
	0x04bd0009,
/* 0x037e: error */
	0x07f100f8,
	0x03f00500,
	0x000fd002,
	0xf7f004bd,
	0x0007f101,
	0x0303f007,
	0xbd000fd0,
/* 0x039b: init */
	0xbd00f804,
	0x0007fe04,
	0x420017f1,
	0xcf0013f0,
	0x11e70011,
	0x14b60109,
	0x0014fe08,
	0xf10227f0,
	0xf0120007,
	0x02d00003,
	0xf104bd00,
	0xfe06c817,
	0x24bd0010,
	0x070007f1,
	0xd00003f0,
	0x04bd0002,
	0x200327f1,
	0x010007f1,
	0xd00103f0,
	0x04bd0002,
	0x200427f1,
	0x010407f1,
	0xd00103f0,
	0x04bd0002,
	0x200b27f1,
	0x010807f1,
	0xd00103f0,
	0x04bd0002,
	0x200c27f1,
	0x011c07f1,
	0xd00103f0,
	0x04bd0002,
	0xf1010392,
	0xf0090007,
	0x03d00303,
	0xf104bd00,
	0xf0870427,
	0x07f10023,
	0x03f00400,
	0x0002d000,
	0x27f004bd,
	0x0007f104,
	0x0003f003,
	0xbd0002d0,
	0x1031f404,
	0x9604e7f1,
	0xf440e3f0,
	0xfeb96821,
	0x90f1c702,
	0xf0030180,
	0x0f801ff4,
	0x0117f002,
	0xb6041fbb,
	0x07f10112,
	0x03f00300,
	0x0001d001,
	0x07f104bd,
	0x03f00400,
	0x0001d001,
	0x17f104bd,
	0xf7f00100,
	0xdb21f502,
	0xed21f507,
	0x10f7f007,
	0x083a21f5,
	0x98000e98,
	0x21f5010f,
	0x14950150,
	0x0007f108,
	0x0103f0c0,
	0xbd0004d0,
	0x0007f104,
	0x0103f0c1,
	0xbd0004d0,
	0x0030b704,
	0x001fbb13,
	0xf102f5b6,
	0xf0d30007,
	0x0fd00103,
	0xb604bd00,
	0x10b60815,
	0x0814b601,
	0xf5021fb9,
	0xbb02d321,
	0x0398001f,
	0x0047f102,
	0x5043f020,
/* 0x04f4: init_gpc */
	0x08044ea0,
	0xf4021fb9,
	0x4ea09d21,
	0xf4bd010c,
	0xa09d21f4,
	0xf401044e,
	0x4ea09d21,
	0xf7f00100,
	0x9d21f402,
	0x08004ea0,
/* 0x051c: init_gpc_wait */
	0xc86821f4,
	0x0bf41fff,
	0x044ea0fa,
	0x6821f408,
	0xb7001fbb,
	0xb6800040,
	0x1bf40132,
	0x00f7f0be,
	0x083a21f5,
	0xf500f7f0,
	0xf107db21,
	0xf0010007,
	0x01d00203,
	0xbd04bd00,
	0x1f19f014,
	0x080007f1,
	0xd00203f0,
	0x04bd0001,
/* 0x0564: wait */
	0xf40028f4,
/* 0x056a: main */
	0xd7f00031,
	0x3921f410,
	0xb1f401f4,
	0xf54001e4,
	0xbd00e91b,
	0x0499f094,
	0x0f0007f1,
	0xd00203f0,
	0x04bd0009,
	0xc00017f1,
	0xcf0213f0,
	0x27f10011,
	0x23f0c100,
	0x0022cf02,
	0xf51f13c8,
	0xc800890b,
	0x0bf41f23,
	0xb920f962,
	0x94bd0212,
	0xf10799f0,
	0xf00f0007,
	0x09d00203,
	0xf404bd00,
	0x31f40132,
	0x0621f502,
	0xf094bd0a,
	0x07f10799,
	0x03f01700,
	0x0009d002,
	0x20fc04bd,
	0x99f094bd,
	0x0007f106,
	0x0203f00f,
	0xbd0009d0,
	0x0131f404,
	0x0a0621f5,
	0x99f094bd,
	0x0007f106,
	0x0203f017,
	0xbd0009d0,
	0x330ef404,
/* 0x060c: chsw_prev_no_next */
	0x12b920f9,
	0x0132f402,
	0xf50232f4,
	0xfc0a0621,
	0x0007f120,
	0x0203f0c0,
	0xbd0002d0,
	0x130ef404,
/* 0x062c: chsw_no_prev */
	0xf41f23c8,
	0x31f40d0b,
	0x0232f401,
	0x0a0621f5,
/* 0x063c: chsw_done */
	0xf10127f0,
	0xf0c30007,
	0x02d00203,
	0xbd04bd00,
	0x0499f094,
	0x170007f1,
	0xd00203f0,
	0x04bd0009,
	0xff0e0ef5,
/* 0x0660: main_not_ctx_switch */
	0xf401e4b0,
	0xf2b90d1b,
	0x9e21f502,
	0x460ef409,
/* 0x0670: main_not_ctx_chan */
	0xf402e4b0,
	0x94bd321b,
	0xf10799f0,
	0xf00f0007,
	0x09d00203,
	0xf404bd00,
	0x32f40132,
	0x0621f502,
	0xf094bd0a,
	0x07f10799,
	0x03f01700,
	0x0009d002,
	0x0ef404bd,
/* 0x06a5: main_not_ctx_save */
	0x10ef9411,
	0xf501f5f0,
	0xf5037e21,
/* 0x06b3: main_done */
	0xbdfebb0e,
	0x1f29f024,
	0x080007f1,
	0xd00203f0,
	0x04bd0002,
	0xfea60ef5,
/* 0x06c8: ih */
	0x80f900f9,
	0xf90188fe,
	0xf990f980,
	0xf9b0f9a0,
	0xf9e0f9d0,
	0xf104bdf0,
	0xf00200a7,
	0xaacf00a3,
	0x04abc400,
	0xf0300bf4,
	0xe7f110d7,
	0xe3f01a00,
	0x00eecf00,
	0x1900f7f1,
	0xcf00f3f0,
	0x21f400ff,
	0x00b0b704,
	0x01e7f004,
	0x1d0007f1,
	0xd00003f0,
	0x04bd000e,
/* 0x071c: ih_no_fifo */
	0x0100abe4,
	0xf00d0bf4,
	0xe7f110d7,
	0x21f44001,
/* 0x072d: ih_no_ctxsw */
	0x00abe404,
	0x6c0bf404,
	0x0708e7f1,
	0xf440e3f0,
	0xffb96821,
	0x0007f102,
	0x0203f004,
	0xbd000fd0,
	0x04e7f104,
	0x40e3f007,
	0xb96821f4,
	0x07f102ff,
	0x03f00300,
	0x000fd002,
	0xfec704bd,
	0x02ee9450,
	0x0700f7f1,
	0xbb40f3f0,
	0x21f400ef,
	0x0007f168,
	0x0203f002,
	0xbd000fd0,
	0x03f7f004,
	0x037e21f5,
	0x0100b7f1,
	0xf102bfb9,
	0xf00144e7,
	0x21f440e3,
/* 0x079d: ih_no_fwmthd */
	0x04b7f19d,
	0xffb0bd05,
	0x0bf4b4ab,
	0x0007f10f,
	0x0303f007,
	0xbd000bd0,
/* 0x07b5: ih_no_other */
	0x0007f104,
	0x0003f001,
	0xbd000ad0,
	0xfcf0fc04,
	0xfcd0fce0,
	0xfca0fcb0,
	0xfe80fc90,
	0x80fc0088,
	0x32f400fc,
/* 0x07db: ctx_4170s */
	0xf001f800,
	0xffb910f5,
	0x70e7f102,
	0x40e3f041,
	0xf89d21f4,
/* 0x07ed: ctx_4170w */
	0x70e7f100,
	0x40e3f041,
	0xb96821f4,
	0xf4f002ff,
	0xf01bf410,
/* 0x0802: ctx_redswitch */
	0xe7f100f8,
	0xe5f00200,
	0x20e5f040,
	0xf110e5f0,
	0xf0850007,
	0x0ed00103,
	0xf004bd00,
/* 0x081e: ctx_redswitch_delay */
	0xf2b608f7,
	0xfd1bf401,
	0x0400e5f1,
	0x0100e5f1,
	0x850007f1,
	0xd00103f0,
	0x04bd000e,
/* 0x083a: ctx_86c */
	0x07f100f8,
	0x03f01b00,
	0x000fd002,
	0xffb904bd,
	0x14e7f102,
	0x40e3f08a,
	0xb99d21f4,
	0xe7f102ff,
	0xe3f0a86c,
	0x9d21f441,
/* 0x0862: ctx_mem */
	0x07f100f8,
	0x03f08400,
	0x000fd002,
/* 0x086e: ctx_mem_wait */
	0xf7f104bd,
	0xf3f08400,
	0x00ffcf02,
	0xf405fffd,
	0x00f8f31b,
/* 0x0880: ctx_load */
	0x99f094bd,
	0x0007f105,
	0x0203f00f,
	0xbd0009d0,
	0x0ca7f004,
	0xbdd021f4,
	0x0007f1f4,
	0x0203f089,
	0xbd000fd0,
	0x0007f104,
	0x0203f0c1,
	0xbd0002d0,
	0x0007f104,
	0x0203f083,
	0xbd0002d0,
	0x07f7f004,
	0x086221f5,
	0xc00007f1,
	0xd00203f0,
	0x04bd0002,
	0xf0000bfe,
	0x24b61f2a,
	0x0220b604,
	0x99f094bd,
	0x0007f108,
	0x0203f00f,
	0xbd0009d0,
	0x0007f104,
	0x0203f081,
	0xbd0002d0,
	0x0027f104,
	0x0023f100,
	0x0225f080,
	0x880007f1,
	0xd00203f0,
	0x04bd0002,
	0xf11017f0,
	0xf0020027,
	0x12fa0223,
	0xbd03f805,
	0x0899f094,
	0x170007f1,
	0xd00203f0,
	0x04bd0009,
	0xb6810198,
	0x02981814,
	0x0825b680,
	0x800512fd,
	0x94bd1601,
	0xf10999f0,
	0xf00f0007,
	0x09d00203,
	0xf104bd00,
	0xf0810007,
	0x01d00203,
	0xf004bd00,
	0x07f10127,
	0x03f08800,
	0x0002d002,
	0x17f104bd,
	0x13f00100,
	0x0501fa06,
	0x94bd03f8,
	0xf10999f0,
	0xf0170007,
	0x09d00203,
	0xbd04bd00,
	0x0599f094,
	0x170007f1,
	0xd00203f0,
	0x04bd0009,
/* 0x099e: ctx_chan */
	0x21f500f8,
	0xa7f00880,
	0xd021f40c,
	0xf505f7f0,
	0xf8086221,
/* 0x09b1: ctx_mmio_exec */
	0x41039800,
	0x810007f1,
	0xd00203f0,
	0x04bd0003,
/* 0x09c2: ctx_mmio_loop */
	0x34c434bd,
	0x0f1bf4ff,
	0x020057f1,
	0xfa0653f0,
	0x03f80535,
/* 0x09d4: ctx_mmio_pull */
	0x98804e98,
	0x21f4814f,
	0x0830b69d,
	0xf40112b6,
/* 0x09e6: ctx_mmio_done */
	0x0398df1b,
	0x0007f116,
	0x0203f081,
	0xbd0003d0,
	0x40008004,
	0x010017f1,
	0xfa0613f0,
	0x03f80601,
/* 0x0a06: ctx_xfer */
	0xe7f000f8,
	0x0007f104,
	0x0303f002,
	0xbd000ed0,
/* 0x0a15: ctx_xfer_idle */
	0x00e7f104,
	0x03e3f000,
	0xf100eecf,
	0xf42000e4,
	0x11f4f21b,
	0x0d02f406,
/* 0x0a2c: ctx_xfer_pre */
	0xf510f7f0,
	0xf4083a21,
/* 0x0a36: ctx_xfer_pre_load */
	0xf7f01c11,
	0xdb21f502,
	0xed21f507,
	0x0221f507,
	0xf5f4bd08,
	0xf507db21,
/* 0x0a4f: ctx_xfer_exec */
	0x98088021,
	0x24bd1601,
	0x050007f1,
	0xd00103f0,
	0x04bd0002,
	0xf1021fb9,
	0xf0a500e7,
	0x21f441e3,
	0x01fcf09d,
	0xb6022cf0,
	0xf2fd0124,
	0x02ffb905,
	0xa504e7f1,
	0xf441e3f0,
	0x21f59d21,
	0x24bd026a,
	0x47fc07f1,
	0xd00203f0,
	0x04bd0002,
	0xb6012cf0,
	0x07f10320,
	0x03f04afc,
	0x0002d002,
	0xacf004bd,
	0x06a5f001,
	0x9800b7f0,
	0x0d98000c,
	0x00e7f001,
	0x016f21f5,
	0xf508a7f0,
	0xf5011021,
	0xf4025e21,
	0xa7f01301,
	0xd021f40c,
	0xf505f7f0,
	0xf4086221,
/* 0x0ade: ctx_xfer_post */
	0xf7f02e02,
	0xdb21f502,
	0xf5f4bd07,
	0xf5083a21,
	0xf5027f21,
	0xbd07ed21,
	0xdb21f5f4,
	0x1011f407,
	0xfd400198,
	0x0bf40511,
	0xb121f507,
/* 0x0b09: ctx_xfer_no_post_mmio */
/* 0x0b09: ctx_xfer_done */
	0x0000f809,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
};
