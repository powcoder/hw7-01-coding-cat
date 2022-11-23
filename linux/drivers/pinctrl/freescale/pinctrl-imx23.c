https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0+
//
// Freescale i.MX23 pinctrl driver
//
// Author: Shawn Guo <shawn.guo@linaro.org>
// Copyright 2012 Freescale Semiconductor, Inc.

#include <linux/init.h>
#include <linux/of_device.h>
#include <linux/pinctrl/pinctrl.h>
#include "pinctrl-mxs.h"

enum imx23_pin_enum {
	GPMI_D00	= PINID(0, 0),
	GPMI_D01	= PINID(0, 1),
	GPMI_D02	= PINID(0, 2),
	GPMI_D03	= PINID(0, 3),
	GPMI_D04	= PINID(0, 4),
	GPMI_D05	= PINID(0, 5),
	GPMI_D06	= PINID(0, 6),
	GPMI_D07	= PINID(0, 7),
	GPMI_D08	= PINID(0, 8),
	GPMI_D09	= PINID(0, 9),
	GPMI_D10	= PINID(0, 10),
	GPMI_D11	= PINID(0, 11),
	GPMI_D12	= PINID(0, 12),
	GPMI_D13	= PINID(0, 13),
	GPMI_D14	= PINID(0, 14),
	GPMI_D15	= PINID(0, 15),
	GPMI_CLE	= PINID(0, 16),
	GPMI_ALE	= PINID(0, 17),
	GPMI_CE2N	= PINID(0, 18),
	GPMI_RDY0	= PINID(0, 19),
	GPMI_RDY1	= PINID(0, 20),
	GPMI_RDY2	= PINID(0, 21),
	GPMI_RDY3	= PINID(0, 22),
	GPMI_WPN	= PINID(0, 23),
	GPMI_WRN	= PINID(0, 24),
	GPMI_RDN	= PINID(0, 25),
	AUART1_CTS	= PINID(0, 26),
	AUART1_RTS	= PINID(0, 27),
	AUART1_RX	= PINID(0, 28),
	AUART1_TX	= PINID(0, 29),
	I2C_SCL		= PINID(0, 30),
	I2C_SDA		= PINID(0, 31),
	LCD_D00		= PINID(1, 0),
	LCD_D01		= PINID(1, 1),
	LCD_D02		= PINID(1, 2),
	LCD_D03		= PINID(1, 3),
	LCD_D04		= PINID(1, 4),
	LCD_D05		= PINID(1, 5),
	LCD_D06		= PINID(1, 6),
	LCD_D07		= PINID(1, 7),
	LCD_D08		= PINID(1, 8),
	LCD_D09		= PINID(1, 9),
	LCD_D10		= PINID(1, 10),
	LCD_D11		= PINID(1, 11),
	LCD_D12		= PINID(1, 12),
	LCD_D13		= PINID(1, 13),
	LCD_D14		= PINID(1, 14),
	LCD_D15		= PINID(1, 15),
	LCD_D16		= PINID(1, 16),
	LCD_D17		= PINID(1, 17),
	LCD_RESET	= PINID(1, 18),
	LCD_RS		= PINID(1, 19),
	LCD_WR		= PINID(1, 20),
	LCD_CS		= PINID(1, 21),
	LCD_DOTCK	= PINID(1, 22),
	LCD_ENABLE	= PINID(1, 23),
	LCD_HSYNC	= PINID(1, 24),
	LCD_VSYNC	= PINID(1, 25),
	PWM0		= PINID(1, 26),
	PWM1		= PINID(1, 27),
	PWM2		= PINID(1, 28),
	PWM3		= PINID(1, 29),
	PWM4		= PINID(1, 30),
	SSP1_CMD	= PINID(2, 0),
	SSP1_DETECT	= PINID(2, 1),
	SSP1_DATA0	= PINID(2, 2),
	SSP1_DATA1	= PINID(2, 3),
	SSP1_DATA2	= PINID(2, 4),
	SSP1_DATA3	= PINID(2, 5),
	SSP1_SCK	= PINID(2, 6),
	ROTARYA		= PINID(2, 7),
	ROTARYB		= PINID(2, 8),
	EMI_A00		= PINID(2, 9),
	EMI_A01		= PINID(2, 10),
	EMI_A02		= PINID(2, 11),
	EMI_A03		= PINID(2, 12),
	EMI_A04		= PINID(2, 13),
	EMI_A05		= PINID(2, 14),
	EMI_A06		= PINID(2, 15),
	EMI_A07		= PINID(2, 16),
	EMI_A08		= PINID(2, 17),
	EMI_A09		= PINID(2, 18),
	EMI_A10		= PINID(2, 19),
	EMI_A11		= PINID(2, 20),
	EMI_A12		= PINID(2, 21),
	EMI_BA0		= PINID(2, 22),
	EMI_BA1		= PINID(2, 23),
	EMI_CASN	= PINID(2, 24),
	EMI_CE0N	= PINID(2, 25),
	EMI_CE1N	= PINID(2, 26),
	GPMI_CE1N	= PINID(2, 27),
	GPMI_CE0N	= PINID(2, 28),
	EMI_CKE		= PINID(2, 29),
	EMI_RASN	= PINID(2, 30),
	EMI_WEN		= PINID(2, 31),
	EMI_D00		= PINID(3, 0),
	EMI_D01		= PINID(3, 1),
	EMI_D02		= PINID(3, 2),
	EMI_D03		= PINID(3, 3),
	EMI_D04		= PINID(3, 4),
	EMI_D05		= PINID(3, 5),
	EMI_D06		= PINID(3, 6),
	EMI_D07		= PINID(3, 7),
	EMI_D08		= PINID(3, 8),
	EMI_D09		= PINID(3, 9),
	EMI_D10		= PINID(3, 10),
	EMI_D11		= PINID(3, 11),
	EMI_D12		= PINID(3, 12),
	EMI_D13		= PINID(3, 13),
	EMI_D14		= PINID(3, 14),
	EMI_D15		= PINID(3, 15),
	EMI_DQM0	= PINID(3, 16),
	EMI_DQM1	= PINID(3, 17),
	EMI_DQS0	= PINID(3, 18),
	EMI_DQS1	= PINID(3, 19),
	EMI_CLK		= PINID(3, 20),
	EMI_CLKN	= PINID(3, 21),
};

