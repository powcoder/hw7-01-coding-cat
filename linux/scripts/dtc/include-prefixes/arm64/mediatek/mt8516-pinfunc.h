https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2019 MediaTek Inc.
 */
#ifndef __DTS_MT8516_PINFUNC_H
#define __DTS_MT8516_PINFUNC_H

#include <dt-bindings/pinctrl/mt65xx.h>

#define MT8516_PIN_0_EINT0__FUNC_GPIO0 (MTK_PIN_NO(0) | 0)
#define MT8516_PIN_0_EINT0__FUNC_PWM_B (MTK_PIN_NO(0) | 1)
#define MT8516_PIN_0_EINT0__FUNC_I2S2_BCK (MTK_PIN_NO(0) | 3)
#define MT8516_PIN_0_EINT0__FUNC_EXT_TXD0 (MTK_PIN_NO(0) | 4)
#define MT8516_PIN_0_EINT0__FUNC_SQICS (MTK_PIN_NO(0) | 6)
#define MT8516_PIN_0_EINT0__FUNC_DBG_MON_A_6 (MTK_PIN_NO(0) | 7)

#define MT8516_PIN_1_EINT1__FUNC_GPIO1 (MTK_PIN_NO(1) | 0)
#define MT8516_PIN_1_EINT1__FUNC_PWM_C (MTK_PIN_NO(1) | 1)
#define MT8516_PIN_1_EINT1__FUNC_I2S2_DI (MTK_PIN_NO(1) | 3)
#define MT8516_PIN_1_EINT1__FUNC_EXT_TXD1 (MTK_PIN_NO(1) | 4)
#define MT8516_PIN_1_EINT1__FUNC_CONN_MCU_TDO (MTK_PIN_NO(1) | 5)
#define MT8516_PIN_1_EINT1__FUNC_SQISO (MTK_PIN_NO(1) | 6)
#define MT8516_PIN_1_EINT1__FUNC_DBG_MON_A_7 (MTK_PIN_NO(1) | 7)

#define MT8516_PIN_2_EINT2__FUNC_GPIO2 (MTK_PIN_NO(2) | 0)
#define MT8516_PIN_2_EINT2__FUNC_CLKM0 (MTK_PIN_NO(2) | 1)
#define MT8516_PIN_2_EINT2__FUNC_I2S2_LRCK (MTK_PIN_NO(2) | 3)
#define MT8516_PIN_2_EINT2__FUNC_EXT_TXD2 (MTK_PIN_NO(2) | 4)
#define MT8516_PIN_2_EINT2__FUNC_CONN_MCU_DBGACK_N (MTK_PIN_NO(2) | 5)
#define MT8516_PIN_2_EINT2__FUNC_SQISI (MTK_PIN_NO(2) | 6)
#define MT8516_PIN_2_EINT2__FUNC_DBG_MON_A_8 (MTK_PIN_NO(2) | 7)

#define MT8516_PIN_3_EINT3__FUNC_GPIO3 (MTK_PIN_NO(3) | 0)
#define MT8516_PIN_3_EINT3__FUNC_CLKM1 (MTK_PIN_NO(3) | 1)
#define MT8516_PIN_3_EINT3__FUNC_SPI_MI (MTK_PIN_NO(3) | 3)
#define MT8516_PIN_3_EINT3__FUNC_EXT_TXD3 (MTK_PIN_NO(3) | 4)
#define MT8516_PIN_3_EINT3__FUNC_CONN_MCU_DBGI_N (MTK_PIN_NO(3) | 5)
#define MT8516_PIN_3_EINT3__FUNC_SQIWP (MTK_PIN_NO(3) | 6)
#define MT8516_PIN_3_EINT3__FUNC_DBG_MON_A_9 (MTK_PIN_NO(3) | 7)

#define MT8516_PIN_4_EINT4__FUNC_GPIO4 (MTK_PIN_NO(4) | 0)
#define MT8516_PIN_4_EINT4__FUNC_CLKM2 (MTK_PIN_NO(4) | 1)
#define MT8516_PIN_4_EINT4__FUNC_SPI_MO (MTK_PIN_NO(4) | 3)
#define MT8516_PIN_4_EINT4__FUNC_EXT_TXC (MTK_PIN_NO(4) | 4)
#define MT8516_PIN_4_EINT4__FUNC_CONN_MCU_TCK (MTK_PIN_NO(4) | 5)
#define MT8516_PIN_4_EINT4__FUNC_CONN_MCU_AICE_JCKC (MTK_PIN_NO(4) | 6)
#define MT8516_PIN_4_EINT4__FUNC_DBG_MON_A_10 (MTK_PIN_NO(4) | 7)

#define MT8516_PIN_5_EINT5__FUNC_GPIO5 (MTK_PIN_NO(5) | 0)
#define MT8516_PIN_5_EINT5__FUNC_UCTS2 (MTK_PIN_NO(5) | 1)
#define MT8516_PIN_5_EINT5__FUNC_SPI_CSB (MTK_PIN_NO(5) | 3)
#define MT8516_PIN_5_EINT5__FUNC_EXT_RXER (MTK_PIN_NO(5) | 4)
#define MT8516_PIN_5_EINT5__FUNC_CONN_MCU_TDI (MTK_PIN_NO(5) | 5)
#define MT8516_PIN_5_EINT5__FUNC_CONN_TEST_CK (MTK_PIN_NO(5) | 6)
#define MT8516_PIN_5_EINT5__FUNC_DBG_MON_A_11 (MTK_PIN_NO(5) | 7)

#define MT8516_PIN_6_EINT6__FUNC_GPIO6 (MTK_PIN_NO(6) | 0)
#define MT8516_PIN_6_EINT6__FUNC_URTS2 (MTK_PIN_NO(6) | 1)
#define MT8516_PIN_6_EINT6__FUNC_SPI_CLK (MTK_PIN_NO(6) | 3)
#define MT8516_PIN_6_EINT6__FUNC_EXT_RXC (MTK_PIN_NO(6) | 4)
#define MT8516_PIN_6_EINT6__FUNC_CONN_MCU_TRST_B (MTK_PIN_NO(6) | 5)
#define MT8516_PIN_6_EINT6__FUNC_DBG_MON_A_12 (MTK_PIN_NO(6) | 7)

#define MT8516_PIN_7_EINT7__FUNC_GPIO7 (MTK_PIN_NO(7) | 0)
#define MT8516_PIN_7_EINT7__FUNC_SQIRST (MTK_PIN_NO(7) | 1)
#define MT8516_PIN_7_EINT7__FUNC_SDA1_0 (MTK_PIN_NO(7) | 3)
#define MT8516_PIN_7_EINT7__FUNC_EXT_RXDV (MTK_PIN_NO(7) | 4)
#define MT8516_PIN_7_EINT7__FUNC_CONN_MCU_TMS (MTK_PIN_NO(7) | 5)
#define MT8516_PIN_7_EINT7__FUNC_CONN_MCU_AICE_JMSC (MTK_PIN_NO(7) | 6)
#define MT8516_PIN_7_EINT7__FUNC_DBG_MON_A_13 (MTK_PIN_NO(7) | 7)

#define MT8516_PIN_8_EINT8__FUNC_GPIO8 (MTK_PIN_NO(8) | 0)
#define MT8516_PIN_8_EINT8__FUNC_SQICK (MTK_PIN_NO(8) | 1)
#define MT8516_PIN_8_EINT8__FUNC_CLKM3 (MTK_PIN_NO(8) | 2)
#define MT8516_PIN_8_EINT8__FUNC_SCL1_0 (MTK_PIN_NO(8) | 3)
#define MT8516_PIN_8_EINT8__FUNC_EXT_RXD0 (MTK_PIN_NO(8) | 4)
#define MT8516_PIN_8_EINT8__FUNC_ANT_SEL0 (MTK_PIN_NO(8) | 5)
#define MT8516_PIN_8_EINT8__FUNC_DBG_MON_A_14 (MTK_PIN_NO(8) | 7)

#define MT8516_PIN_9_EINT9__FUNC_GPIO9 (MTK_PIN_NO(9) | 0)
#define MT8516_PIN_9_EINT9__FUNC_CLKM4 (MTK_PIN_NO(9) | 1)
#define MT8516_PIN_9_EINT9__FUNC_SDA2_0 (MTK_PIN_NO(9) | 2)
#define MT8516_PIN_9_EINT9__FUNC_EXT_FRAME_SYNC (MTK_PIN_NO(9) | 3)
#define MT8516_PIN_9_EINT9__FUNC_EXT_RXD1 (MTK_PIN_NO(9) | 4)
#define MT8516_PIN_9_EINT9__FUNC_ANT_SEL1 (MTK_PIN_NO(9) | 5)
#define MT8516_PIN_9_EINT9__FUNC_DBG_MON_A_15 (MTK_PIN_NO(9) | 7)

