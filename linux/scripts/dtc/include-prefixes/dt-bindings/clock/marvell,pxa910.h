https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __DTS_MARVELL_PXA910_CLOCK_H
#define __DTS_MARVELL_PXA910_CLOCK_H

/* fixed clocks and plls */
#define PXA910_CLK_CLK32		1
#define PXA910_CLK_VCTCXO		2
#define PXA910_CLK_PLL1			3
#define PXA910_CLK_PLL1_2		8
#define PXA910_CLK_PLL1_4		9
#define PXA910_CLK_PLL1_8		10
#define PXA910_CLK_PLL1_16		11
#define PXA910_CLK_PLL1_6		12
#define PXA910_CLK_PLL1_12		13
#define PXA910_CLK_PLL1_24		14
#define PXA910_CLK_PLL1_48		15
#define PXA910_CLK_PLL1_96		16
#define PXA910_CLK_PLL1_13		17
#define PXA910_CLK_PLL1_13_1_5		18
#define PXA910_CLK_PLL1_2_1_5		19
#define PXA910_CLK_PLL1_3_16		20
#define PXA910_CLK_PLL1_192		21
#define PXA910_CLK_UART_PLL		27
#define PXA910_CLK_USB_PLL		28

/* apb periphrals */
#define PXA910_CLK_TWSI0		60
#define PXA910_CLK_TWSI1		61
#define PXA910_CLK_TWSI2		62
#define PXA910_CLK_TWSI3		63
#define PXA910_CLK_GPIO			64
#define PXA910_CLK_KPC			65
#define PXA910_CLK_RTC			66
#define PXA910_CLK_PWM0			67
#define PXA910_CLK_PWM1			68
#define PXA910_CLK_PWM2			69
#define PXA910_CLK_PWM3			70
#define PXA910_CLK_UART0		71
#define PXA910_CLK_UART1		72
#define PXA910_CLK_UART2		73
#define PXA910_CLK_SSP0			74
#define PXA910_CLK_SSP1			75
#define PXA910_CLK_TIMER0		76
#define PXA910_CLK_TIMER1		77

/* axi periphrals */
#define PXA910_CLK_DFC			100
#define PXA910_CLK_SDH0			101
#define PXA910_CLK_SDH1			102
#define PXA910_CLK_SDH2			103
#define PXA910_CLK_USB			104
#define PXA910_CLK_SPH			105
#define PXA910_CLK_DISP0		106
#define PXA910_CLK_CCIC0		107
#define PXA910_CLK_CCIC0_PHY		108
#define PXA910_CLK_CCIC0_SPHY		109

#define PXA910_NR_CLKS			200
#endif
