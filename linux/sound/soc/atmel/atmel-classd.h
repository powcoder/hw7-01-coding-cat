https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __ATMEL_CLASSD_H_
#define __ATMEL_CLASSD_H_

#define CLASSD_CR		0x00000000
#define CLASSD_CR_RESET		0x1

#define CLASSD_MR			0x00000004

#define CLASSD_MR_LEN_DIS		0x0
#define CLASSD_MR_LEN_EN		0x1
#define CLASSD_MR_LEN_MASK		(0x1 << 0)
#define CLASSD_MR_LEN_SHIFT		(0)

#define CLASSD_MR_LMUTE_DIS		0x0
#define CLASSD_MR_LMUTE_EN		0x1
#define CLASSD_MR_LMUTE_SHIFT		(0x1)
#define CLASSD_MR_LMUTE_MASK		(0x1 << 1)

#define CLASSD_MR_REN_DIS		0x0
#define CLASSD_MR_REN_EN		0x1
#define CLASSD_MR_REN_MASK		(0x1 << 4)
#define CLASSD_MR_REN_SHIFT		(4)

#define CLASSD_MR_RMUTE_DIS		0x0
#define CLASSD_MR_RMUTE_EN		0x1
#define CLASSD_MR_RMUTE_SHIFT		(0x5)
#define CLASSD_MR_RMUTE_MASK		(0x1 << 5)

#define CLASSD_MR_PWMTYP_SINGLE		0x0
#define CLASSD_MR_PWMTYP_DIFF		0x1
#define CLASSD_MR_PWMTYP_MASK		(0x1 << 8)
#define CLASSD_MR_PWMTYP_SHIFT		(8)

#define CLASSD_MR_NON_OVERLAP_DIS	0x0
#define CLASSD_MR_NON_OVERLAP_EN	0x1
#define CLASSD_MR_NON_OVERLAP_MASK	(0x1 << 16)
#define CLASSD_MR_NON_OVERLAP_SHIFT	(16)

#define CLASSD_MR_NOVR_VAL_5NS		0x0
#define CLASSD_MR_NOVR_VAL_10NS		0x1
#define CLASSD_MR_NOVR_VAL_15NS		0x2
#define CLASSD_MR_NOVR_VAL_20NS		0x3
#define CLASSD_MR_NOVR_VAL_MASK		(0x3 << 20)
#define CLASSD_MR_NOVR_VAL_SHIFT	(20)

#define CLASSD_INTPMR				0x00000008

#define CLASSD_INTPMR_ATTL_MASK			(0x3f << 0)
#define CLASSD_INTPMR_ATTL_SHIFT		(0)
#define CLASSD_INTPMR_ATTR_MASK			(0x3f << 8)
#define CLASSD_INTPMR_ATTR_SHIFT		(8)

#define CLASSD_INTPMR_DSP_CLK_FREQ_12M288	0x0
#define CLASSD_INTPMR_DSP_CLK_FREQ_11M2896	0x1
#define CLASSD_INTPMR_DSP_CLK_FREQ_MASK		(0x1 << 16)
#define CLASSD_INTPMR_DSP_CLK_FREQ_SHIFT	(16)

#define CLASSD_INTPMR_DEEMP_DIS			0x0
#define CLASSD_INTPMR_DEEMP_EN			0x1
#define CLASSD_INTPMR_DEEMP_MASK		(0x1 << 18)
#define CLASSD_INTPMR_DEEMP_SHIFT		(18)

#define CLASSD_INTPMR_SWAP_LEFT_ON_LSB		0x0
#define CLASSD_INTPMR_SWAP_RIGHT_ON_LSB		0x1
#define CLASSD_INTPMR_SWAP_MASK			(0x1 << 19)
#define CLASSD_INTPMR_SWAP_SHIFT		(19)

#define CLASSD_INTPMR_FRAME_8K			0x0
#define CLASSD_INTPMR_FRAME_16K			0x1
#define CLASSD_INTPMR_FRAME_32K			0x2
#define CLASSD_INTPMR_FRAME_48K			0x3
#define CLASSD_INTPMR_FRAME_96K			0x4
#define CLASSD_INTPMR_FRAME_22K			0x5
#define CLASSD_INTPMR_FRAME_44K			0x6
#define CLASSD_INTPMR_FRAME_88K			0x7
#define CLASSD_INTPMR_FRAME_MASK		(0x7 << 20)
#define CLASSD_INTPMR_FRAME_SHIFT		(20)

#define CLASSD_INTPMR_EQCFG_FLAT		0x0
#define CLASSD_INTPMR_EQCFG_B_BOOST_12		0x1
#define CLASSD_INTPMR_EQCFG_B_BOOST_6		0x2
#define CLASSD_INTPMR_EQCFG_B_CUT_12		0x3
#define CLASSD_INTPMR_EQCFG_B_CUT_6		0x4
#define CLASSD_INTPMR_EQCFG_M_BOOST_3		0x5
#define CLASSD_INTPMR_EQCFG_M_BOOST_8		0x6
#define CLASSD_INTPMR_EQCFG_M_CUT_3		0x7
#define CLASSD_INTPMR_EQCFG_M_CUT_8		0x8
#define CLASSD_INTPMR_EQCFG_T_BOOST_12		0x9
#define CLASSD_INTPMR_EQCFG_T_BOOST_6		0xa
#define CLASSD_INTPMR_EQCFG_T_CUT_12		0xb
#define CLASSD_INTPMR_EQCFG_T_CUT_6		0xc
#define CLASSD_INTPMR_EQCFG_SHIFT		(24)

#define CLASSD_INTPMR_MONO_DIS			0x0
#define CLASSD_INTPMR_MONO_EN			0x1
#define CLASSD_INTPMR_MONO_MASK			(0x1 << 28)
#define CLASSD_INTPMR_MONO_SHIFT		(28)

#define CLASSD_INTPMR_MONO_MODE_MIX		0x0
#define CLASSD_INTPMR_MONO_MODE_SAT		0x1
#define CLASSD_INTPMR_MONO_MODE_LEFT		0x2
#define CLASSD_INTPMR_MONO_MODE_RIGHT		0x3
#define CLASSD_INTPMR_MONO_MODE_MASK		(0x3 << 29)
#define CLASSD_INTPMR_MONO_MODE_SHIFT		(29)

#define CLASSD_INTSR	0x0000000c

#define CLASSD_THR	0x00000010

#define CLASSD_IER	0x00000014

#define CLASSD_IDR	0x00000018

#define CLASSD_IMR	0x0000001c

#define CLASSD_ISR	0x00000020

#define CLASSD_WPMR	0x000000e4

#endif