#define MT8516_PIN_10_EINT10__FUNC_GPIO10 (MTK_PIN_NO(10) | 0)
#define MT8516_PIN_10_EINT10__FUNC_CLKM5 (MTK_PIN_NO(10) | 1)
#define MT8516_PIN_10_EINT10__FUNC_SCL2_0 (MTK_PIN_NO(10) | 2)
#define MT8516_PIN_10_EINT10__FUNC_EXT_FRAME_SYNC (MTK_PIN_NO(10) | 3)
#define MT8516_PIN_10_EINT10__FUNC_EXT_RXD2 (MTK_PIN_NO(10) | 4)
#define MT8516_PIN_10_EINT10__FUNC_ANT_SEL2 (MTK_PIN_NO(10) | 5)
#define MT8516_PIN_10_EINT10__FUNC_DBG_MON_A_16 (MTK_PIN_NO(10) | 7)

#define MT8516_PIN_11_EINT11__FUNC_GPIO11 (MTK_PIN_NO(11) | 0)
#define MT8516_PIN_11_EINT11__FUNC_CLKM4 (MTK_PIN_NO(11) | 1)
#define MT8516_PIN_11_EINT11__FUNC_PWM_C (MTK_PIN_NO(11) | 2)
#define MT8516_PIN_11_EINT11__FUNC_CONN_TEST_CK (MTK_PIN_NO(11) | 3)
#define MT8516_PIN_11_EINT11__FUNC_ANT_SEL3 (MTK_PIN_NO(11) | 4)
#define MT8516_PIN_11_EINT11__FUNC_EXT_RXD3 (MTK_PIN_NO(11) | 6)
#define MT8516_PIN_11_EINT11__FUNC_DBG_MON_A_17 (MTK_PIN_NO(11) | 7)

#define MT8516_PIN_12_EINT12__FUNC_GPIO12 (MTK_PIN_NO(12) | 0)
#define MT8516_PIN_12_EINT12__FUNC_CLKM5 (MTK_PIN_NO(12) | 1)
#define MT8516_PIN_12_EINT12__FUNC_PWM_A (MTK_PIN_NO(12) | 2)
#define MT8516_PIN_12_EINT12__FUNC_SPDIF_OUT (MTK_PIN_NO(12) | 3)
#define MT8516_PIN_12_EINT12__FUNC_ANT_SEL4 (MTK_PIN_NO(12) | 4)
#define MT8516_PIN_12_EINT12__FUNC_EXT_TXEN (MTK_PIN_NO(12) | 6)
#define MT8516_PIN_12_EINT12__FUNC_DBG_MON_A_18 (MTK_PIN_NO(12) | 7)

#define MT8516_PIN_13_EINT13__FUNC_GPIO13 (MTK_PIN_NO(13) | 0)
#define MT8516_PIN_13_EINT13__FUNC_TSF_IN (MTK_PIN_NO(13) | 3)
#define MT8516_PIN_13_EINT13__FUNC_ANT_SEL5 (MTK_PIN_NO(13) | 4)
#define MT8516_PIN_13_EINT13__FUNC_SPDIF_IN (MTK_PIN_NO(13) | 6)
#define MT8516_PIN_13_EINT13__FUNC_DBG_MON_A_19 (MTK_PIN_NO(13) | 7)

#define MT8516_PIN_14_EINT14__FUNC_GPIO14 (MTK_PIN_NO(14) | 0)
#define MT8516_PIN_14_EINT14__FUNC_I2S_8CH_DO1 (MTK_PIN_NO(14) | 2)
#define MT8516_PIN_14_EINT14__FUNC_TDM_RX_MCK (MTK_PIN_NO(14) | 3)
#define MT8516_PIN_14_EINT14__FUNC_ANT_SEL1 (MTK_PIN_NO(14) | 4)
#define MT8516_PIN_14_EINT14__FUNC_CONN_MCU_DBGACK_N (MTK_PIN_NO(14) | 5)
#define MT8516_PIN_14_EINT14__FUNC_NCLE (MTK_PIN_NO(14) | 6)
#define MT8516_PIN_14_EINT14__FUNC_DBG_MON_B_8 (MTK_PIN_NO(14) | 7)

#define MT8516_PIN_15_EINT15__FUNC_GPIO15 (MTK_PIN_NO(15) | 0)
#define MT8516_PIN_15_EINT15__FUNC_I2S_8CH_LRCK (MTK_PIN_NO(15) | 2)
#define MT8516_PIN_15_EINT15__FUNC_TDM_RX_BCK (MTK_PIN_NO(15) | 3)
#define MT8516_PIN_15_EINT15__FUNC_ANT_SEL2 (MTK_PIN_NO(15) | 4)
#define MT8516_PIN_15_EINT15__FUNC_CONN_MCU_DBGI_N (MTK_PIN_NO(15) | 5)
#define MT8516_PIN_15_EINT15__FUNC_NCEB1 (MTK_PIN_NO(15) | 6)
#define MT8516_PIN_15_EINT15__FUNC_DBG_MON_B_9 (MTK_PIN_NO(15) | 7)

#define MT8516_PIN_16_EINT16__FUNC_GPIO16 (MTK_PIN_NO(16) | 0)
#define MT8516_PIN_16_EINT16__FUNC_I2S_8CH_BCK (MTK_PIN_NO(16) | 2)
#define MT8516_PIN_16_EINT16__FUNC_TDM_RX_LRCK (MTK_PIN_NO(16) | 3)
#define MT8516_PIN_16_EINT16__FUNC_ANT_SEL3 (MTK_PIN_NO(16) | 4)
#define MT8516_PIN_16_EINT16__FUNC_CONN_MCU_TRST_B (MTK_PIN_NO(16) | 5)
#define MT8516_PIN_16_EINT16__FUNC_NCEB0 (MTK_PIN_NO(16) | 6)
#define MT8516_PIN_16_EINT16__FUNC_DBG_MON_B_10 (MTK_PIN_NO(16) | 7)

#define MT8516_PIN_17_EINT17__FUNC_GPIO17 (MTK_PIN_NO(17) | 0)
#define MT8516_PIN_17_EINT17__FUNC_I2S_8CH_MCK (MTK_PIN_NO(17) | 2)
#define MT8516_PIN_17_EINT17__FUNC_TDM_RX_DI (MTK_PIN_NO(17) | 3)
#define MT8516_PIN_17_EINT17__FUNC_IDDIG (MTK_PIN_NO(17) | 4)
#define MT8516_PIN_17_EINT17__FUNC_ANT_SEL4 (MTK_PIN_NO(17) | 5)
#define MT8516_PIN_17_EINT17__FUNC_NREB (MTK_PIN_NO(17) | 6)
#define MT8516_PIN_17_EINT17__FUNC_DBG_MON_B_11 (MTK_PIN_NO(17) | 7)

#define MT8516_PIN_18_EINT18__FUNC_GPIO18 (MTK_PIN_NO(18) | 0)
#define MT8516_PIN_18_EINT18__FUNC_USB_DRVVBUS (MTK_PIN_NO(18) | 2)
#define MT8516_PIN_18_EINT18__FUNC_I2S3_LRCK (MTK_PIN_NO(18) | 3)
#define MT8516_PIN_18_EINT18__FUNC_CLKM1 (MTK_PIN_NO(18) | 4)
#define MT8516_PIN_18_EINT18__FUNC_ANT_SEL3 (MTK_PIN_NO(18) | 5)
#define MT8516_PIN_18_EINT18__FUNC_I2S2_BCK (MTK_PIN_NO(18) | 6)
#define MT8516_PIN_18_EINT18__FUNC_DBG_MON_A_20 (MTK_PIN_NO(18) | 7)

#define MT8516_PIN_19_EINT19__FUNC_GPIO19 (MTK_PIN_NO(19) | 0)
#define MT8516_PIN_19_EINT19__FUNC_UCTS1 (MTK_PIN_NO(19) | 1)
#define MT8516_PIN_19_EINT19__FUNC_IDDIG (MTK_PIN_NO(19) | 2)
#define MT8516_PIN_19_EINT19__FUNC_I2S3_BCK (MTK_PIN_NO(19) | 3)
#define MT8516_PIN_19_EINT19__FUNC_CLKM2 (MTK_PIN_NO(19) | 4)
#define MT8516_PIN_19_EINT19__FUNC_ANT_SEL4 (MTK_PIN_NO(19) | 5)
#define MT8516_PIN_19_EINT19__FUNC_I2S2_DI (MTK_PIN_NO(19) | 6)
#define MT8516_PIN_19_EINT19__FUNC_DBG_MON_A_21 (MTK_PIN_NO(19) | 7)

