https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright 2018-2019 NXP
 */

#include <linux/err.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/of.h>
#include <linux/pinctrl/pinctrl.h>
#include <linux/platform_device.h>

#include "pinctrl-imx.h"

enum imx8mn_pads {
	MX8MN_PAD_RESERVE0 = 0,
	MX8MN_PAD_RESERVE1 = 1,
	MX8MN_PAD_RESERVE2 = 2,
	MX8MN_PAD_RESERVE3 = 3,
	MX8MN_PAD_RESERVE4 = 4,
	MX8MN_PAD_RESERVE5 = 5,
	MX8MN_PAD_RESERVE6 = 6,
	MX8MN_PAD_RESERVE7 = 7,
	MX8MN_IOMUXC_BOOT_MODE2 = 8,
	MX8MN_IOMUXC_BOOT_MODE3 = 9,
	MX8MN_IOMUXC_GPIO1_IO00 = 10,
	MX8MN_IOMUXC_GPIO1_IO01 = 11,
	MX8MN_IOMUXC_GPIO1_IO02 = 12,
	MX8MN_IOMUXC_GPIO1_IO03 = 13,
	MX8MN_IOMUXC_GPIO1_IO04 = 14,
	MX8MN_IOMUXC_GPIO1_IO05 = 15,
	MX8MN_IOMUXC_GPIO1_IO06 = 16,
	MX8MN_IOMUXC_GPIO1_IO07 = 17,
	MX8MN_IOMUXC_GPIO1_IO08 = 18,
	MX8MN_IOMUXC_GPIO1_IO09 = 19,
	MX8MN_IOMUXC_GPIO1_IO10 = 20,
	MX8MN_IOMUXC_GPIO1_IO11 = 21,
	MX8MN_IOMUXC_GPIO1_IO12 = 22,
	MX8MN_IOMUXC_GPIO1_IO13 = 23,
	MX8MN_IOMUXC_GPIO1_IO14 = 24,
	MX8MN_IOMUXC_GPIO1_IO15 = 25,
	MX8MN_IOMUXC_ENET_MDC = 26,
	MX8MN_IOMUXC_ENET_MDIO = 27,
	MX8MN_IOMUXC_ENET_TD3 = 28,
	MX8MN_IOMUXC_ENET_TD2 = 29,
	MX8MN_IOMUXC_ENET_TD1 = 30,
	MX8MN_IOMUXC_ENET_TD0 = 31,
	MX8MN_IOMUXC_ENET_TX_CTL = 32,
	MX8MN_IOMUXC_ENET_TXC = 33,
	MX8MN_IOMUXC_ENET_RX_CTL = 34,
	MX8MN_IOMUXC_ENET_RXC = 35,
	MX8MN_IOMUXC_ENET_RD0 = 36,
	MX8MN_IOMUXC_ENET_RD1 = 37,
	MX8MN_IOMUXC_ENET_RD2 = 38,
	MX8MN_IOMUXC_ENET_RD3 = 39,
	MX8MN_IOMUXC_SD1_CLK = 40,
	MX8MN_IOMUXC_SD1_CMD = 41,
	MX8MN_IOMUXC_SD1_DATA0 = 42,
	MX8MN_IOMUXC_SD1_DATA1 = 43,
	MX8MN_IOMUXC_SD1_DATA2 = 44,
	MX8MN_IOMUXC_SD1_DATA3 = 45,
	MX8MN_IOMUXC_SD1_DATA4 = 46,
	MX8MN_IOMUXC_SD1_DATA5 = 47,
	MX8MN_IOMUXC_SD1_DATA6 = 48,
	MX8MN_IOMUXC_SD1_DATA7 = 49,
	MX8MN_IOMUXC_SD1_RESET_B = 50,
	MX8MN_IOMUXC_SD1_STROBE = 51,
	MX8MN_IOMUXC_SD2_CD_B = 52,
	MX8MN_IOMUXC_SD2_CLK = 53,
	MX8MN_IOMUXC_SD2_CMD = 54,
	MX8MN_IOMUXC_SD2_DATA0 = 55,
	MX8MN_IOMUXC_SD2_DATA1 = 56,
	MX8MN_IOMUXC_SD2_DATA2 = 57,
	MX8MN_IOMUXC_SD2_DATA3 = 58,
	MX8MN_IOMUXC_SD2_RESET_B = 59,
	MX8MN_IOMUXC_SD2_WP = 60,
	MX8MN_IOMUXC_NAND_ALE = 61,
	MX8MN_IOMUXC_NAND_CE0 = 62,
	MX8MN_IOMUXC_NAND_CE1 = 63,
	MX8MN_IOMUXC_NAND_CE2 = 64,
	MX8MN_IOMUXC_NAND_CE3 = 65,
	MX8MN_IOMUXC_NAND_CLE = 66,
	MX8MN_IOMUXC_NAND_DATA00 = 67,
	MX8MN_IOMUXC_NAND_DATA01 = 68,
	MX8MN_IOMUXC_NAND_DATA02 = 69,
	MX8MN_IOMUXC_NAND_DATA03 = 70,
	MX8MN_IOMUXC_NAND_DATA04 = 71,
	MX8MN_IOMUXC_NAND_DATA05 = 72,
	MX8MN_IOMUXC_NAND_DATA06 = 73,
	MX8MN_IOMUXC_NAND_DATA07 = 74,
	MX8MN_IOMUXC_NAND_DQS = 75,
	MX8MN_IOMUXC_NAND_RE_B = 76,
	MX8MN_IOMUXC_NAND_READY_B = 77,
	MX8MN_IOMUXC_NAND_WE_B = 78,
	MX8MN_IOMUXC_NAND_WP_B = 79,
	MX8MN_IOMUXC_SAI5_RXFS = 80,
	MX8MN_IOMUXC_SAI5_RXC = 81,
	MX8MN_IOMUXC_SAI5_RXD0 = 82,
	MX8MN_IOMUXC_SAI5_RXD1 = 83,
	MX8MN_IOMUXC_SAI5_RXD2 = 84,
	MX8MN_IOMUXC_SAI5_RXD3 = 85,
	MX8MN_IOMUXC_SAI5_MCLK = 86,
	MX8MN_IOMUXC_SAI1_RXFS = 87,
	MX8MN_IOMUXC_SAI1_RXC = 88,
	MX8MN_IOMUXC_SAI1_RXD0 = 89,
	MX8MN_IOMUXC_SAI1_RXD1 = 90,
	MX8MN_IOMUXC_SAI1_RXD2 = 91,
	MX8MN_IOMUXC_SAI1_RXD3 = 92,
	MX8MN_IOMUXC_SAI1_RXD4 = 93,
	MX8MN_IOMUXC_SAI1_RXD5 = 94,
	MX8MN_IOMUXC_SAI1_RXD6 = 95,
	MX8MN_IOMUXC_SAI1_RXD7 = 96,
	MX8MN_IOMUXC_SAI1_TXFS = 97,
	MX8MN_IOMUXC_SAI1_TXC = 98,
	MX8MN_IOMUXC_SAI1_TXD0 = 99,
	MX8MN_IOMUXC_SAI1_TXD1 = 100,
	MX8MN_IOMUXC_SAI1_TXD2 = 101,
	MX8MN_IOMUXC_SAI1_TXD3 = 102,
	MX8MN_IOMUXC_SAI1_TXD4 = 103,
	MX8MN_IOMUXC_SAI1_TXD5 = 104,
	MX8MN_IOMUXC_SAI1_TXD6 = 105,
	MX8MN_IOMUXC_SAI1_TXD7 = 106,
	MX8MN_IOMUXC_SAI1_MCLK = 107,
	MX8MN_IOMUXC_SAI2_RXFS = 108,
	MX8MN_IOMUXC_SAI2_RXC = 109,
	MX8MN_IOMUXC_SAI2_RXD0 = 110,
	MX8MN_IOMUXC_SAI2_TXFS = 111,
	MX8MN_IOMUXC_SAI2_TXC = 112,
	MX8MN_IOMUXC_SAI2_TXD0 = 113,
	MX8MN_IOMUXC_SAI2_MCLK = 114,
	MX8MN_IOMUXC_SAI3_RXFS = 115,
	MX8MN_IOMUXC_SAI3_RXC = 116,
	MX8MN_IOMUXC_SAI3_RXD = 117,
	MX8MN_IOMUXC_SAI3_TXFS = 118,
	MX8MN_IOMUXC_SAI3_TXC = 119,
	MX8MN_IOMUXC_SAI3_TXD = 120,
	MX8MN_IOMUXC_SAI3_MCLK = 121,
	MX8MN_IOMUXC_SPDIF_TX = 122,
	MX8MN_IOMUXC_SPDIF_RX = 123,
	MX8MN_IOMUXC_SPDIF_EXT_CLK = 124,
	MX8MN_IOMUXC_ECSPI1_SCLK = 125,
	MX8MN_IOMUXC_ECSPI1_MOSI = 126,
	MX8MN_IOMUXC_ECSPI1_MISO = 127,
	MX8MN_IOMUXC_ECSPI1_SS0 = 128,
	MX8MN_IOMUXC_ECSPI2_SCLK = 129,
	MX8MN_IOMUXC_ECSPI2_MOSI = 130,
	MX8MN_IOMUXC_ECSPI2_MISO = 131,
	MX8MN_IOMUXC_ECSPI2_SS0 = 132,
	MX8MN_IOMUXC_I2C1_SCL = 133,
	MX8MN_IOMUXC_I2C1_SDA = 134,
	MX8MN_IOMUXC_I2C2_SCL = 135,
	MX8MN_IOMUXC_I2C2_SDA = 136,
	MX8MN_IOMUXC_I2C3_SCL = 137,
	MX8MN_IOMUXC_I2C3_SDA = 138,
	MX8MN_IOMUXC_I2C4_SCL = 139,
	MX8MN_IOMUXC_I2C4_SDA = 140,
	MX8MN_IOMUXC_UART1_RXD = 141,
	MX8MN_IOMUXC_UART1_TXD = 142,
	MX8MN_IOMUXC_UART2_RXD = 143,
	MX8MN_IOMUXC_UART2_TXD = 144,
	MX8MN_IOMUXC_UART3_RXD = 145,
	MX8MN_IOMUXC_UART3_TXD = 146,
	MX8MN_IOMUXC_UART4_RXD = 147,
	MX8MN_IOMUXC_UART4_TXD = 148,
};

