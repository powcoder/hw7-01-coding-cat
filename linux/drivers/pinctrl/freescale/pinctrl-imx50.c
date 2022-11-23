https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0+
//
// imx50 pinctrl driver based on imx pinmux core
//
// Copyright (C) 2013 Greg Ungerer <gerg@uclinux.org>
// Copyright (C) 2012 Freescale Semiconductor, Inc.
// Copyright (C) 2012 Linaro, Inc.

#include <linux/err.h>
#include <linux/init.h>
#include <linux/io.h>
#include <linux/of.h>
#include <linux/of_device.h>
#include <linux/pinctrl/pinctrl.h>

#include "pinctrl-imx.h"

enum imx50_pads {
	MX50_PAD_RESERVE0 = 0,
	MX50_PAD_RESERVE1 = 1,
	MX50_PAD_RESERVE2 = 2,
	MX50_PAD_RESERVE3 = 3,
	MX50_PAD_RESERVE4 = 4,
	MX50_PAD_RESERVE5 = 5,
	MX50_PAD_RESERVE6 = 6,
	MX50_PAD_RESERVE7 = 7,
	MX50_PAD_KEY_COL0 = 8,
	MX50_PAD_KEY_ROW0 = 9,
	MX50_PAD_KEY_COL1 = 10,
	MX50_PAD_KEY_ROW1 = 11,
	MX50_PAD_KEY_COL2 = 12,
	MX50_PAD_KEY_ROW2 = 13,
	MX50_PAD_KEY_COL3 = 14,
	MX50_PAD_KEY_ROW3 = 15,
	MX50_PAD_I2C1_SCL = 16,
	MX50_PAD_I2C1_SDA = 17,
	MX50_PAD_I2C2_SCL = 18,
	MX50_PAD_I2C2_SDA = 19,
	MX50_PAD_I2C3_SCL = 20,
	MX50_PAD_I2C3_SDA = 21,
	MX50_PAD_PWM1 = 22,
	MX50_PAD_PWM2 = 23,
	MX50_PAD_0WIRE = 24,
	MX50_PAD_EPITO = 25,
	MX50_PAD_WDOG = 26,
	MX50_PAD_SSI_TXFS = 27,
	MX50_PAD_SSI_TXC = 28,
	MX50_PAD_SSI_TXD = 29,
	MX50_PAD_SSI_RXD = 30,
	MX50_PAD_SSI_RXF = 31,
	MX50_PAD_SSI_RXC = 32,
	MX50_PAD_UART1_TXD = 33,
	MX50_PAD_UART1_RXD = 34,
	MX50_PAD_UART1_CTS = 35,
	MX50_PAD_UART1_RTS = 36,
	MX50_PAD_UART2_TXD = 37,
	MX50_PAD_UART2_RXD = 38,
	MX50_PAD_UART2_CTS = 39,
	MX50_PAD_UART2_RTS = 40,
	MX50_PAD_UART3_TXD = 41,
	MX50_PAD_UART3_RXD = 42,
	MX50_PAD_UART4_TXD = 43,
	MX50_PAD_UART4_RXD = 44,
	MX50_PAD_CSPI_CLK = 45,
	MX50_PAD_CSPI_MOSI = 46,
	MX50_PAD_CSPI_MISO = 47,
	MX50_PAD_CSPI_SS0 = 48,
	MX50_PAD_ECSPI1_CLK = 49,
	MX50_PAD_ECSPI1_MOSI = 50,
	MX50_PAD_ECSPI1_MISO = 51,
	MX50_PAD_ECSPI1_SS0 = 52,
	MX50_PAD_ECSPI2_CLK = 53,
	MX50_PAD_ECSPI2_MOSI = 54,
	MX50_PAD_ECSPI2_MISO = 55,
	MX50_PAD_ECSPI2_SS0 = 56,
	MX50_PAD_SD1_CLK = 57,
	MX50_PAD_SD1_CMD = 58,
	MX50_PAD_SD1_D0 = 59,
	MX50_PAD_SD1_D1 = 60,
	MX50_PAD_SD1_D2 = 61,
	MX50_PAD_SD1_D3 = 62,
	MX50_PAD_SD2_CLK = 63,
	MX50_PAD_SD2_CMD = 64,
	MX50_PAD_SD2_D0 = 65,
	MX50_PAD_SD2_D1 = 66,
	MX50_PAD_SD2_D2 = 67,
	MX50_PAD_SD2_D3 = 68,
	MX50_PAD_SD2_D4 = 69,
	MX50_PAD_SD2_D5 = 70,
	MX50_PAD_SD2_D6 = 71,
	MX50_PAD_SD2_D7 = 72,
	MX50_PAD_SD2_WP = 73,
	MX50_PAD_SD2_CD = 74,
	MX50_PAD_DISP_D0 = 75,
	MX50_PAD_DISP_D1 = 76,
	MX50_PAD_DISP_D2 = 77,
	MX50_PAD_DISP_D3 = 78,
	MX50_PAD_DISP_D4 = 79,
	MX50_PAD_DISP_D5 = 80,
	MX50_PAD_DISP_D6 = 81,
	MX50_PAD_DISP_D7 = 82,
	MX50_PAD_DISP_WR = 83,
	MX50_PAD_DISP_RD = 84,
	MX50_PAD_DISP_RS = 85,
	MX50_PAD_DISP_CS = 86,
	MX50_PAD_DISP_BUSY = 87,
	MX50_PAD_DISP_RESET = 88,
	MX50_PAD_SD3_CLK = 89,
	MX50_PAD_SD3_CMD = 90,
	MX50_PAD_SD3_D0 = 91,
	MX50_PAD_SD3_D1 = 92,
	MX50_PAD_SD3_D2 = 93,
	MX50_PAD_SD3_D3 = 94,
	MX50_PAD_SD3_D4 = 95,
	MX50_PAD_SD3_D5 = 96,
	MX50_PAD_SD3_D6 = 97,
	MX50_PAD_SD3_D7 = 98,
	MX50_PAD_SD3_WP = 99,
	MX50_PAD_DISP_D8 = 100,
	MX50_PAD_DISP_D9 = 101,
	MX50_PAD_DISP_D10 = 102,
	MX50_PAD_DISP_D11 = 103,
	MX50_PAD_DISP_D12 = 104,
	MX50_PAD_DISP_D13 = 105,
	MX50_PAD_DISP_D14 = 106,
	MX50_PAD_DISP_D15 = 107,
	MX50_PAD_EPDC_D0 = 108,
	MX50_PAD_EPDC_D1 = 109,
	MX50_PAD_EPDC_D2 = 110,
	MX50_PAD_EPDC_D3 = 111,
	MX50_PAD_EPDC_D4 = 112,
	MX50_PAD_EPDC_D5 = 113,
	MX50_PAD_EPDC_D6 = 114,
	MX50_PAD_EPDC_D7 = 115,
	MX50_PAD_EPDC_D8 = 116,
	MX50_PAD_EPDC_D9 = 117,
	MX50_PAD_EPDC_D10 = 118,
	MX50_PAD_EPDC_D11 = 119,
	MX50_PAD_EPDC_D12 = 120,
	MX50_PAD_EPDC_D13 = 121,
	MX50_PAD_EPDC_D14 = 122,
	MX50_PAD_EPDC_D15 = 123,
	MX50_PAD_EPDC_GDCLK = 124,
	MX50_PAD_EPDC_GDSP = 125,
	MX50_PAD_EPDC_GDOE = 126,
	MX50_PAD_EPDC_GDRL = 127,
	MX50_PAD_EPDC_SDCLK = 128,
	MX50_PAD_EPDC_SDOEZ = 129,
	MX50_PAD_EPDC_SDOED = 130,
	MX50_PAD_EPDC_SDOE = 131,
	MX50_PAD_EPDC_SDLE = 132,
	MX50_PAD_EPDC_SDCLKN = 133,
	MX50_PAD_EPDC_SDSHR = 134,
	MX50_PAD_EPDC_PWRCOM = 135,
	MX50_PAD_EPDC_PWRSTAT = 136,
	MX50_PAD_EPDC_PWRCTRL0 = 137,
	MX50_PAD_EPDC_PWRCTRL1 = 138,
	MX50_PAD_EPDC_PWRCTRL2 = 139,
	MX50_PAD_EPDC_PWRCTRL3 = 140,
	MX50_PAD_EPDC_VCOM0 = 141,
	MX50_PAD_EPDC_VCOM1 = 142,
	MX50_PAD_EPDC_BDR0 = 143,
	MX50_PAD_EPDC_BDR1 = 144,
	MX50_PAD_EPDC_SDCE0 = 145,
	MX50_PAD_EPDC_SDCE1 = 146,
	MX50_PAD_EPDC_SDCE2 = 147,
	MX50_PAD_EPDC_SDCE3 = 148,
	MX50_PAD_EPDC_SDCE4 = 149,
	MX50_PAD_EPDC_SDCE5 = 150,
	MX50_PAD_EIM_DA0 = 151,
	MX50_PAD_EIM_DA1 = 152,
	MX50_PAD_EIM_DA2 = 153,
	MX50_PAD_EIM_DA3 = 154,
	MX50_PAD_EIM_DA4 = 155,
	MX50_PAD_EIM_DA5 = 156,
	MX50_PAD_EIM_DA6 = 157,
	MX50_PAD_EIM_DA7 = 158,
	MX50_PAD_EIM_DA8 = 159,
	MX50_PAD_EIM_DA9 = 160,
	MX50_PAD_EIM_DA10 = 161,
	MX50_PAD_EIM_DA11 = 162,
	MX50_PAD_EIM_DA12 = 163,
	MX50_PAD_EIM_DA13 = 164,
	MX50_PAD_EIM_DA14 = 165,
	MX50_PAD_EIM_DA15 = 166,
	MX50_PAD_EIM_CS2 = 167,
	MX50_PAD_EIM_CS1 = 168,
	MX50_PAD_EIM_CS0 = 169,
	MX50_PAD_EIM_EB0 = 170,
	MX50_PAD_EIM_EB1 = 171,
	MX50_PAD_EIM_WAIT = 172,
	MX50_PAD_EIM_BCLK = 173,
	MX50_PAD_EIM_RDY = 174,
	MX50_PAD_EIM_OE = 175,
	MX50_PAD_EIM_RW = 176,
	MX50_PAD_EIM_LBA = 177,
	MX50_PAD_EIM_CRE = 178,
};