#define MT8516_PIN_20_EINT20__FUNC_GPIO20 (MTK_PIN_NO(20) | 0)
#define MT8516_PIN_20_EINT20__FUNC_URTS1 (MTK_PIN_NO(20) | 1)
#define MT8516_PIN_20_EINT20__FUNC_I2S3_DO (MTK_PIN_NO(20) | 3)
#define MT8516_PIN_20_EINT20__FUNC_CLKM3 (MTK_PIN_NO(20) | 4)
#define MT8516_PIN_20_EINT20__FUNC_ANT_SEL5 (MTK_PIN_NO(20) | 5)
#define MT8516_PIN_20_EINT20__FUNC_I2S2_LRCK (MTK_PIN_NO(20) | 6)
#define MT8516_PIN_20_EINT20__FUNC_DBG_MON_A_22 (MTK_PIN_NO(20) | 7)

#define MT8516_PIN_21_EINT21__FUNC_GPIO21 (MTK_PIN_NO(21) | 0)
#define MT8516_PIN_21_EINT21__FUNC_NRNB (MTK_PIN_NO(21) | 1)
#define MT8516_PIN_21_EINT21__FUNC_ANT_SEL0 (MTK_PIN_NO(21) | 2)
#define MT8516_PIN_21_EINT21__FUNC_I2S_8CH_DO4 (MTK_PIN_NO(21) | 3)
#define MT8516_PIN_21_EINT21__FUNC_DBG_MON_B_31 (MTK_PIN_NO(21) | 7)

#define MT8516_PIN_22_EINT22__FUNC_GPIO22 (MTK_PIN_NO(22) | 0)
#define MT8516_PIN_22_EINT22__FUNC_I2S_8CH_DO2 (MTK_PIN_NO(22) | 2)
#define MT8516_PIN_22_EINT22__FUNC_TSF_IN (MTK_PIN_NO(22) | 3)
#define MT8516_PIN_22_EINT22__FUNC_USB_DRVVBUS (MTK_PIN_NO(22) | 4)
#define MT8516_PIN_22_EINT22__FUNC_SPDIF_OUT (MTK_PIN_NO(22) | 5)
#define MT8516_PIN_22_EINT22__FUNC_NRE_C (MTK_PIN_NO(22) | 6)
#define MT8516_PIN_22_EINT22__FUNC_DBG_MON_B_12 (MTK_PIN_NO(22) | 7)

#define MT8516_PIN_23_EINT23__FUNC_GPIO23 (MTK_PIN_NO(23) | 0)
#define MT8516_PIN_23_EINT23__FUNC_I2S_8CH_DO3 (MTK_PIN_NO(23) | 2)
#define MT8516_PIN_23_EINT23__FUNC_CLKM0 (MTK_PIN_NO(23) | 3)
#define MT8516_PIN_23_EINT23__FUNC_IR (MTK_PIN_NO(23) | 4)
#define MT8516_PIN_23_EINT23__FUNC_SPDIF_IN (MTK_PIN_NO(23) | 5)
#define MT8516_PIN_23_EINT23__FUNC_NDQS_C (MTK_PIN_NO(23) | 6)
#define MT8516_PIN_23_EINT23__FUNC_DBG_MON_B_13 (MTK_PIN_NO(23) | 7)

#define MT8516_PIN_24_EINT24__FUNC_GPIO24 (MTK_PIN_NO(24) | 0)
#define MT8516_PIN_24_EINT24__FUNC_ANT_SEL1 (MTK_PIN_NO(24) | 3)
#define MT8516_PIN_24_EINT24__FUNC_UCTS2 (MTK_PIN_NO(24) | 4)
#define MT8516_PIN_24_EINT24__FUNC_PWM_A (MTK_PIN_NO(24) | 5)
#define MT8516_PIN_24_EINT24__FUNC_I2S0_MCK (MTK_PIN_NO(24) | 6)
#define MT8516_PIN_24_EINT24__FUNC_DBG_MON_A_0 (MTK_PIN_NO(24) | 7)

#define MT8516_PIN_25_EINT25__FUNC_GPIO25 (MTK_PIN_NO(25) | 0)
#define MT8516_PIN_25_EINT25__FUNC_ANT_SEL0 (MTK_PIN_NO(25) | 3)
#define MT8516_PIN_25_EINT25__FUNC_URTS2 (MTK_PIN_NO(25) | 4)
#define MT8516_PIN_25_EINT25__FUNC_PWM_B (MTK_PIN_NO(25) | 5)
#define MT8516_PIN_25_EINT25__FUNC_I2S_8CH_MCK (MTK_PIN_NO(25) | 6)
#define MT8516_PIN_25_EINT25__FUNC_DBG_MON_A_1 (MTK_PIN_NO(25) | 7)

#define MT8516_PIN_26_PWRAP_SPI0_MI__FUNC_GPIO26 (MTK_PIN_NO(26) | 0)
#define MT8516_PIN_26_PWRAP_SPI0_MI__FUNC_PWRAP_SPI0_MO (MTK_PIN_NO(26) | 1)
#define MT8516_PIN_26_PWRAP_SPI0_MI__FUNC_PWRAP_SPI0_MI (MTK_PIN_NO(26) | 2)

#define MT8516_PIN_27_PWRAP_SPI0_MO__FUNC_GPIO27 (MTK_PIN_NO(27) | 0)
#define MT8516_PIN_27_PWRAP_SPI0_MO__FUNC_PWRAP_SPI0_MI (MTK_PIN_NO(27) | 1)
#define MT8516_PIN_27_PWRAP_SPI0_MO__FUNC_PWRAP_SPI0_MO (MTK_PIN_NO(27) | 2)

#define MT8516_PIN_28_PWRAP_INT__FUNC_GPIO28 (MTK_PIN_NO(28) | 0)
#define MT8516_PIN_28_PWRAP_INT__FUNC_I2S0_MCK (MTK_PIN_NO(28) | 1)
#define MT8516_PIN_28_PWRAP_INT__FUNC_I2S_8CH_MCK (MTK_PIN_NO(28) | 4)
#define MT8516_PIN_28_PWRAP_INT__FUNC_I2S2_MCK (MTK_PIN_NO(28) | 5)
#define MT8516_PIN_28_PWRAP_INT__FUNC_I2S3_MCK (MTK_PIN_NO(28) | 6)

#define MT8516_PIN_29_PWRAP_SPI0_CK__FUNC_GPIO29 (MTK_PIN_NO(29) | 0)
#define MT8516_PIN_29_PWRAP_SPI0_CK__FUNC_PWRAP_SPI0_CK (MTK_PIN_NO(29) | 1)

#define MT8516_PIN_30_PWRAP_SPI0_CSN__FUNC_GPIO30 (MTK_PIN_NO(30) | 0)
#define MT8516_PIN_30_PWRAP_SPI0_CSN__FUNC_PWRAP_SPI0_CSN (MTK_PIN_NO(30) | 1)

#define MT8516_PIN_31_RTC32K_CK__FUNC_GPIO31 (MTK_PIN_NO(31) | 0)
#define MT8516_PIN_31_RTC32K_CK__FUNC_RTC32K_CK (MTK_PIN_NO(31) | 1)

#define MT8516_PIN_32_WATCHDOG__FUNC_GPIO32 (MTK_PIN_NO(32) | 0)
#define MT8516_PIN_32_WATCHDOG__FUNC_WATCHDOG (MTK_PIN_NO(32) | 1)

#define MT8516_PIN_33_SRCLKENA__FUNC_GPIO33 (MTK_PIN_NO(33) | 0)
#define MT8516_PIN_33_SRCLKENA__FUNC_SRCLKENA0 (MTK_PIN_NO(33) | 1)

#define MT8516_PIN_34_URXD2__FUNC_GPIO34 (MTK_PIN_NO(34) | 0)
#define MT8516_PIN_34_URXD2__FUNC_URXD2 (MTK_PIN_NO(34) | 1)
#define MT8516_PIN_34_URXD2__FUNC_UTXD2 (MTK_PIN_NO(34) | 3)
#define MT8516_PIN_34_URXD2__FUNC_DBG_SCL (MTK_PIN_NO(34) | 4)
#define MT8516_PIN_34_URXD2__FUNC_I2S2_MCK (MTK_PIN_NO(34) | 6)
#define MT8516_PIN_34_URXD2__FUNC_DBG_MON_B_0 (MTK_PIN_NO(34) | 7)

