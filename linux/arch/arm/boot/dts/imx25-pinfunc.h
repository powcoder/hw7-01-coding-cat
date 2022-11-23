https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright 2013 Eukréa Electromatique <denis@eukrea.com>
 * Based on imx35-pinfunc.h in the same directory Which is:
 * Copyright 2013 Freescale Semiconductor, Inc.
 */

#ifndef __DTS_IMX25_PINFUNC_H
#define __DTS_IMX25_PINFUNC_H

/*
 * The pin function ID is a tuple of
 * <mux_reg conf_reg input_reg mux_mode input_val>
 */

#define MX25_PAD_A10__A10			0x008 0x000 0x000 0x00 0x000
#define MX25_PAD_A10__GPIO_4_0			0x008 0x000 0x000 0x05 0x000

#define MX25_PAD_A13__A13			0x00c 0x22C 0x000 0x00 0x000
#define MX25_PAD_A13__GPIO_4_1			0x00c 0x22C 0x000 0x05 0x000
#define MX25_PAD_A13__LCDC_CLS			0x00c 0x22C 0x000 0x07 0x000

#define MX25_PAD_A14__A14			0x010 0x230 0x000 0x00 0x000
#define MX25_PAD_A14__GPIO_2_0			0x010 0x230 0x000 0x05 0x000
#define MX25_PAD_A14__SIM1_CLK1			0x010 0x230 0x000 0x06 0x000
#define MX25_PAD_A14__LCDC_SPL			0x010 0x230 0x000 0x07 0x000

#define MX25_PAD_A15__A15			0x014 0x234 0x000 0x00 0x000
#define MX25_PAD_A15__GPIO_2_1			0x014 0x234 0x000 0x05 0x000
#define MX25_PAD_A15__SIM1_RST1			0x014 0x234 0x000 0x06 0x000
#define MX25_PAD_A15__LCDC_PS			0x014 0x234 0x000 0x07 0x000

#define MX25_PAD_A16__A16			0x018 0x000 0x000 0x00 0x000
#define MX25_PAD_A16__GPIO_2_2			0x018 0x000 0x000 0x05 0x000
#define MX25_PAD_A16__SIM1_VEN1			0x018 0x000 0x000 0x06 0x000
#define MX25_PAD_A16__LCDC_REV			0x018 0x000 0x000 0x07 0x000

#define MX25_PAD_A17__A17			0x01c 0x238 0x000 0x00 0x000
#define MX25_PAD_A17__GPIO_2_3			0x01c 0x238 0x000 0x05 0x000
#define MX25_PAD_A17__SIM1_TX			0x01c 0x238 0x554 0x06 0x000
#define MX25_PAD_A17__FEC_TX_ERR		0x01c 0x238 0x000 0x07 0x000

#define MX25_PAD_A18__A18			0x020 0x23c 0x000 0x00 0x000
#define MX25_PAD_A18__GPIO_2_4			0x020 0x23c 0x000 0x05 0x000
#define MX25_PAD_A18__SIM1_PD1			0x020 0x23c 0x550 0x06 0x000
#define MX25_PAD_A18__FEC_COL			0x020 0x23c 0x504 0x07 0x000

#define MX25_PAD_A19__A19			0x024 0x240 0x000 0x00 0x000
#define MX25_PAD_A19__GPIO_2_5			0x024 0x240 0x000 0x05 0x000
#define MX25_PAD_A19__SIM1_RX1			0x024 0x240 0x54c 0x06 0x000
#define MX25_PAD_A19__FEC_RX_ERR		0x024 0x240 0x518 0x07 0x000

#define MX25_PAD_A20__A20			0x028 0x244 0x000 0x00 0x000
#define MX25_PAD_A20__GPIO_2_6			0x028 0x244 0x000 0x05 0x000
#define MX25_PAD_A20__SIM2_CLK1			0x028 0x244 0x000 0x06 0x000
#define MX25_PAD_A20__FEC_RDATA2		0x028 0x244 0x50c 0x07 0x000

#define MX25_PAD_A21__A21			0x02c 0x248 0x000 0x00 0x000
#define MX25_PAD_A21__GPIO_2_7			0x02c 0x248 0x000 0x05 0x000
#define MX25_PAD_A21__SIM2_RST1			0x02c 0x248 0x000 0x06 0x000
#define MX25_PAD_A21__FEC_RDATA3		0x02c 0x248 0x510 0x07 0x000

#define MX25_PAD_A22__A22			0x030 0x000 0x000 0x00 0x000
#define MX25_PAD_A22__GPIO_2_8			0x030 0x000 0x000 0x05 0x000
#define MX25_PAD_A22__SIM2_VEN1			0x030 0x000 0x000 0x06 0x000
#define MX25_PAD_A22__FEC_TDATA2		0x030 0x000 0x000 0x07 0x000

#define MX25_PAD_A23__A23			0x034 0x24c 0x000 0x00 0x000
#define MX25_PAD_A23__GPIO_2_9			0x034 0x24c 0x000 0x05 0x000
#define MX25_PAD_A23__SIM2_TX1			0x034 0x24c 0x560 0x06 0x000
#define MX25_PAD_A23__FEC_TDATA3		0x034 0x24c 0x000 0x07 0x000

#define MX25_PAD_A24__A24			0x038 0x250 0x000 0x00 0x000
#define MX25_PAD_A24__GPIO_2_10			0x038 0x250 0x000 0x05 0x000
#define MX25_PAD_A24__SIM2_PD1			0x038 0x250 0x55c 0x06 0x000
#define MX25_PAD_A24__FEC_RX_CLK		0x038 0x250 0x514 0x07 0x000

#define MX25_PAD_A25__A25			0x03c 0x254 0x000 0x00 0x000
#define MX25_PAD_A25__GPIO_2_11			0x03c 0x254 0x000 0x05 0x000
#define MX25_PAD_A25__FEC_CRS			0x03c 0x254 0x508 0x07 0x000

#define MX25_PAD_EB0__EB0			0x040 0x258 0x000 0x00 0x000
#define MX25_PAD_EB0__AUD4_TXD			0x040 0x258 0x464 0x04 0x000
#define MX25_PAD_EB0__GPIO_2_12			0x040 0x258 0x000 0x05 0x000
#define MX25_PAD_EB0__CSPI3_SS0			0x040 0x258 0x4bc 0x06 0x000

#define MX25_PAD_EB1__EB1			0x044 0x25c 0x000 0x00 0x000
#define MX25_PAD_EB1__AUD4_RXD			0x044 0x25c 0x460 0x04 0x000
#define MX25_PAD_EB1__GPIO_2_13			0x044 0x25c 0x000 0x05 0x000
#define MX25_PAD_EB1__CSPI3_SS1			0x044 0x25c 0x4c0 0x06 0x000

#define MX25_PAD_OE__OE				0x048 0x260 0x000 0x00 0x000
#define MX25_PAD_OE__AUD4_TXC			0x048 0x260 0x000 0x04 0x000
#define MX25_PAD_OE__GPIO_2_14			0x048 0x260 0x000 0x05 0x000

