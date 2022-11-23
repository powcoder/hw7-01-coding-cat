https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __DT_TAS2552_H
#define __DT_TAS2552_H

#define TAS2552_PLL_CLKIN		(0)
#define TAS2552_PDM_CLK			(1)
#define TAS2552_CLK_TARGET_MASK		(1)

#define TAS2552_PLL_CLKIN_MCLK		((0 << 1) | TAS2552_PLL_CLKIN)
#define TAS2552_PLL_CLKIN_BCLK		((1 << 1) | TAS2552_PLL_CLKIN)
#define TAS2552_PLL_CLKIN_IVCLKIN	((2 << 1) | TAS2552_PLL_CLKIN)
#define TAS2552_PLL_CLKIN_1_8_FIXED	((3 << 1) | TAS2552_PLL_CLKIN)

#define TAS2552_PDM_CLK_PLL		((0 << 1) | TAS2552_PDM_CLK)
#define TAS2552_PDM_CLK_IVCLKIN		((1 << 1) | TAS2552_PDM_CLK)
#define TAS2552_PDM_CLK_BCLK		((2 << 1) | TAS2552_PDM_CLK)
#define TAS2552_PDM_CLK_MCLK		((3 << 1) | TAS2552_PDM_CLK)

#endif /* __DT_TAS2552_H */