#define MT8516_PIN_35_UTXD2__FUNC_GPIO35 (MTK_PIN_NO(35) | 0)
#define MT8516_PIN_35_UTXD2__FUNC_UTXD2 (MTK_PIN_NO(35) | 1)
#define MT8516_PIN_35_UTXD2__FUNC_URXD2 (MTK_PIN_NO(35) | 3)
#define MT8516_PIN_35_UTXD2__FUNC_DBG_SDA (MTK_PIN_NO(35) | 4)
#define MT8516_PIN_35_UTXD2__FUNC_I2S3_MCK (MTK_PIN_NO(35) | 6)
#define MT8516_PIN_35_UTXD2__FUNC_DBG_MON_B_1 (MTK_PIN_NO(35) | 7)

#define MT8516_PIN_36_MRG_CLK__FUNC_GPIO36 (MTK_PIN_NO(36) | 0)
#define MT8516_PIN_36_MRG_CLK__FUNC_MRG_CLK (MTK_PIN_NO(36) | 1)
#define MT8516_PIN_36_MRG_CLK__FUNC_I2S0_BCK (MTK_PIN_NO(36) | 3)
#define MT8516_PIN_36_MRG_CLK__FUNC_I2S3_BCK (MTK_PIN_NO(36) | 4)
#define MT8516_PIN_36_MRG_CLK__FUNC_PCM0_CLK (MTK_PIN_NO(36) | 5)
#define MT8516_PIN_36_MRG_CLK__FUNC_IR (MTK_PIN_NO(36) | 6)
#define MT8516_PIN_36_MRG_CLK__FUNC_DBG_MON_A_2 (MTK_PIN_NO(36) | 7)

#define MT8516_PIN_37_MRG_SYNC__FUNC_GPIO37 (MTK_PIN_NO(37) | 0)
#define MT8516_PIN_37_MRG_SYNC__FUNC_MRG_SYNC (MTK_PIN_NO(37) | 1)
#define MT8516_PIN_37_MRG_SYNC__FUNC_I2S0_LRCK (MTK_PIN_NO(37) | 3)
#define MT8516_PIN_37_MRG_SYNC__FUNC_I2S3_LRCK (MTK_PIN_NO(37) | 4)
#define MT8516_PIN_37_MRG_SYNC__FUNC_PCM0_SYNC (MTK_PIN_NO(37) | 5)
#define MT8516_PIN_37_MRG_SYNC__FUNC_EXT_COL (MTK_PIN_NO(37) | 6)
#define MT8516_PIN_37_MRG_SYNC__FUNC_DBG_MON_A_3 (MTK_PIN_NO(37) | 7)

#define MT8516_PIN_38_MRG_DI__FUNC_GPIO38 (MTK_PIN_NO(38) | 0)
#define MT8516_PIN_38_MRG_DI__FUNC_MRG_DI (MTK_PIN_NO(38) | 1)
#define MT8516_PIN_38_MRG_DI__FUNC_I2S0_DI (MTK_PIN_NO(38) | 3)
#define MT8516_PIN_38_MRG_DI__FUNC_I2S3_DO (MTK_PIN_NO(38) | 4)
#define MT8516_PIN_38_MRG_DI__FUNC_PCM0_DI (MTK_PIN_NO(38) | 5)
#define MT8516_PIN_38_MRG_DI__FUNC_EXT_MDIO (MTK_PIN_NO(38) | 6)
#define MT8516_PIN_38_MRG_DI__FUNC_DBG_MON_A_4 (MTK_PIN_NO(38) | 7)

#define MT8516_PIN_39_MRG_DO__FUNC_GPIO39 (MTK_PIN_NO(39) | 0)
#define MT8516_PIN_39_MRG_DO__FUNC_MRG_DO (MTK_PIN_NO(39) | 1)
#define MT8516_PIN_39_MRG_DO__FUNC_I2S0_MCK (MTK_PIN_NO(39) | 3)
#define MT8516_PIN_39_MRG_DO__FUNC_I2S3_MCK (MTK_PIN_NO(39) | 4)
#define MT8516_PIN_39_MRG_DO__FUNC_PCM0_DO (MTK_PIN_NO(39) | 5)
#define MT8516_PIN_39_MRG_DO__FUNC_EXT_MDC (MTK_PIN_NO(39) | 6)
#define MT8516_PIN_39_MRG_DO__FUNC_DBG_MON_A_5 (MTK_PIN_NO(39) | 7)

#define MT8516_PIN_40_KPROW0__FUNC_GPIO40 (MTK_PIN_NO(40) | 0)
#define MT8516_PIN_40_KPROW0__FUNC_KPROW0 (MTK_PIN_NO(40) | 1)
#define MT8516_PIN_40_KPROW0__FUNC_DBG_MON_B_4 (MTK_PIN_NO(40) | 7)

#define MT8516_PIN_41_KPROW1__FUNC_GPIO41 (MTK_PIN_NO(41) | 0)
#define MT8516_PIN_41_KPROW1__FUNC_KPROW1 (MTK_PIN_NO(41) | 1)
#define MT8516_PIN_41_KPROW1__FUNC_IDDIG (MTK_PIN_NO(41) | 2)
#define MT8516_PIN_41_KPROW1__FUNC_EXT_FRAME_SYNC (MTK_PIN_NO(41) | 3)
#define MT8516_PIN_41_KPROW1__FUNC_DBG_MON_B_5 (MTK_PIN_NO(41) | 7)

#define MT8516_PIN_42_KPCOL0__FUNC_GPIO42 (MTK_PIN_NO(42) | 0)
#define MT8516_PIN_42_KPCOL0__FUNC_KPCOL0 (MTK_PIN_NO(42) | 1)
#define MT8516_PIN_42_KPCOL0__FUNC_DBG_MON_B_6 (MTK_PIN_NO(42) | 7)

#define MT8516_PIN_43_KPCOL1__FUNC_GPIO43 (MTK_PIN_NO(43) | 0)
#define MT8516_PIN_43_KPCOL1__FUNC_KPCOL1 (MTK_PIN_NO(43) | 1)
#define MT8516_PIN_43_KPCOL1__FUNC_USB_DRVVBUS (MTK_PIN_NO(43) | 2)
#define MT8516_PIN_43_KPCOL1__FUNC_EXT_FRAME_SYNC (MTK_PIN_NO(43) | 3)
#define MT8516_PIN_43_KPCOL1__FUNC_TSF_IN (MTK_PIN_NO(43) | 4)
#define MT8516_PIN_43_KPCOL1__FUNC_DBG_MON_B_7 (MTK_PIN_NO(43) | 7)

#define MT8516_PIN_44_JTMS__FUNC_GPIO44 (MTK_PIN_NO(44) | 0)
#define MT8516_PIN_44_JTMS__FUNC_JTMS (MTK_PIN_NO(44) | 1)
#define MT8516_PIN_44_JTMS__FUNC_CONN_MCU_TMS (MTK_PIN_NO(44) | 2)
#define MT8516_PIN_44_JTMS__FUNC_CONN_MCU_AICE_JMSC (MTK_PIN_NO(44) | 3)
#define MT8516_PIN_44_JTMS__FUNC_DFD_TMS_XI (MTK_PIN_NO(44) | 5)
#define MT8516_PIN_44_JTMS__FUNC_UDI_TMS_XI (MTK_PIN_NO(44) | 6)

#define MT8516_PIN_45_JTCK__FUNC_GPIO45 (MTK_PIN_NO(45) | 0)
#define MT8516_PIN_45_JTCK__FUNC_JTCK (MTK_PIN_NO(45) | 1)
#define MT8516_PIN_45_JTCK__FUNC_CONN_MCU_TCK (MTK_PIN_NO(45) | 2)
#define MT8516_PIN_45_JTCK__FUNC_CONN_MCU_AICE_JCKC (MTK_PIN_NO(45) | 3)

#define MT8516_PIN_46_JTDI__FUNC_GPIO46 (MTK_PIN_NO(46) | 0)
#define MT8516_PIN_46_JTDI__FUNC_JTDI (MTK_PIN_NO(46) | 1)
#define MT8516_PIN_46_JTDI__FUNC_CONN_MCU_TDI (MTK_PIN_NO(46) | 2)

#define MT8516_PIN_47_JTDO__FUNC_GPIO47 (MTK_PIN_NO(47) | 0)
#define MT8516_PIN_47_JTDO__FUNC_JTDO (MTK_PIN_NO(47) | 1)
#define MT8516_PIN_47_JTDO__FUNC_CONN_MCU_TDO (MTK_PIN_NO(47) | 2)