#define MX25_PAD_CS0__CS0			0x04c 0x000 0x000 0x00 0x000
#define MX25_PAD_CS0__GPIO_4_2			0x04c 0x000 0x000 0x05 0x000

#define MX25_PAD_CS1__CS1			0x050 0x000 0x000 0x00 0x000
#define MX25_PAD_CS1__NF_CE3			0x050 0x000 0x000 0x01 0x000
#define MX25_PAD_CS1__GPIO_4_3			0x050 0x000 0x000 0x05 0x000

#define MX25_PAD_CS4__CS4			0x054 0x264 0x000 0x00 0x000
#define MX25_PAD_CS4__NF_CE1			0x054 0x264 0x000 0x01 0x000
#define MX25_PAD_CS4__UART5_CTS			0x054 0x264 0x000 0x03 0x000
#define MX25_PAD_CS4__GPIO_3_20			0x054 0x264 0x000 0x05 0x000
#define MX25_PAD_CS4__CSPI3_MOSI		0x054 0x264 0x4b8 0x06 0x000

#define MX25_PAD_CS5__CS5			0x058 0x268 0x000 0x00 0x000
#define MX25_PAD_CS5__NF_CE2			0x058 0x268 0x000 0x01 0x000
#define MX25_PAD_CS5__UART5_RTS			0x058 0x268 0x574 0x03 0x000
#define MX25_PAD_CS5__GPIO_3_21			0x058 0x268 0x000 0x05 0x000
#define MX25_PAD_CS5__CSPI3_MISO		0x058 0x268 0x4b4 0x06 0x000

#define MX25_PAD_NF_CE0__NF_CE0			0x05c 0x26c 0x000 0x00 0x000
#define MX25_PAD_NF_CE0__CSPI1_SS3		0x05c 0x26c 0x490 0x01 0x000
#define MX25_PAD_NF_CE0__GPIO_3_22		0x05c 0x26c 0x000 0x05 0x000

#define MX25_PAD_ECB__ECB			0x060 0x270 0x000 0x00 0x000
#define MX25_PAD_ECB__UART5_TXD			0x060 0x270 0x000 0x03 0x000
#define MX25_PAD_ECB__GPIO_3_23			0x060 0x270 0x000 0x05 0x000
#define MX25_PAD_ECB__CSPI3_SCLK		0x060 0x270 0x4ac 0x06 0x000

#define MX25_PAD_LBA__LBA			0x064 0x274 0x000 0x00 0x000
#define MX25_PAD_LBA__UART5_RXD			0x064 0x274 0x578 0x03 0x000
#define MX25_PAD_LBA__GPIO_3_24			0x064 0x274 0x000 0x05 0x000
#define MX25_PAD_LBA__CSPI3_RDY			0x064 0x274 0x4b0 0x06 0x000

#define MX25_PAD_BCLK__BCLK			0x068 0x000 0x000 0x00 0x000
#define MX25_PAD_BCLK__GPIO_4_4			0x068 0x000 0x000 0x05 0x000

#define MX25_PAD_RW__RW				0x06c 0x278 0x000 0x00 0x000
#define MX25_PAD_RW__AUD4_TXFS			0x06c 0x278 0x474 0x04 0x000
#define MX25_PAD_RW__GPIO_3_25			0x06c 0x278 0x000 0x05 0x000

#define MX25_PAD_NFWE_B__NFWE_B			0x070 0x000 0x000 0x00 0x000
#define MX25_PAD_NFWE_B__GPIO_3_26		0x070 0x000 0x000 0x05 0x000

#define MX25_PAD_NFRE_B__NFRE_B			0x074 0x000 0x000 0x00 0x000
#define MX25_PAD_NFRE_B__GPIO_3_27		0x074 0x000 0x000 0x05 0x000

#define MX25_PAD_NFALE__NFALE			0x078 0x000 0x000 0x00 0x000
#define MX25_PAD_NFALE__GPIO_3_28		0x078 0x000 0x000 0x05 0x000

#define MX25_PAD_NFCLE__NFCLE			0x07c 0x000 0x000 0x00 0x000
#define MX25_PAD_NFCLE__GPIO_3_29		0x07c 0x000 0x000 0x05 0x000

#define MX25_PAD_NFWP_B__NFWP_B			0x080 0x000 0x000 0x00 0x000
#define MX25_PAD_NFWP_B__GPIO_3_30		0x080 0x000 0x000 0x05 0x000

#define MX25_PAD_NFRB__NFRB			0x084 0x27c 0x000 0x00 0x000
#define MX25_PAD_NFRB__GPIO_3_31		0x084 0x27c 0x000 0x05 0x000

#define MX25_PAD_D15__D15			0x088 0x280 0x000 0x00 0x000
#define MX25_PAD_D15__LD16			0x088 0x280 0x000 0x01 0x000
#define MX25_PAD_D15__GPIO_4_5			0x088 0x280 0x000 0x05 0x000
#define MX25_PAD_D15__ESDHC1_DAT7		0x088 0x280 0x4d8 0x06 0x000

#define MX25_PAD_D14__D14			0x08c 0x284 0x000 0x00 0x000
#define MX25_PAD_D14__LD17			0x08c 0x284 0x000 0x01 0x000
#define MX25_PAD_D14__GPIO_4_6			0x08c 0x284 0x000 0x05 0x000
#define MX25_PAD_D14__ESDHC1_DAT6		0x08c 0x284 0x4d4 0x06 0x000

#define MX25_PAD_D13__D13			0x090 0x288 0x000 0x00 0x000
#define MX25_PAD_D13__LD18			0x090 0x288 0x000 0x01 0x000
#define MX25_PAD_D13__GPIO_4_7			0x090 0x288 0x000 0x05 0x000
#define MX25_PAD_D13__ESDHC1_DAT5		0x090 0x288 0x4d0 0x06 0x000

#define MX25_PAD_D12__D12			0x094 0x28c 0x000 0x00 0x000
#define MX25_PAD_D12__GPIO_4_8			0x094 0x28c 0x000 0x05 0x000
#define MX25_PAD_D12__ESDHC1_DAT4		0x094 0x28c 0x4cc 0x06 0x000

#define MX25_PAD_D11__D11			0x098 0x290 0x000 0x00 0x000
#define MX25_PAD_D11__GPIO_4_9			0x098 0x290 0x000 0x05 0x000
#define MX25_PAD_D11__USBOTG_PWR		0x098 0x290 0x000 0x06 0x000

#define MX25_PAD_D10__D10			0x09c 0x294 0x000 0x00 0x000
#define MX25_PAD_D10__GPIO_4_10			0x09c 0x294 0x000 0x05 0x000
#define MX25_PAD_D10__USBOTG_OC			0x09c 0x294 0x57c 0x06 0x000

#define MX25_PAD_D9__D9				0x0a0 0x298 0x000 0x00 0x000
#define MX25_PAD_D9__GPIO_4_11			0x0a0 0x298 0x000 0x05 0x000
#define MX25_PAD_D9__USBH2_PWR			0x0a0 0x298 0x000 0x06 0x000