/* Pad names for the pinmux subsystem */
static const struct pinctrl_pin_desc imx50_pinctrl_pads[] = {
	IMX_PINCTRL_PIN(MX50_PAD_RESERVE0),
	IMX_PINCTRL_PIN(MX50_PAD_RESERVE1),
	IMX_PINCTRL_PIN(MX50_PAD_RESERVE2),
	IMX_PINCTRL_PIN(MX50_PAD_RESERVE3),
	IMX_PINCTRL_PIN(MX50_PAD_RESERVE4),
	IMX_PINCTRL_PIN(MX50_PAD_RESERVE5),
	IMX_PINCTRL_PIN(MX50_PAD_RESERVE6),
	IMX_PINCTRL_PIN(MX50_PAD_RESERVE7),
	IMX_PINCTRL_PIN(MX50_PAD_KEY_COL0),
	IMX_PINCTRL_PIN(MX50_PAD_KEY_ROW0),
	IMX_PINCTRL_PIN(MX50_PAD_KEY_COL1),
	IMX_PINCTRL_PIN(MX50_PAD_KEY_ROW1),
	IMX_PINCTRL_PIN(MX50_PAD_KEY_COL2),
	IMX_PINCTRL_PIN(MX50_PAD_KEY_ROW2),
	IMX_PINCTRL_PIN(MX50_PAD_KEY_COL3),
	IMX_PINCTRL_PIN(MX50_PAD_KEY_ROW3),
	IMX_PINCTRL_PIN(MX50_PAD_I2C1_SCL),
	IMX_PINCTRL_PIN(MX50_PAD_I2C1_SDA),
	IMX_PINCTRL_PIN(MX50_PAD_I2C2_SCL),
	IMX_PINCTRL_PIN(MX50_PAD_I2C2_SDA),
	IMX_PINCTRL_PIN(MX50_PAD_I2C3_SCL),
	IMX_PINCTRL_PIN(MX50_PAD_I2C3_SDA),
	IMX_PINCTRL_PIN(MX50_PAD_PWM1),
	IMX_PINCTRL_PIN(MX50_PAD_PWM2),
	IMX_PINCTRL_PIN(MX50_PAD_0WIRE),
	IMX_PINCTRL_PIN(MX50_PAD_EPITO),
	IMX_PINCTRL_PIN(MX50_PAD_WDOG),
	IMX_PINCTRL_PIN(MX50_PAD_SSI_TXFS),
	IMX_PINCTRL_PIN(MX50_PAD_SSI_TXC),
	IMX_PINCTRL_PIN(MX50_PAD_SSI_TXD),
	IMX_PINCTRL_PIN(MX50_PAD_SSI_RXD),
	IMX_PINCTRL_PIN(MX50_PAD_SSI_RXF),
	IMX_PINCTRL_PIN(MX50_PAD_SSI_RXC),
	IMX_PINCTRL_PIN(MX50_PAD_UART1_TXD),
	IMX_PINCTRL_PIN(MX50_PAD_UART1_RXD),
	IMX_PINCTRL_PIN(MX50_PAD_UART1_CTS),
	IMX_PINCTRL_PIN(MX50_PAD_UART1_RTS),
	IMX_PINCTRL_PIN(MX50_PAD_UART2_TXD),
	IMX_PINCTRL_PIN(MX50_PAD_UART2_RXD),
	IMX_PINCTRL_PIN(MX50_PAD_UART2_CTS),
	IMX_PINCTRL_PIN(MX50_PAD_UART2_RTS),
	IMX_PINCTRL_PIN(MX50_PAD_UART3_TXD),
	IMX_PINCTRL_PIN(MX50_PAD_UART3_RXD),
	IMX_PINCTRL_PIN(MX50_PAD_UART4_TXD),
	IMX_PINCTRL_PIN(MX50_PAD_UART4_RXD),
	IMX_PINCTRL_PIN(MX50_PAD_CSPI_CLK),
	IMX_PINCTRL_PIN(MX50_PAD_CSPI_MOSI),
	IMX_PINCTRL_PIN(MX50_PAD_CSPI_MISO),
	IMX_PINCTRL_PIN(MX50_PAD_CSPI_SS0),
	IMX_PINCTRL_PIN(MX50_PAD_ECSPI1_CLK),
	IMX_PINCTRL_PIN(MX50_PAD_ECSPI1_MOSI),
	IMX_PINCTRL_PIN(MX50_PAD_ECSPI1_MISO),
	IMX_PINCTRL_PIN(MX50_PAD_ECSPI1_SS0),
	IMX_PINCTRL_PIN(MX50_PAD_ECSPI2_CLK),
	IMX_PINCTRL_PIN(MX50_PAD_ECSPI2_MOSI),
	IMX_PINCTRL_PIN(MX50_PAD_ECSPI2_MISO),
	IMX_PINCTRL_PIN(MX50_PAD_ECSPI2_SS0),
	IMX_PINCTRL_PIN(MX50_PAD_SD1_CLK),
	IMX_PINCTRL_PIN(MX50_PAD_SD1_CMD),
	IMX_PINCTRL_PIN(MX50_PAD_SD1_D0),
	IMX_PINCTRL_PIN(MX50_PAD_SD1_D1),
	IMX_PINCTRL_PIN(MX50_PAD_SD1_D2),
	IMX_PINCTRL_PIN(MX50_PAD_SD1_D3),
	IMX_PINCTRL_PIN(MX50_PAD_SD2_CLK),
	IMX_PINCTRL_PIN(MX50_PAD_SD2_CMD),
	IMX_PINCTRL_PIN(MX50_PAD_SD2_D0),
	IMX_PINCTRL_PIN(MX50_PAD_SD2_D1),
	IMX_PINCTRL_PIN(MX50_PAD_SD2_D2),
	IMX_PINCTRL_PIN(MX50_PAD_SD2_D3),
	IMX_PINCTRL_PIN(MX50_PAD_SD2_D4),
	IMX_PINCTRL_PIN(MX50_PAD_SD2_D5),
	IMX_PINCTRL_PIN(MX50_PAD_SD2_D6),
	IMX_PINCTRL_PIN(MX50_PAD_SD2_D7),
	IMX_PINCTRL_PIN(MX50_PAD_SD2_WP),
	IMX_PINCTRL_PIN(MX50_PAD_SD2_CD),
	IMX_PINCTRL_PIN(MX50_PAD_DISP_D0),
	IMX_PINCTRL_PIN(MX50_PAD_DISP_D1),
	IMX_PINCTRL_PIN(MX50_PAD_DISP_D2),
	IMX_PINCTRL_PIN(MX50_PAD_DISP_D3),
	IMX_PINCTRL_PIN(MX50_PAD_DISP_D4),
	IMX_PINCTRL_PIN(MX50_PAD_DISP_D5),
	IMX_PINCTRL_PIN(MX50_PAD_DISP_D6),
	IMX_PINCTRL_PIN(MX50_PAD_DISP_D7),
	IMX_PINCTRL_PIN(MX50_PAD_DISP_WR),
	IMX_PINCTRL_PIN(MX50_PAD_DISP_RD),
	IMX_PINCTRL_PIN(MX50_PAD_DISP_RS),
	IMX_PINCTRL_PIN(MX50_PAD_DISP_CS),
	IMX_PINCTRL_PIN(MX50_PAD_DISP_BUSY),
	IMX_PINCTRL_PIN(MX50_PAD_DISP_RESET),
	IMX_PINCTRL_PIN(MX50_PAD_SD3_CLK),
	IMX_PINCTRL_PIN(MX50_PAD_SD3_CMD),
	IMX_PINCTRL_PIN(MX50_PAD_SD3_D0),
	IMX_PINCTRL_PIN(MX50_PAD_SD3_D1),
	IMX_PINCTRL_PIN(MX50_PAD_SD3_D2),
	IMX_PINCTRL_PIN(MX50_PAD_SD3_D3),
	IMX_PINCTRL_PIN(MX50_PAD_SD3_D4),
	IMX_PINCTRL_PIN(MX50_PAD_SD3_D5),
	IMX_PINCTRL_PIN(MX50_PAD_SD3_D6),
	IMX_PINCTRL_PIN(MX50_PAD_SD3_D7),
	IMX_PINCTRL_PIN(MX50_PAD_SD3_WP),
	IMX_PINCTRL_PIN(MX50_PAD_DISP_D8),
	IMX_PINCTRL_PIN(MX50_PAD_DISP_D9),
	IMX_PINCTRL_PIN(MX50_PAD_DISP_D10),
	IMX_PINCTRL_PIN(MX50_PAD_DISP_D11),
	IMX_PINCTRL_PIN(MX50_PAD_DISP_D12),
	IMX_PINCTRL_PIN(MX50_PAD_DISP_D13),
	IMX_PINCTRL_PIN(MX50_PAD_DISP_D14),
	IMX_PINCTRL_PIN(MX50_PAD_DISP_D15),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_D0),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_D1),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_D2),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_D3),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_D4),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_D5),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_D6),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_D7),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_D8),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_D9),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_D10),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_D11),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_D12),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_D13),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_D14),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_D15),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_GDCLK),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_GDSP),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_GDOE),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_GDRL),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_SDCLK),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_SDOEZ),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_SDOED),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_SDOE),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_SDLE),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_SDCLKN),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_SDSHR),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_PWRCOM),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_PWRSTAT),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_PWRCTRL0),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_PWRCTRL1),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_PWRCTRL2),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_PWRCTRL3),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_VCOM0),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_VCOM1),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_BDR0),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_BDR1),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_SDCE0),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_SDCE1),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_SDCE2),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_SDCE3),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_SDCE4),
	IMX_PINCTRL_PIN(MX50_PAD_EPDC_SDCE5),
	IMX_PINCTRL_PIN(MX50_PAD_EIM_DA0),
	IMX_PINCTRL_PIN(MX50_PAD_EIM_DA1),
	IMX_PINCTRL_PIN(MX50_PAD_EIM_DA2),
	IMX_PINCTRL_PIN(MX50_PAD_EIM_DA3),
	IMX_PINCTRL_PIN(MX50_PAD_EIM_DA4),
	IMX_PINCTRL_PIN(MX50_PAD_EIM_DA5),
	IMX_PINCTRL_PIN(MX50_PAD_EIM_DA6),
	IMX_PINCTRL_PIN(MX50_PAD_EIM_DA7),
	IMX_PINCTRL_PIN(MX50_PAD_EIM_DA8),
	IMX_PINCTRL_PIN(MX50_PAD_EIM_DA9),
	IMX_PINCTRL_PIN(MX50_PAD_EIM_DA10),
	IMX_PINCTRL_PIN(MX50_PAD_EIM_DA11),
	IMX_PINCTRL_PIN(MX50_PAD_EIM_DA12),
	IMX_PINCTRL_PIN(MX50_PAD_EIM_DA13),
	IMX_PINCTRL_PIN(MX50_PAD_EIM_DA14),
	IMX_PINCTRL_PIN(MX50_PAD_EIM_DA15),
	IMX_PINCTRL_PIN(MX50_PAD_EIM_CS2),
	IMX_PINCTRL_PIN(MX50_PAD_EIM_CS1),
	IMX_PINCTRL_PIN(MX50_PAD_EIM_CS0),
	IMX_PINCTRL_PIN(MX50_PAD_EIM_EB0),
	IMX_PINCTRL_PIN(MX50_PAD_EIM_EB1),
	IMX_PINCTRL_PIN(MX50_PAD_EIM_WAIT),
	IMX_PINCTRL_PIN(MX50_PAD_EIM_BCLK),
	IMX_PINCTRL_PIN(MX50_PAD_EIM_RDY),
	IMX_PINCTRL_PIN(MX50_PAD_EIM_OE),
	IMX_PINCTRL_PIN(MX50_PAD_EIM_RW),
	IMX_PINCTRL_PIN(MX50_PAD_EIM_LBA),
	IMX_PINCTRL_PIN(MX50_PAD_EIM_CRE),
};

static const struct imx_pinctrl_soc_info imx50_pinctrl_info = {
	.pins = imx50_pinctrl_pads,
	.npins = ARRAY_SIZE(imx50_pinctrl_pads),
	.gpr_compatible = "fsl,imx50-iomuxc-gpr",
};

static const struct of_device_id imx50_pinctrl_of_match[] = {
	{ .compatible = "fsl,imx50-iomuxc", },
	{ /* sentinel */ }
};

static int imx50_pinctrl_probe(struct platform_device *pdev)
{
	return imx_pinctrl_probe(pdev, &imx50_pinctrl_info);
}

static struct platform_driver imx50_pinctrl_driver = {
	.driver = {
		.name = "imx50-pinctrl",
		.of_match_table = of_match_ptr(imx50_pinctrl_of_match),
	},
	.probe = imx50_pinctrl_probe,
};

static int __init imx50_pinctrl_init(void)
{
	return platform_driver_register(&imx50_pinctrl_driver);
}
arch_initcall(imx50_pinctrl_init);