#define MT8516_PIN_48_SPI_CS__FUNC_GPIO48 (MTK_PIN_NO(48) | 0)
#define MT8516_PIN_48_SPI_CS__FUNC_SPI_CSB (MTK_PIN_NO(48) | 1)
#define MT8516_PIN_48_SPI_CS__FUNC_I2S0_DI (MTK_PIN_NO(48) | 3)
#define MT8516_PIN_48_SPI_CS__FUNC_I2S2_BCK (MTK_PIN_NO(48) | 4)
#define MT8516_PIN_48_SPI_CS__FUNC_DBG_MON_A_23 (MTK_PIN_NO(48) | 7)

#define MT8516_PIN_49_SPI_CK__FUNC_GPIO49 (MTK_PIN_NO(49) | 0)
#define MT8516_PIN_49_SPI_CK__FUNC_SPI_CLK (MTK_PIN_NO(49) | 1)
#define MT8516_PIN_49_SPI_CK__FUNC_I2S0_LRCK (MTK_PIN_NO(49) | 3)
#define MT8516_PIN_49_SPI_CK__FUNC_I2S2_DI (MTK_PIN_NO(49) | 4)
#define MT8516_PIN_49_SPI_CK__FUNC_DBG_MON_A_24 (MTK_PIN_NO(49) | 7)

#define MT8516_PIN_50_SPI_MI__FUNC_GPIO50 (MTK_PIN_NO(50) | 0)
#define MT8516_PIN_50_SPI_MI__FUNC_SPI_MI (MTK_PIN_NO(50) | 1)
#define MT8516_PIN_50_SPI_MI__FUNC_SPI_MO (MTK_PIN_NO(50) | 2)
#define MT8516_PIN_50_SPI_MI__FUNC_I2S0_BCK (MTK_PIN_NO(50) | 3)
#define MT8516_PIN_50_SPI_MI__FUNC_I2S2_LRCK (MTK_PIN_NO(50) | 4)
#define MT8516_PIN_50_SPI_MI__FUNC_DBG_MON_A_25 (MTK_PIN_NO(50) | 7)

#define MT8516_PIN_51_SPI_MO__FUNC_GPIO51 (MTK_PIN_NO(51) | 0)
#define MT8516_PIN_51_SPI_MO__FUNC_SPI_MO (MTK_PIN_NO(51) | 1)
#define MT8516_PIN_51_SPI_MO__FUNC_SPI_MI (MTK_PIN_NO(51) | 2)
#define MT8516_PIN_51_SPI_MO__FUNC_I2S0_MCK (MTK_PIN_NO(51) | 3)
#define MT8516_PIN_51_SPI_MO__FUNC_I2S2_MCK (MTK_PIN_NO(51) | 4)
#define MT8516_PIN_51_SPI_MO__FUNC_DBG_MON_A_26 (MTK_PIN_NO(51) | 7)

#define MT8516_PIN_52_SDA1__FUNC_GPIO52 (MTK_PIN_NO(52) | 0)
#define MT8516_PIN_52_SDA1__FUNC_SDA1_0 (MTK_PIN_NO(52) | 1)

#define MT8516_PIN_53_SCL1__FUNC_GPIO53 (MTK_PIN_NO(53) | 0)
#define MT8516_PIN_53_SCL1__FUNC_SCL1_0 (MTK_PIN_NO(53) | 1)

#define MT8516_PIN_54_GPIO54__FUNC_GPIO54 (MTK_PIN_NO(54) | 0)
#define MT8516_PIN_54_GPIO54__FUNC_PWM_B (MTK_PIN_NO(54) | 2)
#define MT8516_PIN_54_GPIO54__FUNC_DBG_MON_B_2 (MTK_PIN_NO(54) | 7)

#define MT8516_PIN_55_I2S_DATA_IN__FUNC_GPIO55 (MTK_PIN_NO(55) | 0)
#define MT8516_PIN_55_I2S_DATA_IN__FUNC_I2S0_DI (MTK_PIN_NO(55) | 1)
#define MT8516_PIN_55_I2S_DATA_IN__FUNC_UCTS0 (MTK_PIN_NO(55) | 2)
#define MT8516_PIN_55_I2S_DATA_IN__FUNC_I2S3_DO (MTK_PIN_NO(55) | 3)
#define MT8516_PIN_55_I2S_DATA_IN__FUNC_I2S_8CH_DO1 (MTK_PIN_NO(55) | 4)
#define MT8516_PIN_55_I2S_DATA_IN__FUNC_PWM_A (MTK_PIN_NO(55) | 5)
#define MT8516_PIN_55_I2S_DATA_IN__FUNC_I2S2_BCK (MTK_PIN_NO(55) | 6)
#define MT8516_PIN_55_I2S_DATA_IN__FUNC_DBG_MON_A_28 (MTK_PIN_NO(55) | 7)

#define MT8516_PIN_56_I2S_LRCK__FUNC_GPIO56 (MTK_PIN_NO(56) | 0)
#define MT8516_PIN_56_I2S_LRCK__FUNC_I2S0_LRCK (MTK_PIN_NO(56) | 1)
#define MT8516_PIN_56_I2S_LRCK__FUNC_I2S3_LRCK (MTK_PIN_NO(56) | 3)
#define MT8516_PIN_56_I2S_LRCK__FUNC_I2S_8CH_LRCK (MTK_PIN_NO(56) | 4)
#define MT8516_PIN_56_I2S_LRCK__FUNC_PWM_B (MTK_PIN_NO(56) | 5)
#define MT8516_PIN_56_I2S_LRCK__FUNC_I2S2_DI (MTK_PIN_NO(56) | 6)
#define MT8516_PIN_56_I2S_LRCK__FUNC_DBG_MON_A_29 (MTK_PIN_NO(56) | 7)

#define MT8516_PIN_57_I2S_BCK__FUNC_GPIO57 (MTK_PIN_NO(57) | 0)
#define MT8516_PIN_57_I2S_BCK__FUNC_I2S0_BCK (MTK_PIN_NO(57) | 1)
#define MT8516_PIN_57_I2S_BCK__FUNC_URTS0 (MTK_PIN_NO(57) | 2)
#define MT8516_PIN_57_I2S_BCK__FUNC_I2S3_BCK (MTK_PIN_NO(57) | 3)
#define MT8516_PIN_57_I2S_BCK__FUNC_I2S_8CH_BCK (MTK_PIN_NO(57) | 4)
#define MT8516_PIN_57_I2S_BCK__FUNC_PWM_C (MTK_PIN_NO(57) | 5)
#define MT8516_PIN_57_I2S_BCK__FUNC_I2S2_LRCK (MTK_PIN_NO(57) | 6)
#define MT8516_PIN_57_I2S_BCK__FUNC_DBG_MON_A_30 (MTK_PIN_NO(57) | 7)

#define MT8516_PIN_58_SDA0__FUNC_GPIO58 (MTK_PIN_NO(58) | 0)
#define MT8516_PIN_58_SDA0__FUNC_SDA0_0 (MTK_PIN_NO(58) | 1)

#define MT8516_PIN_59_SCL0__FUNC_GPIO59 (MTK_PIN_NO(59) | 0)
#define MT8516_PIN_59_SCL0__FUNC_SCL0_0 (MTK_PIN_NO(59) | 1)

#define MT8516_PIN_60_SDA2__FUNC_GPIO60 (MTK_PIN_NO(60) | 0)
#define MT8516_PIN_60_SDA2__FUNC_SDA2_0 (MTK_PIN_NO(60) | 1)
#define MT8516_PIN_60_SDA2__FUNC_PWM_B (MTK_PIN_NO(60) | 2)

#define MT8516_PIN_61_SCL2__FUNC_GPIO61 (MTK_PIN_NO(61) | 0)
#define MT8516_PIN_61_SCL2__FUNC_SCL2_0 (MTK_PIN_NO(61) | 1)
#define MT8516_PIN_61_SCL2__FUNC_PWM_C (MTK_PIN_NO(61) | 2)

#define MT8516_PIN_62_URXD0__FUNC_GPIO62 (MTK_PIN_NO(62) | 0)
#define MT8516_PIN_62_URXD0__FUNC_URXD0 (MTK_PIN_NO(62) | 1)
#define MT8516_PIN_62_URXD0__FUNC_UTXD0 (MTK_PIN_NO(62) | 2)

#define MT8516_PIN_63_UTXD0__FUNC_GPIO63 (MTK_PIN_NO(63) | 0)
#define MT8516_PIN_63_UTXD0__FUNC_UTXD0 (MTK_PIN_NO(63) | 1)
#define MT8516_PIN_63_UTXD0__FUNC_URXD0 (MTK_PIN_NO(63) | 2)