#define MX25_PAD_D8__D8				0x0a4 0x29c 0x000 0x00 0x000
#define MX25_PAD_D8__GPIO_4_12			0x0a4 0x29c 0x000 0x05 0x000
#define MX25_PAD_D8__USBH2_OC			0x0a4 0x29c 0x580 0x06 0x000

#define MX25_PAD_D7__D7				0x0a8 0x2a0 0x000 0x00 0x000
#define MX25_PAD_D7__GPIO_4_13			0x0a8 0x2a0 0x000 0x05 0x000

#define MX25_PAD_D6__D6				0x0ac 0x2a4 0x000 0x00 0x000
#define MX25_PAD_D6__GPIO_4_14			0x0ac 0x2a4 0x000 0x05 0x000

#define MX25_PAD_D5__D5				0x0b0 0x2a8 0x000 0x00 0x000
#define MX25_PAD_D5__GPIO_4_15			0x0b0 0x2a8 0x000 0x05 0x000

#define MX25_PAD_D4__D4				0x0b4 0x2ac 0x000 0x00 0x000
#define MX25_PAD_D4__GPIO_4_16			0x0b4 0x2ac 0x000 0x05 0x000

#define MX25_PAD_D3__D3				0x0b8 0x2b0 0x000 0x00 0x000
#define MX25_PAD_D3__GPIO_4_17			0x0b8 0x2b0 0x000 0x05 0x000

#define MX25_PAD_D2__D2				0x0bc 0x2b4 0x000 0x00 0x000
#define MX25_PAD_D2__GPIO_4_18			0x0bc 0x2b4 0x000 0x05 0x000

#define MX25_PAD_D1__D1				0x0c0 0x2b8 0x000 0x00 0x000
#define MX25_PAD_D1__GPIO_4_19			0x0c0 0x2b8 0x000 0x05 0x000

#define MX25_PAD_D0__D0				0x0c4 0x2bc 0x000 0x00 0x000
#define MX25_PAD_D0__GPIO_4_20			0x0c4 0x2bc 0x000 0x05 0x000

#define MX25_PAD_LD0__LD0			0x0c8 0x2c0 0x000 0x00 0x000
#define MX25_PAD_LD0__CSI_D0			0x0c8 0x2c0 0x488 0x02 0x000
#define MX25_PAD_LD0__GPIO_2_15			0x0c8 0x2c0 0x000 0x05 0x000

#define MX25_PAD_LD1__LD1			0x0cc 0x2c4 0x000 0x00 0x000
#define MX25_PAD_LD1__CSI_D1			0x0cc 0x2c4 0x48c 0x02 0x000
#define MX25_PAD_LD1__GPIO_2_16			0x0cc 0x2c4 0x000 0x05 0x000

#define MX25_PAD_LD2__LD2			0x0d0 0x2c8 0x000 0x00 0x000
#define MX25_PAD_LD2__GPIO_2_17			0x0d0 0x2c8 0x000 0x05 0x000

#define MX25_PAD_LD3__LD3			0x0d4 0x2cc 0x000 0x00 0x000
#define MX25_PAD_LD3__GPIO_2_18			0x0d4 0x2cc 0x000 0x05 0x000

#define MX25_PAD_LD4__LD4			0x0d8 0x2d0 0x000 0x00 0x000
#define MX25_PAD_LD4__GPIO_2_19			0x0d8 0x2d0 0x000 0x05 0x000

#define MX25_PAD_LD5__LD5			0x0dc 0x2d4 0x000 0x00 0x000
#define MX25_PAD_LD5__GPIO_1_19			0x0dc 0x2d4 0x000 0x05 0x000

#define MX25_PAD_LD6__LD6			0x0e0 0x2d8 0x000 0x00 0x000
#define MX25_PAD_LD6__GPIO_1_20			0x0e0 0x2d8 0x000 0x05 0x000

#define MX25_PAD_LD7__LD7			0x0e4 0x2dc 0x000 0x00 0x000
#define MX25_PAD_LD7__GPIO_1_21			0x0e4 0x2dc 0x000 0x05 0x000

#define MX25_PAD_LD8__LD8			0x0e8 0x2e0 0x000 0x00 0x000
#define MX25_PAD_LD8__UART4_RXD			0x0e8 0x2e0 0x570 0x02 0x000
#define MX25_PAD_LD8__FEC_TX_ERR		0x0e8 0x2e0 0x000 0x05 0x000
/* SION must be set; see the comment for MX25_PAD_SD1_CMD__ESDHC1_CMD. */
#define MX25_PAD_LD8__ESDHC2_CMD		0x0e8 0x2e0 0x4e0 0x16 0x000

#define MX25_PAD_LD9__LD9			0x0ec 0x2e4 0x000 0x00 0x000
#define MX25_PAD_LD9__UART4_TXD			0x0ec 0x2e4 0x000 0x02 0x000
#define MX25_PAD_LD9__FEC_COL			0x0ec 0x2e4 0x504 0x05 0x001
#define MX25_PAD_LD9__ESDHC2_CLK		0x0ec 0x2e4 0x4dc 0x06 0x000

#define MX25_PAD_LD10__LD10			0x0f0 0x2e8 0x000 0x00 0x000
#define MX25_PAD_LD10__UART4_RTS		0x0f0 0x2e8 0x56c 0x02 0x000
#define MX25_PAD_LD10__FEC_RX_ERR		0x0f0 0x2e8 0x518 0x05 0x001

#define MX25_PAD_LD11__LD11			0x0f4 0x2ec 0x000 0x00 0x000
#define MX25_PAD_LD11__UART4_CTS		0x0f4 0x2ec 0x000 0x02 0x000
#define MX25_PAD_LD11__FEC_RDATA2		0x0f4 0x2ec 0x50c 0x05 0x001
#define MX25_PAD_LD11__ESDHC2_DAT1		0x0f4 0x2ec 0x4e8 0x06 0x000

#define MX25_PAD_LD12__LD12			0x0f8 0x2f0 0x000 0x00 0x000
#define MX25_PAD_LD12__CSPI2_MOSI		0x0f8 0x2f0 0x4a0 0x02 0x000
#define MX25_PAD_LD12__KPP_ROW6			0x0f8 0x2f0 0x544 0x04 0x000
#define MX25_PAD_LD12__FEC_RDATA3		0x0f8 0x2f0 0x510 0x05 0x001

#define MX25_PAD_LD13__LD13			0x0fc 0x2f4 0x000 0x00 0x000
#define MX25_PAD_LD13__CSPI2_MISO		0x0fc 0x2f4 0x49c 0x02 0x000
#define MX25_PAD_LD13__KPP_ROW7			0x0fc 0x2f4 0x548 0x04 0x000
#define MX25_PAD_LD13__FEC_TDATA2		0x0fc 0x2f4 0x000 0x05 0x000

#define MX25_PAD_LD14__LD14			0x100 0x2f8 0x000 0x00 0x000
#define MX25_PAD_LD14__CSPI2_SCLK		0x100 0x2f8 0x494 0x02 0x000
#define MX25_PAD_LD14__FEC_TDATA3		0x100 0x2f8 0x000 0x05 0x000