/* Pad names for the pinmux subsystem */
static const struct pinctrl_pin_desc imx8mn_pinctrl_pads[] = {
	IMX_PINCTRL_PIN(MX8MN_PAD_RESERVE0),
	IMX_PINCTRL_PIN(MX8MN_PAD_RESERVE1),
	IMX_PINCTRL_PIN(MX8MN_PAD_RESERVE2),
	IMX_PINCTRL_PIN(MX8MN_PAD_RESERVE3),
	IMX_PINCTRL_PIN(MX8MN_PAD_RESERVE4),
	IMX_PINCTRL_PIN(MX8MN_PAD_RESERVE5),
	IMX_PINCTRL_PIN(MX8MN_PAD_RESERVE6),
	IMX_PINCTRL_PIN(MX8MN_PAD_RESERVE7),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_BOOT_MODE2),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_BOOT_MODE3),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_GPIO1_IO00),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_GPIO1_IO01),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_GPIO1_IO02),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_GPIO1_IO03),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_GPIO1_IO04),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_GPIO1_IO05),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_GPIO1_IO06),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_GPIO1_IO07),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_GPIO1_IO08),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_GPIO1_IO09),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_GPIO1_IO10),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_GPIO1_IO11),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_GPIO1_IO12),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_GPIO1_IO13),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_GPIO1_IO14),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_GPIO1_IO15),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_ENET_MDC),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_ENET_MDIO),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_ENET_TD3),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_ENET_TD2),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_ENET_TD1),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_ENET_TD0),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_ENET_TX_CTL),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_ENET_TXC),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_ENET_RX_CTL),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_ENET_RXC),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_ENET_RD0),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_ENET_RD1),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_ENET_RD2),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_ENET_RD3),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SD1_CLK),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SD1_CMD),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SD1_DATA0),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SD1_DATA1),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SD1_DATA2),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SD1_DATA3),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SD1_DATA4),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SD1_DATA5),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SD1_DATA6),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SD1_DATA7),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SD1_RESET_B),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SD1_STROBE),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SD2_CD_B),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SD2_CLK),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SD2_CMD),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SD2_DATA0),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SD2_DATA1),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SD2_DATA2),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SD2_DATA3),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SD2_RESET_B),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SD2_WP),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_NAND_ALE),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_NAND_CE0),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_NAND_CE1),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_NAND_CE2),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_NAND_CE3),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_NAND_CLE),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_NAND_DATA00),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_NAND_DATA01),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_NAND_DATA02),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_NAND_DATA03),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_NAND_DATA04),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_NAND_DATA05),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_NAND_DATA06),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_NAND_DATA07),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_NAND_DQS),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_NAND_RE_B),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_NAND_READY_B),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_NAND_WE_B),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_NAND_WP_B),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI5_RXFS),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI5_RXC),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI5_RXD0),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI5_RXD1),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI5_RXD2),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI5_RXD3),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI5_MCLK),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI1_RXFS),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI1_RXC),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI1_RXD0),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI1_RXD1),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI1_RXD2),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI1_RXD3),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI1_RXD4),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI1_RXD5),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI1_RXD6),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI1_RXD7),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI1_TXFS),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI1_TXC),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI1_TXD0),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI1_TXD1),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI1_TXD2),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI1_TXD3),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI1_TXD4),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI1_TXD5),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI1_TXD6),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI1_TXD7),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI1_MCLK),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI2_RXFS),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI2_RXC),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI2_RXD0),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI2_TXFS),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI2_TXC),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI2_TXD0),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI2_MCLK),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI3_RXFS),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI3_RXC),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI3_RXD),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI3_TXFS),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI3_TXC),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI3_TXD),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SAI3_MCLK),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SPDIF_TX),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SPDIF_RX),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_SPDIF_EXT_CLK),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_ECSPI1_SCLK),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_ECSPI1_MOSI),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_ECSPI1_MISO),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_ECSPI1_SS0),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_ECSPI2_SCLK),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_ECSPI2_MOSI),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_ECSPI2_MISO),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_ECSPI2_SS0),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_I2C1_SCL),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_I2C1_SDA),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_I2C2_SCL),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_I2C2_SDA),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_I2C3_SCL),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_I2C3_SDA),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_I2C4_SCL),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_I2C4_SDA),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_UART1_RXD),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_UART1_TXD),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_UART2_RXD),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_UART2_TXD),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_UART3_RXD),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_UART3_TXD),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_UART4_RXD),
	IMX_PINCTRL_PIN(MX8MN_IOMUXC_UART4_TXD),
};