#define MT8516_PIN_64_URXD1__FUNC_GPIO64 (MTK_PIN_NO(64) | 0)
#define MT8516_PIN_64_URXD1__FUNC_URXD1 (MTK_PIN_NO(64) | 1)
#define MT8516_PIN_64_URXD1__FUNC_UTXD1 (MTK_PIN_NO(64) | 2)
#define MT8516_PIN_64_URXD1__FUNC_DBG_MON_A_27 (MTK_PIN_NO(64) | 7)

#define MT8516_PIN_65_UTXD1__FUNC_GPIO65 (MTK_PIN_NO(65) | 0)
#define MT8516_PIN_65_UTXD1__FUNC_UTXD1 (MTK_PIN_NO(65) | 1)
#define MT8516_PIN_65_UTXD1__FUNC_URXD1 (MTK_PIN_NO(65) | 2)
#define MT8516_PIN_65_UTXD1__FUNC_DBG_MON_A_31 (MTK_PIN_NO(65) | 7)

#define MT8516_PIN_68_MSDC2_CMD__FUNC_GPIO68 (MTK_PIN_NO(68) | 0)
#define MT8516_PIN_68_MSDC2_CMD__FUNC_MSDC2_CMD (MTK_PIN_NO(68) | 1)
#define MT8516_PIN_68_MSDC2_CMD__FUNC_I2S_8CH_DO4 (MTK_PIN_NO(68) | 2)
#define MT8516_PIN_68_MSDC2_CMD__FUNC_SDA1_0 (MTK_PIN_NO(68) | 3)
#define MT8516_PIN_68_MSDC2_CMD__FUNC_USB_SDA (MTK_PIN_NO(68) | 5)
#define MT8516_PIN_68_MSDC2_CMD__FUNC_I2S3_BCK (MTK_PIN_NO(68) | 6)
#define MT8516_PIN_68_MSDC2_CMD__FUNC_DBG_MON_B_15 (MTK_PIN_NO(68) | 7)

#define MT8516_PIN_69_MSDC2_CLK__FUNC_GPIO69 (MTK_PIN_NO(69) | 0)
#define MT8516_PIN_69_MSDC2_CLK__FUNC_MSDC2_CLK (MTK_PIN_NO(69) | 1)
#define MT8516_PIN_69_MSDC2_CLK__FUNC_I2S_8CH_DO3 (MTK_PIN_NO(69) | 2)
#define MT8516_PIN_69_MSDC2_CLK__FUNC_SCL1_0 (MTK_PIN_NO(69) | 3)
#define MT8516_PIN_69_MSDC2_CLK__FUNC_USB_SCL (MTK_PIN_NO(69) | 5)
#define MT8516_PIN_69_MSDC2_CLK__FUNC_I2S3_LRCK (MTK_PIN_NO(69) | 6)
#define MT8516_PIN_69_MSDC2_CLK__FUNC_DBG_MON_B_16 (MTK_PIN_NO(69) | 7)

#define MT8516_PIN_70_MSDC2_DAT0__FUNC_GPIO70 (MTK_PIN_NO(70) | 0)
#define MT8516_PIN_70_MSDC2_DAT0__FUNC_MSDC2_DAT0 (MTK_PIN_NO(70) | 1)
#define MT8516_PIN_70_MSDC2_DAT0__FUNC_I2S_8CH_DO2 (MTK_PIN_NO(70) | 2)
#define MT8516_PIN_70_MSDC2_DAT0__FUNC_UTXD0 (MTK_PIN_NO(70) | 5)
#define MT8516_PIN_70_MSDC2_DAT0__FUNC_I2S3_DO (MTK_PIN_NO(70) | 6)
#define MT8516_PIN_70_MSDC2_DAT0__FUNC_DBG_MON_B_17 (MTK_PIN_NO(70) | 7)

#define MT8516_PIN_71_MSDC2_DAT1__FUNC_GPIO71 (MTK_PIN_NO(71) | 0)
#define MT8516_PIN_71_MSDC2_DAT1__FUNC_MSDC2_DAT1 (MTK_PIN_NO(71) | 1)
#define MT8516_PIN_71_MSDC2_DAT1__FUNC_I2S_8CH_DO1 (MTK_PIN_NO(71) | 2)
#define MT8516_PIN_71_MSDC2_DAT1__FUNC_PWM_A (MTK_PIN_NO(71) | 3)
#define MT8516_PIN_71_MSDC2_DAT1__FUNC_I2S3_MCK (MTK_PIN_NO(71) | 4)
#define MT8516_PIN_71_MSDC2_DAT1__FUNC_URXD0 (MTK_PIN_NO(71) | 5)
#define MT8516_PIN_71_MSDC2_DAT1__FUNC_PWM_B (MTK_PIN_NO(71) | 6)
#define MT8516_PIN_71_MSDC2_DAT1__FUNC_DBG_MON_B_18 (MTK_PIN_NO(71) | 7)

#define MT8516_PIN_72_MSDC2_DAT2__FUNC_GPIO72 (MTK_PIN_NO(72) | 0)
#define MT8516_PIN_72_MSDC2_DAT2__FUNC_MSDC2_DAT2 (MTK_PIN_NO(72) | 1)
#define MT8516_PIN_72_MSDC2_DAT2__FUNC_I2S_8CH_LRCK (MTK_PIN_NO(72) | 2)
#define MT8516_PIN_72_MSDC2_DAT2__FUNC_SDA2_0 (MTK_PIN_NO(72) | 3)
#define MT8516_PIN_72_MSDC2_DAT2__FUNC_UTXD1 (MTK_PIN_NO(72) | 5)
#define MT8516_PIN_72_MSDC2_DAT2__FUNC_PWM_C (MTK_PIN_NO(72) | 6)
#define MT8516_PIN_72_MSDC2_DAT2__FUNC_DBG_MON_B_19 (MTK_PIN_NO(72) | 7)

#define MT8516_PIN_73_MSDC2_DAT3__FUNC_GPIO73 (MTK_PIN_NO(73) | 0)
#define MT8516_PIN_73_MSDC2_DAT3__FUNC_MSDC2_DAT3 (MTK_PIN_NO(73) | 1)
#define MT8516_PIN_73_MSDC2_DAT3__FUNC_I2S_8CH_BCK (MTK_PIN_NO(73) | 2)
#define MT8516_PIN_73_MSDC2_DAT3__FUNC_SCL2_0 (MTK_PIN_NO(73) | 3)
#define MT8516_PIN_73_MSDC2_DAT3__FUNC_EXT_FRAME_SYNC (MTK_PIN_NO(73) | 4)
#define MT8516_PIN_73_MSDC2_DAT3__FUNC_URXD1 (MTK_PIN_NO(73) | 5)
#define MT8516_PIN_73_MSDC2_DAT3__FUNC_PWM_A (MTK_PIN_NO(73) | 6)
#define MT8516_PIN_73_MSDC2_DAT3__FUNC_DBG_MON_B_20 (MTK_PIN_NO(73) | 7)

#define MT8516_PIN_74_TDN3__FUNC_GPI74 (MTK_PIN_NO(74) | 0)
#define MT8516_PIN_74_TDN3__FUNC_TDN3 (MTK_PIN_NO(74) | 1)

#define MT8516_PIN_75_TDP3__FUNC_GPI75 (MTK_PIN_NO(75) | 0)
#define MT8516_PIN_75_TDP3__FUNC_TDP3 (MTK_PIN_NO(75) | 1)

#define MT8516_PIN_76_TDN2__FUNC_GPI76 (MTK_PIN_NO(76) | 0)
#define MT8516_PIN_76_TDN2__FUNC_TDN2 (MTK_PIN_NO(76) | 1)

#define MT8516_PIN_77_TDP2__FUNC_GPI77 (MTK_PIN_NO(77) | 0)
#define MT8516_PIN_77_TDP2__FUNC_TDP2 (MTK_PIN_NO(77) | 1)

#define MT8516_PIN_78_TCN__FUNC_GPI78 (MTK_PIN_NO(78) | 0)
#define MT8516_PIN_78_TCN__FUNC_TCN (MTK_PIN_NO(78) | 1)

#define MT8516_PIN_79_TCP__FUNC_GPI79 (MTK_PIN_NO(79) | 0)
#define MT8516_PIN_79_TCP__FUNC_TCP (MTK_PIN_NO(79) | 1)