#define MX25_PAD_LD15__LD15			0x104 0x2fc 0x000 0x00 0x000
#define MX25_PAD_LD15__CSPI2_RDY		0x104 0x2fc 0x498 0x02 0x000
#define MX25_PAD_LD15__FEC_RX_CLK		0x104 0x2fc 0x514 0x05 0x001

#define MX25_PAD_HSYNC__HSYNC			0x108 0x300 0x000 0x00 0x000
#define MX25_PAD_HSYNC__GPIO_1_22		0x108 0x300 0x000 0x05 0x000

#define MX25_PAD_VSYNC__VSYNC			0x10c 0x304 0x000 0x00 0x000
#define MX25_PAD_VSYNC__GPIO_1_23		0x10c 0x304 0x000 0x05 0x000

#define MX25_PAD_LSCLK__LSCLK			0x110 0x308 0x000 0x00 0x000
#define MX25_PAD_LSCLK__GPIO_1_24		0x110 0x308 0x000 0x05 0x000

#define MX25_PAD_OE_ACD__OE_ACD			0x114 0x30c 0x000 0x00 0x000
#define MX25_PAD_OE_ACD__CSPI2_SS0		0x114 0x30c 0x4a4 0x02 0x000
#define MX25_PAD_OE_ACD__GPIO_1_25		0x114 0x30c 0x000 0x05 0x000

#define MX25_PAD_CONTRAST__CONTRAST		0x118 0x310 0x000 0x00 0x000
#define MX25_PAD_CONTRAST__GPT4_CAPIN1		0x118 0x310 0x000 0x01 0x000
#define MX25_PAD_CONTRAST__CSPI2_SS1		0x118 0x310 0x4a8 0x02 0x000
#define MX25_PAD_CONTRAST__PWM4_PWMO		0x118 0x310 0x000 0x04 0x000
#define MX25_PAD_CONTRAST__FEC_CRS		0x118 0x310 0x508 0x05 0x001
#define MX25_PAD_CONTRAST__USBH2_PWR		0x118 0x310 0x000 0x06 0x000

#define MX25_PAD_PWM__PWM			0x11c 0x314 0x000 0x00 0x000
#define MX25_PAD_PWM__GPIO_1_26			0x11c 0x314 0x000 0x05 0x000
#define MX25_PAD_PWM__USBH2_OC			0x11c 0x314 0x580 0x06 0x001

#define MX25_PAD_CSI_D2__CSI_D2			0x120 0x318 0x000 0x00 0x000
#define MX25_PAD_CSI_D2__UART5_RXD		0x120 0x318 0x578 0x01 0x001
#define MX25_PAD_CSI_D2__SIM1_CLK0		0x120 0x318 0x000 0x04 0x000
#define MX25_PAD_CSI_D2__GPIO_1_27		0x120 0x318 0x000 0x05 0x000
#define MX25_PAD_CSI_D2__CSPI3_MOSI		0x120 0x318 0x4b8 0x07 0x001

#define MX25_PAD_CSI_D3__CSI_D3			0x124 0x31c 0x000 0x00 0x000
#define MX25_PAD_CSI_D3__UART5_TXD		0x124 0x31c 0x000 0x01 0x000
#define MX25_PAD_CSI_D3__SIM1_RST0		0x124 0x31c 0x000 0x04 0x000
#define MX25_PAD_CSI_D3__GPIO_1_28		0x124 0x31c 0x000 0x05 0x000
#define MX25_PAD_CSI_D3__CSPI3_MISO		0x124 0x31c 0x4b4 0x07 0x001

#define MX25_PAD_CSI_D4__CSI_D4			0x128 0x320 0x000 0x00 0x000
#define MX25_PAD_CSI_D4__UART5_RTS		0x128 0x320 0x574 0x01 0x001
#define MX25_PAD_CSI_D4__SIM1_VEN0		0x128 0x320 0x000 0x04 0x000
#define MX25_PAD_CSI_D4__GPIO_1_29		0x128 0x320 0x000 0x05 0x000
#define MX25_PAD_CSI_D4__CSPI3_SCLK		0x128 0x320 0x4ac 0x07 0x001

#define MX25_PAD_CSI_D5__CSI_D5			0x12c 0x324 0x000 0x00 0x000
#define MX25_PAD_CSI_D5__UART5_CTS		0x12c 0x324 0x000 0x01 0x000
#define MX25_PAD_CSI_D5__SIM1_TX0		0x12c 0x324 0x000 0x04 0x000
#define MX25_PAD_CSI_D5__GPIO_1_30		0x12c 0x324 0x000 0x05 0x000
#define MX25_PAD_CSI_D5__CSPI3_RDY		0x12c 0x324 0x4b0 0x07 0x001

#define MX25_PAD_CSI_D6__CSI_D6			0x130 0x328 0x000 0x00 0x000
/* SION must be set; see the comment for MX25_PAD_SD1_CMD__ESDHC1_CMD. */
#define MX25_PAD_CSI_D6__ESDHC2_CMD		0x130 0x328 0x4e0 0x12 0x001
#define MX25_PAD_CSI_D6__SIM1_PD0		0x130 0x328 0x000 0x04 0x000
#define MX25_PAD_CSI_D6__GPIO_1_31		0x130 0x328 0x000 0x05 0x000
#define MX25_PAD_CSI_D6__CSPI3_SS0		0x130 0x328 0x4bc 0x07 0x001

#define MX25_PAD_CSI_D7__CSI_D7			0x134 0x32c 0x000 0x00 0x000
#define MX25_PAD_CSI_D7__ESDHC2_CLK		0x134 0x32C 0x4dc 0x02 0x001
#define MX25_PAD_CSI_D7__GPIO_1_6		0x134 0x32c 0x000 0x05 0x000
#define MX25_PAD_CSI_D7__CSPI3_SS1		0x134 0x32c 0x4c0 0x07 0x001

#define MX25_PAD_CSI_D8__CSI_D8			0x138 0x330 0x000 0x00 0x000
#define MX25_PAD_CSI_D8__AUD6_RXC		0x138 0x330 0x000 0x02 0x000
#define MX25_PAD_CSI_D8__GPIO_1_7		0x138 0x330 0x000 0x05 0x000
#define MX25_PAD_CSI_D8__CSPI3_SS2		0x138 0x330 0x4c4 0x07 0x000

#define MX25_PAD_CSI_D9__CSI_D9			0x13c 0x334 0x000 0x00 0x000
#define MX25_PAD_CSI_D9__AUD6_RXFS		0x13c 0x334 0x000 0x02 0x000
#define MX25_PAD_CSI_D9__GPIO_4_21		0x13c 0x334 0x000 0x05 0x000
#define MX25_PAD_CSI_D9__CSPI3_SS3		0x13c 0x334 0x4c8 0x07 0x000

#define MX25_PAD_CSI_MCLK__CSI_MCLK		0x140 0x338 0x000 0x00 0x000
#define MX25_PAD_CSI_MCLK__AUD6_TXD		0x140 0x338 0x000 0x01 0x000
#define MX25_PAD_CSI_MCLK__ESDHC2_DAT0		0x140 0x338 0x4e4 0x02 0x001
#define MX25_PAD_CSI_MCLK__GPIO_1_8		0x140 0x338 0x000 0x05 0x000