static const struct pinctrl_pin_desc imx23_pins[] = {
	MXS_PINCTRL_PIN(GPMI_D00),
	MXS_PINCTRL_PIN(GPMI_D01),
	MXS_PINCTRL_PIN(GPMI_D02),
	MXS_PINCTRL_PIN(GPMI_D03),
	MXS_PINCTRL_PIN(GPMI_D04),
	MXS_PINCTRL_PIN(GPMI_D05),
	MXS_PINCTRL_PIN(GPMI_D06),
	MXS_PINCTRL_PIN(GPMI_D07),
	MXS_PINCTRL_PIN(GPMI_D08),
	MXS_PINCTRL_PIN(GPMI_D09),
	MXS_PINCTRL_PIN(GPMI_D10),
	MXS_PINCTRL_PIN(GPMI_D11),
	MXS_PINCTRL_PIN(GPMI_D12),
	MXS_PINCTRL_PIN(GPMI_D13),
	MXS_PINCTRL_PIN(GPMI_D14),
	MXS_PINCTRL_PIN(GPMI_D15),
	MXS_PINCTRL_PIN(GPMI_CLE),
	MXS_PINCTRL_PIN(GPMI_ALE),
	MXS_PINCTRL_PIN(GPMI_CE2N),
	MXS_PINCTRL_PIN(GPMI_RDY0),
	MXS_PINCTRL_PIN(GPMI_RDY1),
	MXS_PINCTRL_PIN(GPMI_RDY2),
	MXS_PINCTRL_PIN(GPMI_RDY3),
	MXS_PINCTRL_PIN(GPMI_WPN),
	MXS_PINCTRL_PIN(GPMI_WRN),
	MXS_PINCTRL_PIN(GPMI_RDN),
	MXS_PINCTRL_PIN(AUART1_CTS),
	MXS_PINCTRL_PIN(AUART1_RTS),
	MXS_PINCTRL_PIN(AUART1_RX),
	MXS_PINCTRL_PIN(AUART1_TX),
	MXS_PINCTRL_PIN(I2C_SCL),
	MXS_PINCTRL_PIN(I2C_SDA),
	MXS_PINCTRL_PIN(LCD_D00),
	MXS_PINCTRL_PIN(LCD_D01),
	MXS_PINCTRL_PIN(LCD_D02),
	MXS_PINCTRL_PIN(LCD_D03),
	MXS_PINCTRL_PIN(LCD_D04),
	MXS_PINCTRL_PIN(LCD_D05),
	MXS_PINCTRL_PIN(LCD_D06),
	MXS_PINCTRL_PIN(LCD_D07),
	MXS_PINCTRL_PIN(LCD_D08),
	MXS_PINCTRL_PIN(LCD_D09),
	MXS_PINCTRL_PIN(LCD_D10),
	MXS_PINCTRL_PIN(LCD_D11),
	MXS_PINCTRL_PIN(LCD_D12),
	MXS_PINCTRL_PIN(LCD_D13),
	MXS_PINCTRL_PIN(LCD_D14),
	MXS_PINCTRL_PIN(LCD_D15),
	MXS_PINCTRL_PIN(LCD_D16),
	MXS_PINCTRL_PIN(LCD_D17),
	MXS_PINCTRL_PIN(LCD_RESET),
	MXS_PINCTRL_PIN(LCD_RS),
	MXS_PINCTRL_PIN(LCD_WR),
	MXS_PINCTRL_PIN(LCD_CS),
	MXS_PINCTRL_PIN(LCD_DOTCK),
	MXS_PINCTRL_PIN(LCD_ENABLE),
	MXS_PINCTRL_PIN(LCD_HSYNC),
	MXS_PINCTRL_PIN(LCD_VSYNC),
	MXS_PINCTRL_PIN(PWM0),
	MXS_PINCTRL_PIN(PWM1),
	MXS_PINCTRL_PIN(PWM2),
	MXS_PINCTRL_PIN(PWM3),
	MXS_PINCTRL_PIN(PWM4),
	MXS_PINCTRL_PIN(SSP1_CMD),
	MXS_PINCTRL_PIN(SSP1_DETECT),
	MXS_PINCTRL_PIN(SSP1_DATA0),
	MXS_PINCTRL_PIN(SSP1_DATA1),
	MXS_PINCTRL_PIN(SSP1_DATA2),
	MXS_PINCTRL_PIN(SSP1_DATA3),
	MXS_PINCTRL_PIN(SSP1_SCK),
	MXS_PINCTRL_PIN(ROTARYA),
	MXS_PINCTRL_PIN(ROTARYB),
	MXS_PINCTRL_PIN(EMI_A00),
	MXS_PINCTRL_PIN(EMI_A01),
	MXS_PINCTRL_PIN(EMI_A02),
	MXS_PINCTRL_PIN(EMI_A03),
	MXS_PINCTRL_PIN(EMI_A04),
	MXS_PINCTRL_PIN(EMI_A05),
	MXS_PINCTRL_PIN(EMI_A06),
	MXS_PINCTRL_PIN(EMI_A07),
	MXS_PINCTRL_PIN(EMI_A08),
	MXS_PINCTRL_PIN(EMI_A09),
	MXS_PINCTRL_PIN(EMI_A10),
	MXS_PINCTRL_PIN(EMI_A11),
	MXS_PINCTRL_PIN(EMI_A12),
	MXS_PINCTRL_PIN(EMI_BA0),
	MXS_PINCTRL_PIN(EMI_BA1),
	MXS_PINCTRL_PIN(EMI_CASN),
	MXS_PINCTRL_PIN(EMI_CE0N),
	MXS_PINCTRL_PIN(EMI_CE1N),
	MXS_PINCTRL_PIN(GPMI_CE1N),
	MXS_PINCTRL_PIN(GPMI_CE0N),
	MXS_PINCTRL_PIN(EMI_CKE),
	MXS_PINCTRL_PIN(EMI_RASN),
	MXS_PINCTRL_PIN(EMI_WEN),
	MXS_PINCTRL_PIN(EMI_D00),
	MXS_PINCTRL_PIN(EMI_D01),
	MXS_PINCTRL_PIN(EMI_D02),
	MXS_PINCTRL_PIN(EMI_D03),
	MXS_PINCTRL_PIN(EMI_D04),
	MXS_PINCTRL_PIN(EMI_D05),
	MXS_PINCTRL_PIN(EMI_D06),
	MXS_PINCTRL_PIN(EMI_D07),
	MXS_PINCTRL_PIN(EMI_D08),
	MXS_PINCTRL_PIN(EMI_D09),
	MXS_PINCTRL_PIN(EMI_D10),
	MXS_PINCTRL_PIN(EMI_D11),
	MXS_PINCTRL_PIN(EMI_D12),
	MXS_PINCTRL_PIN(EMI_D13),
	MXS_PINCTRL_PIN(EMI_D14),
	MXS_PINCTRL_PIN(EMI_D15),
	MXS_PINCTRL_PIN(EMI_DQM0),
	MXS_PINCTRL_PIN(EMI_DQM1),
	MXS_PINCTRL_PIN(EMI_DQS0),
	MXS_PINCTRL_PIN(EMI_DQS1),
	MXS_PINCTRL_PIN(EMI_CLK),
	MXS_PINCTRL_PIN(EMI_CLKN),
};

static const struct mxs_regs imx23_regs = {
	.muxsel = 0x100,
	.drive = 0x200,
	.pull = 0x400,
};

static struct mxs_pinctrl_soc_data imx23_pinctrl_data = {
	.regs = &imx23_regs,
	.pins = imx23_pins,
	.npins = ARRAY_SIZE(imx23_pins),
};

static int imx23_pinctrl_probe(struct platform_device *pdev)
{
	return mxs_pinctrl_probe(pdev, &imx23_pinctrl_data);
}

static const struct of_device_id imx23_pinctrl_of_match[] = {
	{ .compatible = "fsl,imx23-pinctrl", },
	{ /* sentinel */ }
};

static struct platform_driver imx23_pinctrl_driver = {
	.driver = {
		.name = "imx23-pinctrl",
		.suppress_bind_attrs = true,
		.of_match_table = imx23_pinctrl_of_match,
	},
	.probe = imx23_pinctrl_probe,
};

static int __init imx23_pinctrl_init(void)
{
	return platform_driver_register(&imx23_pinctrl_driver);
}
postcore_initcall(imx23_pinctrl_init);