#define MT8516_PIN_80_TDN1__FUNC_GPI80 (MTK_PIN_NO(80) | 0)
#define MT8516_PIN_80_TDN1__FUNC_TDN1 (MTK_PIN_NO(80) | 1)

#define MT8516_PIN_81_TDP1__FUNC_GPI81 (MTK_PIN_NO(81) | 0)
#define MT8516_PIN_81_TDP1__FUNC_TDP1 (MTK_PIN_NO(81) | 1)

#define MT8516_PIN_82_TDN0__FUNC_GPI82 (MTK_PIN_NO(82) | 0)
#define MT8516_PIN_82_TDN0__FUNC_TDN0 (MTK_PIN_NO(82) | 1)

#define MT8516_PIN_83_TDP0__FUNC_GPI83 (MTK_PIN_NO(83) | 0)
#define MT8516_PIN_83_TDP0__FUNC_TDP0 (MTK_PIN_NO(83) | 1)

#define MT8516_PIN_84_RDN0__FUNC_GPI84 (MTK_PIN_NO(84) | 0)
#define MT8516_PIN_84_RDN0__FUNC_RDN0 (MTK_PIN_NO(84) | 1)

#define MT8516_PIN_85_RDP0__FUNC_GPI85 (MTK_PIN_NO(85) | 0)
#define MT8516_PIN_85_RDP0__FUNC_RDP0 (MTK_PIN_NO(85) | 1)

#define MT8516_PIN_86_RDN1__FUNC_GPI86 (MTK_PIN_NO(86) | 0)
#define MT8516_PIN_86_RDN1__FUNC_RDN1 (MTK_PIN_NO(86) | 1)

#define MT8516_PIN_87_RDP1__FUNC_GPI87 (MTK_PIN_NO(87) | 0)
#define MT8516_PIN_87_RDP1__FUNC_RDP1 (MTK_PIN_NO(87) | 1)

#define MT8516_PIN_88_RCN__FUNC_GPI88 (MTK_PIN_NO(88) | 0)
#define MT8516_PIN_88_RCN__FUNC_RCN (MTK_PIN_NO(88) | 1)

#define MT8516_PIN_89_RCP__FUNC_GPI89 (MTK_PIN_NO(89) | 0)
#define MT8516_PIN_89_RCP__FUNC_RCP (MTK_PIN_NO(89) | 1)

#define MT8516_PIN_90_RDN2__FUNC_GPI90 (MTK_PIN_NO(90) | 0)
#define MT8516_PIN_90_RDN2__FUNC_RDN2 (MTK_PIN_NO(90) | 1)
#define MT8516_PIN_90_RDN2__FUNC_CMDAT8 (MTK_PIN_NO(90) | 2)

#define MT8516_PIN_91_RDP2__FUNC_GPI91 (MTK_PIN_NO(91) | 0)
#define MT8516_PIN_91_RDP2__FUNC_RDP2 (MTK_PIN_NO(91) | 1)
#define MT8516_PIN_91_RDP2__FUNC_CMDAT9 (MTK_PIN_NO(91) | 2)

#define MT8516_PIN_92_RDN3__FUNC_GPI92 (MTK_PIN_NO(92) | 0)
#define MT8516_PIN_92_RDN3__FUNC_RDN3 (MTK_PIN_NO(92) | 1)
#define MT8516_PIN_92_RDN3__FUNC_CMDAT4 (MTK_PIN_NO(92) | 2)

#define MT8516_PIN_93_RDP3__FUNC_GPI93 (MTK_PIN_NO(93) | 0)
#define MT8516_PIN_93_RDP3__FUNC_RDP3 (MTK_PIN_NO(93) | 1)
#define MT8516_PIN_93_RDP3__FUNC_CMDAT5 (MTK_PIN_NO(93) | 2)

#define MT8516_PIN_94_RCN_A__FUNC_GPI94 (MTK_PIN_NO(94) | 0)
#define MT8516_PIN_94_RCN_A__FUNC_RCN_A (MTK_PIN_NO(94) | 1)
#define MT8516_PIN_94_RCN_A__FUNC_CMDAT6 (MTK_PIN_NO(94) | 2)

#define MT8516_PIN_95_RCP_A__FUNC_GPI95 (MTK_PIN_NO(95) | 0)
#define MT8516_PIN_95_RCP_A__FUNC_RCP_A (MTK_PIN_NO(95) | 1)
#define MT8516_PIN_95_RCP_A__FUNC_CMDAT7 (MTK_PIN_NO(95) | 2)

#define MT8516_PIN_96_RDN1_A__FUNC_GPI96 (MTK_PIN_NO(96) | 0)
#define MT8516_PIN_96_RDN1_A__FUNC_RDN1_A (MTK_PIN_NO(96) | 1)
#define MT8516_PIN_96_RDN1_A__FUNC_CMDAT2 (MTK_PIN_NO(96) | 2)
#define MT8516_PIN_96_RDN1_A__FUNC_CMCSD2 (MTK_PIN_NO(96) | 3)

#define MT8516_PIN_97_RDP1_A__FUNC_GPI97 (MTK_PIN_NO(97) | 0)
#define MT8516_PIN_97_RDP1_A__FUNC_RDP1_A (MTK_PIN_NO(97) | 1)
#define MT8516_PIN_97_RDP1_A__FUNC_CMDAT3 (MTK_PIN_NO(97) | 2)
#define MT8516_PIN_97_RDP1_A__FUNC_CMCSD3 (MTK_PIN_NO(97) | 3)

#define MT8516_PIN_98_RDN0_A__FUNC_GPI98 (MTK_PIN_NO(98) | 0)
#define MT8516_PIN_98_RDN0_A__FUNC_RDN0_A (MTK_PIN_NO(98) | 1)
#define MT8516_PIN_98_RDN0_A__FUNC_CMHSYNC (MTK_PIN_NO(98) | 2)

#define MT8516_PIN_99_RDP0_A__FUNC_GPI99 (MTK_PIN_NO(99) | 0)
#define MT8516_PIN_99_RDP0_A__FUNC_RDP0_A (MTK_PIN_NO(99) | 1)
#define MT8516_PIN_99_RDP0_A__FUNC_CMVSYNC (MTK_PIN_NO(99) | 2)

#define MT8516_PIN_100_CMDAT0__FUNC_GPIO100 (MTK_PIN_NO(100) | 0)
#define MT8516_PIN_100_CMDAT0__FUNC_CMDAT0 (MTK_PIN_NO(100) | 1)
#define MT8516_PIN_100_CMDAT0__FUNC_CMCSD0 (MTK_PIN_NO(100) | 2)
#define MT8516_PIN_100_CMDAT0__FUNC_ANT_SEL2 (MTK_PIN_NO(100) | 3)
#define MT8516_PIN_100_CMDAT0__FUNC_TDM_RX_MCK (MTK_PIN_NO(100) | 5)
#define MT8516_PIN_100_CMDAT0__FUNC_DBG_MON_B_21 (MTK_PIN_NO(100) | 7)

#define MT8516_PIN_101_CMDAT1__FUNC_GPIO101 (MTK_PIN_NO(101) | 0)
#define MT8516_PIN_101_CMDAT1__FUNC_CMDAT1 (MTK_PIN_NO(101) | 1)
#define MT8516_PIN_101_CMDAT1__FUNC_CMCSD1 (MTK_PIN_NO(101) | 2)
#define MT8516_PIN_101_CMDAT1__FUNC_ANT_SEL3 (MTK_PIN_NO(101) | 3)
#define MT8516_PIN_101_CMDAT1__FUNC_CMFLASH (MTK_PIN_NO(101) | 4)
#define MT8516_PIN_101_CMDAT1__FUNC_TDM_RX_BCK (MTK_PIN_NO(101) | 5)
#define MT8516_PIN_101_CMDAT1__FUNC_DBG_MON_B_22 (MTK_PIN_NO(101) | 7)

#define MT8516_PIN_102_CMMCLK__FUNC_GPIO102 (MTK_PIN_NO(102) | 0)
#define MT8516_PIN_102_CMMCLK__FUNC_CMMCLK (MTK_PIN_NO(102) | 1)
#define MT8516_PIN_102_CMMCLK__FUNC_ANT_SEL4 (MTK_PIN_NO(102) | 3)
#define MT8516_PIN_102_CMMCLK__FUNC_TDM_RX_LRCK (MTK_PIN_NO(102) | 5)
#define MT8516_PIN_102_CMMCLK__FUNC_DBG_MON_B_23 (MTK_PIN_NO(102) | 7)