#define MX25_PAD_CSI_VSYNC__CSI_VSYNC		0x144 0x33c 0x000 0x00 0x000
#define MX25_PAD_CSI_VSYNC__AUD6_RXD		0x144 0x33c 0x000 0x01 0x000
#define MX25_PAD_CSI_VSYNC__ESDHC2_DAT1		0x144 0x33c 0x4e8 0x02 0x001
#define MX25_PAD_CSI_VSYNC__GPIO_1_9		0x144 0x33c 0x000 0x05 0x000

#define MX25_PAD_CSI_HSYNC__CSI_HSYNC		0x148 0x340 0x000 0x00 0x000
#define MX25_PAD_CSI_HSYNC__AUD6_TXC		0x148 0x340 0x000 0x01 0x000
#define MX25_PAD_CSI_HSYNC__ESDHC2_DAT2		0x148 0x340 0x4ec 0x02 0x001
#define MX25_PAD_CSI_HSYNC__GPIO_1_10		0x148 0x340 0x000 0x05 0x000

#define MX25_PAD_CSI_PIXCLK__CSI_PIXCLK		0x14c 0x344 0x000 0x00 0x000
#define MX25_PAD_CSI_PIXCLK__AUD6_TXFS		0x14c 0x344 0x000 0x01 0x000
#define MX25_PAD_CSI_PIXCLK__ESDHC2_DAT3	0x14c 0x344 0x4f0 0x02 0x001
#define MX25_PAD_CSI_PIXCLK__GPIO_1_11		0x14c 0x344 0x000 0x05 0x000

#define MX25_PAD_I2C1_CLK__I2C1_CLK		0x150 0x348 0x000 0x00 0x000
#define MX25_PAD_I2C1_CLK__GPIO_1_12		0x150 0x348 0x000 0x05 0x000

#define MX25_PAD_I2C1_DAT__I2C1_DAT		0x154 0x34c 0x000 0x00 0x000
#define MX25_PAD_I2C1_DAT__GPIO_1_13		0x154 0x34c 0x000 0x05 0x000

#define MX25_PAD_CSPI1_MOSI__CSPI1_MOSI		0x158 0x350 0x000 0x00 0x000
#define MX25_PAD_CSPI1_MOSI__UART3_RXD		0x158 0x350 0x568 0x02 0x000
#define MX25_PAD_CSPI1_MOSI__GPIO_1_14		0x158 0x350 0x000 0x05 0x000

#define MX25_PAD_CSPI1_MISO__CSPI1_MISO		0x15c 0x354 0x000 0x00 0x000
#define MX25_PAD_CSPI1_MISO__UART3_TXD		0x15c 0x354 0x000 0x02 0x000
#define MX25_PAD_CSPI1_MISO__GPIO_1_15		0x15c 0x354 0x000 0x05 0x000

#define MX25_PAD_CSPI1_SS0__CSPI1_SS0		0x160 0x358 0x000 0x00 0x000
#define MX25_PAD_CSPI1_SS0__PWM2_PWMO		0x160 0x358 0x000 0x02 0x000
#define MX25_PAD_CSPI1_SS0__GPIO_1_16		0x160 0x358 0x000 0x05 0x000

#define MX25_PAD_CSPI1_SS1__CSPI1_SS1		0x164 0x35c 0x000 0x00 0x000
#define MX25_PAD_CSPI1_SS1__I2C3_DAT		0x164 0x35C 0x528 0x01 0x001
#define MX25_PAD_CSPI1_SS1__UART3_RTS		0x164 0x35c 0x000 0x02 0x000
#define MX25_PAD_CSPI1_SS1__GPIO_1_17		0x164 0x35c 0x000 0x05 0x000

#define MX25_PAD_CSPI1_SCLK__CSPI1_SCLK		0x168 0x360 0x000 0x00 0x000
#define MX25_PAD_CSPI1_SCLK__UART3_CTS		0x168 0x360 0x000 0x02 0x000
#define MX25_PAD_CSPI1_SCLK__GPIO_1_18		0x168 0x360 0x000 0x05 0x000

#define MX25_PAD_CSPI1_RDY__CSPI1_RDY		0x16c 0x364 0x000 0x00 0x000
#define MX25_PAD_CSPI1_RDY__GPIO_2_22		0x16c 0x364 0x000 0x05 0x000

#define MX25_PAD_UART1_RXD__UART1_RXD		0x170 0x368 0x000 0x00 0x000
#define MX25_PAD_UART1_RXD__UART2_DTR		0x170 0x368 0x000 0x03 0x000
#define MX25_PAD_UART1_RXD__GPIO_4_22		0x170 0x368 0x000 0x05 0x000

#define MX25_PAD_UART1_TXD__UART1_TXD		0x174 0x36c 0x000 0x00 0x000
#define MX25_PAD_UART1_TXD__UART2_DSR		0x174 0x36c 0x000 0x03 0x000
#define MX25_PAD_UART1_TXD__GPIO_4_23		0x174 0x36c 0x000 0x05 0x000

#define MX25_PAD_UART1_RTS__UART1_RTS		0x178 0x370 0x000 0x00 0x000
#define MX25_PAD_UART1_RTS__CSI_D0		0x178 0x370 0x488 0x01 0x001
#define MX25_PAD_UART1_RTS__GPT3_CAPIN1		0x178 0x370 0x000 0x02 0x000
#define MX25_PAD_UART1_RTS__UART2_DCD		0x178 0x370 0x000 0x03 0x000
#define MX25_PAD_UART1_RTS__GPIO_4_24		0x178 0x370 0x000 0x05 0x000

#define MX25_PAD_UART1_CTS__UART1_CTS		0x17c 0x374 0x000 0x00 0x000
#define MX25_PAD_UART1_CTS__CSI_D1		0x17c 0x374 0x48c 0x01 0x001
#define MX25_PAD_UART1_CTS__UART2_RI		0x17c 0x374 0x000 0x03 0x001
#define MX25_PAD_UART1_CTS__GPIO_4_25		0x17c 0x374 0x000 0x05 0x000

#define MX25_PAD_UART2_RXD__UART2_RXD		0x180 0x378 0x000 0x00 0x000
#define MX25_PAD_UART2_RXD__GPIO_4_26		0x180 0x378 0x000 0x05 0x000

#define MX25_PAD_UART2_TXD__UART2_TXD		0x184 0x37c 0x000 0x00 0x000
#define MX25_PAD_UART2_TXD__GPIO_4_27		0x184 0x37c 0x000 0x05 0x000

#define MX25_PAD_UART2_RTS__UART2_RTS		0x188 0x380 0x000 0x00 0x000
#define MX25_PAD_UART2_RTS__FEC_COL		0x188 0x380 0x504 0x02 0x002
#define MX25_PAD_UART2_RTS__GPT1_CAPIN1		0x188 0x380 0x000 0x03 0x000
#define MX25_PAD_UART2_RTS__GPIO_4_28		0x188 0x380 0x000 0x05 0x000
#define MX25_PAD_UART2_RTS__CSPI2_SS3		0x188 0x380 0x000 0x06 0x000