static struct imx_pinctrl_soc_info imx8mn_pinctrl_info = {
	.pins = imx8mn_pinctrl_pads,
	.npins = ARRAY_SIZE(imx8mn_pinctrl_pads),
	.gpr_compatible = "fsl,imx8mn-iomuxc-gpr",
};

static const struct of_device_id imx8mn_pinctrl_of_match[] = {
	{ .compatible = "fsl,imx8mn-iomuxc", .data = &imx8mn_pinctrl_info, },
	{ /* sentinel */ }
};
MODULE_DEVICE_TABLE(of, imx8mn_pinctrl_of_match);

static int imx8mn_pinctrl_probe(struct platform_device *pdev)
{
	return imx_pinctrl_probe(pdev, &imx8mn_pinctrl_info);
}

static struct platform_driver imx8mn_pinctrl_driver = {
	.driver = {
		.name = "imx8mn-pinctrl",
		.of_match_table = of_match_ptr(imx8mn_pinctrl_of_match),
		.suppress_bind_attrs = true,
	},
	.probe = imx8mn_pinctrl_probe,
};

static int __init imx8mn_pinctrl_init(void)
{
	return platform_driver_register(&imx8mn_pinctrl_driver);
}
arch_initcall(imx8mn_pinctrl_init);

MODULE_AUTHOR("Anson Huang <Anson.Huang@nxp.com>");
MODULE_DESCRIPTION("NXP i.MX8MN pinctrl driver");
MODULE_LICENSE("GPL v2");