#define MT8516_PIN_103_CMPCLK__FUNC_GPIO103 (MTK_PIN_NO(103) | 0)
#define MT8516_PIN_103_CMPCLK__FUNC_CMPCLK (MTK_PIN_NO(103) | 1)
#define MT8516_PIN_103_CMPCLK__FUNC_CMCSK (MTK_PIN_NO(103) | 2)
#define MT8516_PIN_103_CMPCLK__FUNC_ANT_SEL5 (MTK_PIN_NO(103) | 3)
#define MT8516_PIN_103_CMPCLK__FUNC_TDM_RX_DI (MTK_PIN_NO(103) | 5)
#define MT8516_PIN_103_CMPCLK__FUNC_DBG_MON_B_24 (MTK_PIN_NO(103) | 7)

#define MT8516_PIN_104_MSDC1_CMD__FUNC_GPIO104 (MTK_PIN_NO(104) | 0)
#define MT8516_PIN_104_MSDC1_CMD__FUNC_MSDC1_CMD (MTK_PIN_NO(104) | 1)
#define MT8516_PIN_104_MSDC1_CMD__FUNC_SQICS (MTK_PIN_NO(104) | 4)
#define MT8516_PIN_104_MSDC1_CMD__FUNC_DBG_MON_B_25 (MTK_PIN_NO(104) | 7)

#define MT8516_PIN_105_MSDC1_CLK__FUNC_GPIO105 (MTK_PIN_NO(105) | 0)
#define MT8516_PIN_105_MSDC1_CLK__FUNC_MSDC1_CLK (MTK_PIN_NO(105) | 1)
#define MT8516_PIN_105_MSDC1_CLK__FUNC_SQISO (MTK_PIN_NO(105) | 4)
#define MT8516_PIN_105_MSDC1_CLK__FUNC_DBG_MON_B_26 (MTK_PIN_NO(105) | 7)

#define MT8516_PIN_106_MSDC1_DAT0__FUNC_GPIO106 (MTK_PIN_NO(106) | 0)
#define MT8516_PIN_106_MSDC1_DAT0__FUNC_MSDC1_DAT0 (MTK_PIN_NO(106) | 1)
#define MT8516_PIN_106_MSDC1_DAT0__FUNC_SQISI (MTK_PIN_NO(106) | 4)
#define MT8516_PIN_106_MSDC1_DAT0__FUNC_DBG_MON_B_27 (MTK_PIN_NO(106) | 7)

#define MT8516_PIN_107_MSDC1_DAT1__FUNC_GPIO107 (MTK_PIN_NO(107) | 0)
#define MT8516_PIN_107_MSDC1_DAT1__FUNC_MSDC1_DAT1 (MTK_PIN_NO(107) | 1)
#define MT8516_PIN_107_MSDC1_DAT1__FUNC_SQIWP (MTK_PIN_NO(107) | 4)
#define MT8516_PIN_107_MSDC1_DAT1__FUNC_DBG_MON_B_28 (MTK_PIN_NO(107) | 7)

#define MT8516_PIN_108_MSDC1_DAT2__FUNC_GPIO108 (MTK_PIN_NO(108) | 0)
#define MT8516_PIN_108_MSDC1_DAT2__FUNC_MSDC1_DAT2 (MTK_PIN_NO(108) | 1)
#define MT8516_PIN_108_MSDC1_DAT2__FUNC_SQIRST (MTK_PIN_NO(108) | 4)
#define MT8516_PIN_108_MSDC1_DAT2__FUNC_DBG_MON_B_29 (MTK_PIN_NO(108) | 7)

#define MT8516_PIN_109_MSDC1_DAT3__FUNC_GPIO109 (MTK_PIN_NO(109) | 0)
#define MT8516_PIN_109_MSDC1_DAT3__FUNC_MSDC1_DAT3 (MTK_PIN_NO(109) | 1)
#define MT8516_PIN_109_MSDC1_DAT3__FUNC_SQICK (MTK_PIN_NO(109) | 4)
#define MT8516_PIN_109_MSDC1_DAT3__FUNC_DBG_MON_B_30 (MTK_PIN_NO(109) | 7)

#define MT8516_PIN_110_MSDC0_DAT7__FUNC_GPIO110 (MTK_PIN_NO(110) | 0)
#define MT8516_PIN_110_MSDC0_DAT7__FUNC_MSDC0_DAT7 (MTK_PIN_NO(110) | 1)
#define MT8516_PIN_110_MSDC0_DAT7__FUNC_NLD7 (MTK_PIN_NO(110) | 4)

#define MT8516_PIN_111_MSDC0_DAT6__FUNC_GPIO111 (MTK_PIN_NO(111) | 0)
#define MT8516_PIN_111_MSDC0_DAT6__FUNC_MSDC0_DAT6 (MTK_PIN_NO(111) | 1)
#define MT8516_PIN_111_MSDC0_DAT6__FUNC_NLD6 (MTK_PIN_NO(111) | 4)

#define MT8516_PIN_112_MSDC0_DAT5__FUNC_GPIO112 (MTK_PIN_NO(112) | 0)
#define MT8516_PIN_112_MSDC0_DAT5__FUNC_MSDC0_DAT5 (MTK_PIN_NO(112) | 1)
#define MT8516_PIN_112_MSDC0_DAT5__FUNC_NLD4 (MTK_PIN_NO(112) | 4)

#define MT8516_PIN_113_MSDC0_DAT4__FUNC_GPIO113 (MTK_PIN_NO(113) | 0)
#define MT8516_PIN_113_MSDC0_DAT4__FUNC_MSDC0_DAT4 (MTK_PIN_NO(113) | 1)
#define MT8516_PIN_113_MSDC0_DAT4__FUNC_NLD3 (MTK_PIN_NO(113) | 4)

#define MT8516_PIN_114_MSDC0_RSTB__FUNC_GPIO114 (MTK_PIN_NO(114) | 0)
#define MT8516_PIN_114_MSDC0_RSTB__FUNC_MSDC0_RSTB (MTK_PIN_NO(114) | 1)
#define MT8516_PIN_114_MSDC0_RSTB__FUNC_NLD0 (MTK_PIN_NO(114) | 4)

#define MT8516_PIN_115_MSDC0_CMD__FUNC_GPIO115 (MTK_PIN_NO(115) | 0)
#define MT8516_PIN_115_MSDC0_CMD__FUNC_MSDC0_CMD (MTK_PIN_NO(115) | 1)
#define MT8516_PIN_115_MSDC0_CMD__FUNC_NALE (MTK_PIN_NO(115) | 4)

#define MT8516_PIN_116_MSDC0_CLK__FUNC_GPIO116 (MTK_PIN_NO(116) | 0)
#define MT8516_PIN_116_MSDC0_CLK__FUNC_MSDC0_CLK (MTK_PIN_NO(116) | 1)
#define MT8516_PIN_116_MSDC0_CLK__FUNC_NWEB (MTK_PIN_NO(116) | 4)

#define MT8516_PIN_117_MSDC0_DAT3__FUNC_GPIO117 (MTK_PIN_NO(117) | 0)
#define MT8516_PIN_117_MSDC0_DAT3__FUNC_MSDC0_DAT3 (MTK_PIN_NO(117) | 1)
#define MT8516_PIN_117_MSDC0_DAT3__FUNC_NLD1 (MTK_PIN_NO(117) | 4)

#define MT8516_PIN_118_MSDC0_DAT2__FUNC_GPIO118 (MTK_PIN_NO(118) | 0)
#define MT8516_PIN_118_MSDC0_DAT2__FUNC_MSDC0_DAT2 (MTK_PIN_NO(118) | 1)
#define MT8516_PIN_118_MSDC0_DAT2__FUNC_NLD5 (MTK_PIN_NO(118) | 4)

#define MT8516_PIN_119_MSDC0_DAT1__FUNC_GPIO119 (MTK_PIN_NO(119) | 0)
#define MT8516_PIN_119_MSDC0_DAT1__FUNC_MSDC0_DAT1 (MTK_PIN_NO(119) | 1)
#define MT8516_PIN_119_MSDC0_DAT1__FUNC_NLD8 (MTK_PIN_NO(119) | 4)

#define MT8516_PIN_120_MSDC0_DAT0__FUNC_GPIO120 (MTK_PIN_NO(120) | 0)
#define MT8516_PIN_120_MSDC0_DAT0__FUNC_MSDC0_DAT0 (MTK_PIN_NO(120) | 1)
#define MT8516_PIN_120_MSDC0_DAT0__FUNC_WATCHDOG (MTK_PIN_NO(120) | 4)
#define MT8516_PIN_120_MSDC0_DAT0__FUNC_NLD2 (MTK_PIN_NO(120) | 5)

#endif				/* __DTS_MT8516_PINFUNC_H */