#define MX25_PAD_UART2_CTS__UART2_CTS		0x18c 0x384 0x000 0x00 0x000
#define MX25_PAD_UART2_CTS__FEC_RX_ERR		0x18c 0x384 0x518 0x02 0x002
#define MX25_PAD_UART2_CTS__GPIO_4_29		0x18c 0x384 0x000 0x05 0x000
#define MX25_PAD_UART2_CTS__CSPI3_SS3		0x18c 0x384 0x4c8 0x06 0x001

/*
 * Removing the SION bit from MX25_PAD_*__ESDHCn_CMD breaks detecting an SD
 * card. According to the i.MX25 reference manual (e.g. Figure 23-2 in IMX25RM
 * Rev. 2 from 01/2011) this pin is bidirectional. So it seems to be a silicon
 * bug that configuring the ESDHCn_CMD function doesn't enable the input path
 * for this pin.
 * This might have side effects for other hardware units that are connected to
 * that pin and use the respective function as input.
 */
#define MX25_PAD_SD1_CMD__ESDHC1_CMD		0x190 0x388 0x000 0x10 0x000
#define MX25_PAD_SD1_CMD__CSPI2_MOSI		0x190 0x388 0x4a0 0x01 0x001
#define MX25_PAD_SD1_CMD__FEC_RDATA2		0x190 0x388 0x50c 0x02 0x002
#define MX25_PAD_SD1_CMD__GPIO_2_23		0x190 0x388 0x000 0x05 0x000

#define MX25_PAD_SD1_CLK__ESDHC1_CLK		0x194 0x38c 0x000 0x00 0x000
#define MX25_PAD_SD1_CLK__CSPI2_MISO		0x194 0x38c 0x49c 0x01 0x001
#define MX25_PAD_SD1_CLK__FEC_RDATA3		0x194 0x38c 0x510 0x02 0x002
#define MX25_PAD_SD1_CLK__GPIO_2_24		0x194 0x38c 0x000 0x05 0x000

#define MX25_PAD_SD1_DATA0__ESDHC1_DAT0		0x198 0x390 0x000 0x00 0x000
#define MX25_PAD_SD1_DATA0__CSPI2_SCLK		0x198 0x390 0x494 0x01 0x001
#define MX25_PAD_SD1_DATA0__GPIO_2_25		0x198 0x390 0x000 0x05 0x000

#define MX25_PAD_SD1_DATA1__ESDHC1_DAT1		0x19c 0x394 0x000 0x00 0x000
#define MX25_PAD_SD1_DATA1__CSPI2_RDY		0x19c 0x394 0x498 0x01 0x001
#define MX25_PAD_SD1_DATA1__AUD7_RXD		0x19c 0x394 0x478 0x03 0x000
#define MX25_PAD_SD1_DATA1__GPIO_2_26		0x19c 0x394 0x000 0x05 0x000

#define MX25_PAD_SD1_DATA2__ESDHC1_DAT2		0x1a0 0x398 0x000 0x00 0x000
#define MX25_PAD_SD1_DATA2__CSPI2_SS0		0x1a0 0x398 0x4a4 0x01 0x001
#define MX25_PAD_SD1_DATA2__FEC_RX_CLK		0x1a0 0x398 0x514 0x02 0x002
#define MX25_PAD_SD1_DATA2__GPIO_2_27		0x1a0 0x398 0x000 0x05 0x000

#define MX25_PAD_SD1_DATA3__ESDHC1_DAT3		0x1a4 0x39c 0x000 0x00 0x000
#define MX25_PAD_SD1_DATA3__CSPI2_SS1		0x1a4 0x39c 0x4a8 0x01 0x001
#define MX25_PAD_SD1_DATA3__FEC_CRS		0x1a4 0x39c 0x508 0x02 0x002
#define MX25_PAD_SD1_DATA3__GPIO_2_28		0x1a4 0x39c 0x000 0x05 0x000

#define MX25_PAD_KPP_ROW0__KPP_ROW0		0x1a8 0x3a0 0x000 0x00 0x000
#define MX25_PAD_KPP_ROW0__UART3_RXD		0x1a8 0x3a0 0x568 0x01 0x001
#define MX25_PAD_KPP_ROW0__UART1_DTR		0x1a8 0x3a0 0x000 0x04 0x000
#define MX25_PAD_KPP_ROW0__GPIO_2_29		0x1a8 0x3a0 0x000 0x05 0x000

#define MX25_PAD_KPP_ROW1__KPP_ROW1		0x1ac 0x3a4 0x000 0x00 0x000
#define MX25_PAD_KPP_ROW1__UART3_TXD		0x1ac 0x3a4 0x000 0x01 0x000
#define MX25_PAD_KPP_ROW1__UART1_DSR		0x1ac 0x3a4 0x000 0x04 0x000
#define MX25_PAD_KPP_ROW1__GPIO_2_30		0x1ac 0x3a4 0x000 0x05 0x000

#define MX25_PAD_KPP_ROW2__KPP_ROW2		0x1b0 0x3a8 0x000 0x00 0x000
#define MX25_PAD_KPP_ROW2__UART3_RTS		0x1b0 0x3a8 0x000 0x01 0x000
#define MX25_PAD_KPP_ROW2__CSI_D0		0x1b0 0x3a8 0x488 0x03 0x002
#define MX25_PAD_KPP_ROW2__UART1_DCD		0x1b0 0x3a8 0x000 0x04 0x000
#define MX25_PAD_KPP_ROW2__GPIO_2_31		0x1b0 0x3a8 0x000 0x05 0x000

#define MX25_PAD_KPP_ROW3__KPP_ROW3		0x1b4 0x3ac 0x000 0x00 0x000
#define MX25_PAD_KPP_ROW3__UART3_CTS		0x1b4 0x3ac 0x000 0x01 0x000
#define MX25_PAD_KPP_ROW3__CSI_D1		0x1b4 0x3ac 0x48c 0x03 0x002
#define MX25_PAD_KPP_ROW3__UART1_RI		0x1b4 0x3ac 0x000 0x04 0x000
#define MX25_PAD_KPP_ROW3__GPIO_3_0		0x1b4 0x3ac 0x000 0x05 0x000

#define MX25_PAD_KPP_COL0__KPP_COL0		0x1b8 0x3b0 0x000 0x00 0x000
#define MX25_PAD_KPP_COL0__UART4_RXD		0x1b8 0x3b0 0x570 0x01 0x001
#define MX25_PAD_KPP_COL0__AUD5_TXD		0x1b8 0x3b0 0x000 0x02 0x000
#define MX25_PAD_KPP_COL0__GPIO_3_1		0x1b8 0x3b0 0x000 0x05 0x000

#define MX25_PAD_KPP_COL1__KPP_COL1		0x1bc 0x3b4 0x000 0x00 0x000
#define MX25_PAD_KPP_COL1__UART4_TXD		0x1bc 0x3b4 0x000 0x01 0x000
#define MX25_PAD_KPP_COL1__AUD5_RXD		0x1bc 0x3b4 0x000 0x02 0x000
#define MX25_PAD_KPP_COL1__GPIO_3_2		0x1bc 0x3b4 0x000 0x05 0x000

#define MX25_PAD_KPP_COL2__KPP_COL2		0x1c0 0x3b8 0x000 0x00 0x000
#define MX25_PAD_KPP_COL2__UART4_RTS		0x1c0 0x3b8 0x56c 0x01 0x001
#define MX25_PAD_KPP_COL2__AUD5_TXC		0x1c0 0x3b8 0x000 0x02 0x000
#define MX25_PAD_KPP_COL2__GPIO_3_3		0x1c0 0x3b8 0x000 0x05 0x000

#define MX25_PAD_KPP_COL3__KPP_COL3		0x1c4 0x3bc 0x000 0x00 0x000
#define MX25_PAD_KPP_COL3__UART4_CTS		0x1c4 0x3bc 0x000 0x01 0x000
#define MX25_PAD_KPP_COL3__AUD5_TXFS		0x1c4 0x3bc 0x000 0x02 0x000
#define MX25_PAD_KPP_COL3__GPIO_3_4		0x1c4 0x3bc 0x000 0x05 0x000

#define MX25_PAD_FEC_MDC__FEC_MDC		0x1c8 0x3c0 0x000 0x00 0x000
/* SION must be set; see the comment for MX25_PAD_SD1_CMD__ESDHC1_CMD. */
#define MX25_PAD_FEC_MDC__ESDHC2_CMD		0x1c8 0x3c0 0x4e0 0x11 0x002
#define MX25_PAD_FEC_MDC__AUD4_TXD		0x1c8 0x3c0 0x464 0x02 0x001
#define MX25_PAD_FEC_MDC__GPIO_3_5		0x1c8 0x3c0 0x000 0x05 0x000

#define MX25_PAD_FEC_MDIO__FEC_MDIO		0x1cc 0x3c4 0x000 0x00 0x000
#define MX25_PAD_FEC_MDIO__AUD4_RXD		0x1cc 0x3c4 0x460 0x02 0x001
#define MX25_PAD_FEC_MDIO__GPIO_3_6		0x1cc 0x3c4 0x000 0x05 0x000

#define MX25_PAD_FEC_TDATA0__FEC_TDATA0		0x1d0 0x3c8 0x000 0x00 0x000
#define MX25_PAD_FEC_TDATA0__GPIO_3_7		0x1d0 0x3c8 0x000 0x05 0x000

#define MX25_PAD_FEC_TDATA1__FEC_TDATA1		0x1d4 0x3cc 0x000 0x00 0x000
#define MX25_PAD_FEC_TDATA1__AUD4_TXFS		0x1d4 0x3cc 0x474 0x02 0x001
#define MX25_PAD_FEC_TDATA1__GPIO_3_8		0x1d4 0x3cc 0x000 0x05 0x000

#define MX25_PAD_FEC_TX_EN__FEC_TX_EN		0x1d8 0x3d0 0x000 0x00 0x000
#define MX25_PAD_FEC_TX_EN__GPIO_3_9		0x1d8 0x3d0 0x000 0x05 0x000
#define MX25_PAD_FEC_TX_EN__KPP_ROW4		0x1d8 0x3d0 0x53c 0x06 0x000

#define MX25_PAD_FEC_RDATA0__FEC_RDATA0		0x1dc 0x3d4 0x000 0x00 0x000
#define MX25_PAD_FEC_RDATA0__GPIO_3_10		0x1dc 0x3d4 0x000 0x05 0x000
#define MX25_PAD_FEC_RDATA0__KPP_ROW5 		0x1dc 0x3d4 0x540 0x06 0x000

#define MX25_PAD_FEC_RDATA1__FEC_RDATA1		0x1e0 0x3d8 0x000 0x00 0x000
/*
 * According to the i.MX25 Reference manual (IMX25RM, Rev. 2,
 * 01/2011) this is CAN1_TX but that's wrong.
 */
#define MX25_PAD_FEC_RDATA1__CAN2_TX		0x1e0 0x3d8 0x000 0x04 0x000
#define MX25_PAD_FEC_RDATA1__GPIO_3_11		0x1e0 0x3d8 0x000 0x05 0x000

#define MX25_PAD_FEC_RX_DV__FEC_RX_DV		0x1e4 0x3dc 0x000 0x00 0x000
/*
 * According to the i.MX25 Reference manual (IMX25RM, Rev. 2,
 * 01/2011) this is CAN1_RX but that's wrong.
 */
#define MX25_PAD_FEC_RX_DV__CAN2_RX		0x1e4 0x3dc 0x484 0x04 0x000
#define MX25_PAD_FEC_RX_DV__GPIO_3_12		0x1e4 0x3dc 0x000 0x05 0x000

#define MX25_PAD_FEC_TX_CLK__FEC_TX_CLK		0x1e8 0x3e0 0x000 0x00 0x000
#define MX25_PAD_FEC_TX_CLK__GPIO_3_13		0x1e8 0x3e0 0x000 0x05 0x000

#define MX25_PAD_RTCK__RTCK			0x1ec 0x3e4 0x000 0x00 0x000
#define MX25_PAD_RTCK__OWIRE			0x1ec 0x3e4 0x000 0x01 0x000
#define MX25_PAD_RTCK__GPIO_3_14		0x1ec 0x3e4 0x000 0x05 0x000

#define MX25_PAD_TDO__TDO			0x000 0x3e8 0x000 0x00 0x000

#define MX25_PAD_DE_B__DE_B			0x1f0 0x3ec 0x000 0x00 0x000
#define MX25_PAD_DE_B__GPIO_2_20		0x1f0 0x3ec 0x000 0x05 0x000

#define MX25_PAD_GPIO_A__GPIO_A			0x1f4 0x3f0 0x000 0x00 0x000
#define MX25_PAD_GPIO_A__CAN1_TX		0x1f4 0x3f0 0x000 0x06 0x000
#define MX25_PAD_GPIO_A__USBOTG_PWR		0x1f4 0x3f0 0x000 0x02 0x000

#define MX25_PAD_GPIO_B__GPIO_B			0x1f8 0x3f4 0x000 0x00 0x000
#define MX25_PAD_GPIO_B__USBOTG_OC		0x1f8 0x3f4 0x57c 0x02 0x001
#define MX25_PAD_GPIO_B__CAN1_RX		0x1f8 0x3f4 0x480 0x06 0x001

#define MX25_PAD_GPIO_C__GPIO_C			0x1fc 0x3f8 0x000 0x00 0x000
#define MX25_PAD_GPIO_C__PWM4_PWMO		0x1fc 0x3f8 0x000 0x01 0x000
#define MX25_PAD_GPIO_C__I2C2_SCL		0x1fc 0x3f8 0x51c 0x02 0x001
#define MX25_PAD_GPIO_C__KPP_COL4		0x1fc 0x3f8 0x52c 0x03 0x001
#define MX25_PAD_GPIO_C__GPT2_CAPIN1		0x1fc 0x3f8 0x000 0x04 0x000
#define MX25_PAD_GPIO_C__CSPI1_SS2		0x1fc 0x3f8 0x000 0x05 0x000
#define MX25_PAD_GPIO_C__CAN2_TX		0x1fc 0x3f8 0x000 0x06 0x000
#define MX25_PAD_GPIO_C__CSPI2_SS2		0x1fc 0x3f8 0x000 0x07 0x000

#define MX25_PAD_GPIO_D__GPIO_D			0x200 0x3fc 0x000 0x00 0x000
#define MX25_PAD_GPIO_D__I2C2_SDA		0x200 0x3fc 0x520 0x02 0x001
#define MX25_PAD_GPIO_D__CAN2_RX		0x200 0x3fc 0x484 0x06 0x001
#define MX25_PAD_GPIO_D__CSPI3_SS2		0x200 0x3fc 0x4c4 0x07 0x001

#define MX25_PAD_GPIO_E__GPIO_E			0x204 0x400 0x000 0x00 0x000
#define MX25_PAD_GPIO_E__I2C3_CLK		0x204 0x400 0x524 0x01 0x002
#define MX25_PAD_GPIO_E__LD16			0x204 0x400 0x000 0x02 0x000
#define MX25_PAD_GPIO_E__AUD7_TXD		0x204 0x400 0x000 0x04 0x000
#define MX25_PAD_GPIO_E__UART4_RXD		0x204 0x400 0x570 0x06 0x002

#define MX25_PAD_GPIO_F__GPIO_F			0x208 0x404 0x000 0x00 0x000
#define MX25_PAD_GPIO_F__LD17			0x208 0x404 0x000 0x02 0x000
#define MX25_PAD_GPIO_F__AUD7_TXC		0x208 0x404 0x000 0x04 0x000
#define MX25_PAD_GPIO_F__UART4_TXD		0x208 0x404 0x000 0x06 0x000

#define MX25_PAD_EXT_ARMCLK__EXT_ARMCLK		0x20c 0x000 0x000 0x00 0x000
#define MX25_PAD_EXT_ARMCLK__GPIO_3_15		0x20c 0x000 0x000 0x05 0x000

#define MX25_PAD_UPLL_BYPCLK__UPLL_BYPCLK	0x210 0x000 0x000 0x00 0x000
#define MX25_PAD_UPLL_BYPCLK__GPIO_3_16		0x210 0x000 0x000 0x05 0x000

#define MX25_PAD_VSTBY_REQ__VSTBY_REQ		0x214 0x408 0x000 0x00 0x000
#define MX25_PAD_VSTBY_REQ__AUD7_TXFS		0x214 0x408 0x000 0x04 0x000
#define MX25_PAD_VSTBY_REQ__GPIO_3_17		0x214 0x408 0x000 0x05 0x000
#define MX25_PAD_VSTBY_REQ__UART4_RTS		0x214 0x408 0x56c 0x06 0x002

#define MX25_PAD_VSTBY_ACK__VSTBY_ACK		0x218 0x40c 0x000 0x00 0x000
#define MX25_PAD_VSTBY_ACK__CSPI1_SS3		0x218 0x40c 0x490 0x02 0x001
#define MX25_PAD_VSTBY_ACK__GPIO_3_18		0x218 0x40c 0x000 0x05 0x000

#define MX25_PAD_POWER_FAIL__POWER_FAIL		0x21c 0x410 0x000 0x00 0x000
#define MX25_PAD_POWER_FAIL__AUD7_RXD		0x21c 0x410 0x478 0x04 0x001
#define MX25_PAD_POWER_FAIL__GPIO_3_19		0x21c 0x410 0x000 0x05 0x000
#define MX25_PAD_POWER_FAIL__UART4_CTS		0x21c 0x410 0x000 0x06 0x000

#define MX25_PAD_CLKO__CLKO			0x220 0x414 0x000 0x00 0x000
#define MX25_PAD_CLKO__GPIO_2_21		0x220 0x414 0x000 0x05 0x000

#define MX25_PAD_BOOT_MODE0__BOOT_MODE0		0x224 0x000 0x000 0x00 0x000
#define MX25_PAD_BOOT_MODE0__GPIO_4_30		0x224 0x000 0x000 0x05 0x000

#define MX25_PAD_BOOT_MODE1__BOOT_MODE1		0x228 0x000 0x000 0x00 0x000
#define MX25_PAD_BOOT_MODE1__GPIO_4_31		0x228 0x000 0x000 0x05 0x000

/*
 * Compatibility defines for out-of-tree users. You should update if you make
 * use of one of them.
 */
#define MX25_PAD_D15__SDHC1_DAT7		MX25_PAD_D15__ESDHC1_DAT7
#define MX25_PAD_D14__SDHC1_DAT6		MX25_PAD_D14__ESDHC1_DAT6
#define MX25_PAD_D13__SDHC1_DAT5		MX25_PAD_D13__ESDHC1_DAT5
#define MX25_PAD_D12__SDHC1_DAT4		MX25_PAD_D12__ESDHC1_DAT4
#define MX25_PAD_LD8__SDHC2_CMD			MX25_PAD_LD8__ESDHC2_CMD
#define MX25_PAD_LD9__SDHC2_CLK			MX25_PAD_LD9__ESDHC2_CLK
#define MX25_PAD_LD11__SDHC2_DAT1		MX25_PAD_LD11__ESDHC2_DAT1
#define MX25_PAD_CSI_D6__SDHC2_CMD		MX25_PAD_CSI_D6__ESDHC2_CMD
#define MX25_PAD_CSI_D7__SDHC2_DAT_CLK		MX25_PAD_CSI_D7__ESDHC2_CLK
#define MX25_PAD_CSI_MCLK__SDHC2_DAT0		MX25_PAD_CSI_MCLK__ESDHC2_DAT0
#define MX25_PAD_CSI_VSYNC__SDHC2_DAT1		MX25_PAD_CSI_VSYNC__ESDHC2_DAT1
#define MX25_PAD_CSI_HSYNC__SDHC2_DAT2		MX25_PAD_CSI_HSYNC__ESDHC2_DAT2
#define MX25_PAD_CSI_PIXCLK__SDHC2_DAT3		MX25_PAD_CSI_PIXCLK__ESDHC2_DAT3
#define MX25_PAD_SD1_CMD__SD1_CMD		MX25_PAD_SD1_CMD__ESDHC1_CMD
#define MX25_PAD_SD1_CLK__SD1_CLK		MX25_PAD_SD1_CLK__ESDHC1_CLK
#define MX25_PAD_SD1_DATA0__SD1_DATA0		MX25_PAD_SD1_DATA0__ESDHC1_DAT0
#define MX25_PAD_SD1_DATA1__SD1_DATA1		MX25_PAD_SD1_DATA1__ESDHC1_DAT1
#define MX25_PAD_SD1_DATA2__SD1_DATA2		MX25_PAD_SD1_DATA2__ESDHC1_DAT2
#define MX25_PAD_SD1_DATA3__SD1_DATA3		MX25_PAD_SD1_DATA3__ESDHC1_DAT3

#endif /* __DTS_IMX25_PINFUNC_H */
