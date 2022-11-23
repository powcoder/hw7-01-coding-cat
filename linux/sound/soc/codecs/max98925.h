https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * max98925.h -- MAX98925 ALSA SoC Audio driver
 *
 * Copyright 2013-2015 Maxim Integrated Products
 */

#ifndef _MAX98925_H
#define _MAX98925_H

#define	MAX98925_VERSION	0x51
#define	MAX98925_VERSION1	0x80
#define MAX98925_VBAT_DATA		0x00
#define MAX98925_VBST_DATA		0x01
#define MAX98925_LIVE_STATUS0		0x02
#define MAX98925_LIVE_STATUS1		0x03
#define MAX98925_LIVE_STATUS2		0x04
#define MAX98925_STATE0			0x05
#define MAX98925_STATE1			0x06
#define MAX98925_STATE2			0x07
#define MAX98925_FLAG0			0x08
#define MAX98925_FLAG1			0x09
#define MAX98925_FLAG2			0x0A
#define MAX98925_IRQ_ENABLE0		0x0B
#define MAX98925_IRQ_ENABLE1		0x0C
#define MAX98925_IRQ_ENABLE2		0x0D
#define MAX98925_IRQ_CLEAR0		0x0E
#define MAX98925_IRQ_CLEAR1		0x0F
#define MAX98925_IRQ_CLEAR2		0x10
#define MAX98925_MAP0			0x11
#define MAX98925_MAP1			0x12
#define MAX98925_MAP2			0x13
#define MAX98925_MAP3			0x14
#define MAX98925_MAP4			0x15
#define MAX98925_MAP5			0x16
#define MAX98925_MAP6			0x17
#define MAX98925_MAP7			0x18
#define MAX98925_MAP8			0x19
#define MAX98925_DAI_CLK_MODE1		0x1A
#define MAX98925_DAI_CLK_MODE2		0x1B
#define MAX98925_DAI_CLK_DIV_M_MSBS	0x1C
#define MAX98925_DAI_CLK_DIV_M_LSBS	0x1D
#define MAX98925_DAI_CLK_DIV_N_MSBS	0x1E
#define MAX98925_DAI_CLK_DIV_N_LSBS	0x1F
#define MAX98925_FORMAT			0x20
#define MAX98925_TDM_SLOT_SELECT	0x21
#define MAX98925_DOUT_CFG_VMON		0x22
#define MAX98925_DOUT_CFG_IMON		0x23
#define MAX98925_DOUT_CFG_VBAT		0x24
#define MAX98925_DOUT_CFG_VBST		0x25
#define MAX98925_DOUT_CFG_FLAG		0x26
#define MAX98925_DOUT_HIZ_CFG1		0x27
#define MAX98925_DOUT_HIZ_CFG2		0x28
#define MAX98925_DOUT_HIZ_CFG3		0x29
#define MAX98925_DOUT_HIZ_CFG4		0x2A
#define MAX98925_DOUT_DRV_STRENGTH	0x2B
#define MAX98925_FILTERS		0x2C
#define MAX98925_GAIN			0x2D
#define MAX98925_GAIN_RAMPING		0x2E
#define MAX98925_SPK_AMP		0x2F
#define MAX98925_THRESHOLD		0x30
#define MAX98925_ALC_ATTACK		0x31
#define MAX98925_ALC_ATTEN_RLS		0x32
#define MAX98925_ALC_HOLD_RLS		0x33
#define MAX98925_ALC_CONFIGURATION	0x34
#define MAX98925_BOOST_CONVERTER	0x35
#define MAX98925_BLOCK_ENABLE		0x36
#define MAX98925_CONFIGURATION		0x37
#define MAX98925_GLOBAL_ENABLE		0x38
#define MAX98925_BOOST_LIMITER		0x3A
#define MAX98925_REV_VERSION		0xFF

#define MAX98925_REG_CNT               (MAX98925_R03A_BOOST_LIMITER+1)

/* MAX98925 Register Bit Fields */

/* MAX98925_R002_LIVE_STATUS0 */
#define M98925_THERMWARN_STATUS_MASK			(1<<3)
#define M98925_THERMWARN_STATUS_SHIFT			3
#define M98925_THERMWARN_STATUS_WIDTH			1
#define M98925_THERMSHDN_STATUS_MASK			(1<<1)
#define M98925_THERMSHDN_STATUS_SHIFT			1
#define M98925_THERMSHDN_STATUS_WIDTH			1

/* MAX98925_R003_LIVE_STATUS1 */
#define M98925_SPKCURNT_STATUS_MASK			(1<<5)
#define M98925_SPKCURNT_STATUS_SHIFT			5
#define M98925_SPKCURNT_STATUS_WIDTH			1
#define M98925_WATCHFAIL_STATUS_MASK			(1<<4)
#define M98925_WATCHFAIL_STATUS_SHIFT			4
#define M98925_WATCHFAIL_STATUS_WIDTH			1
#define M98925_ALCINFH_STATUS_MASK			(1<<3)
#define M98925_ALCINFH_STATUS_SHIFT			3
#define M98925_ALCINFH_STATUS_WIDTH			1
#define M98925_ALCACT_STATUS_MASK			(1<<2)
#define M98925_ALCACT_STATUS_SHIFT			2
#define M98925_ALCACT_STATUS_WIDTH			1
#define M98925_ALCMUT_STATUS_MASK			(1<<1)
#define M98925_ALCMUT_STATUS_SHIFT			1
#define M98925_ALCMUT_STATUS_WIDTH			1
#define M98925_ACLP_STATUS_MASK				(1<<0)
#define M98925_ACLP_STATUS_SHIFT			0
#define M98925_ACLP_STATUS_WIDTH			1

/* MAX98925_R004_LIVE_STATUS2 */
#define M98925_SLOTOVRN_STATUS_MASK			(1<<6)
#define M98925_SLOTOVRN_STATUS_SHIFT			6
#define M98925_SLOTOVRN_STATUS_WIDTH			1
#define M98925_INVALSLOT_STATUS_MASK			(1<<5)
#define M98925_INVALSLOT_STATUS_SHIFT			5
#define M98925_INVALSLOT_STATUS_WIDTH			1
#define M98925_SLOTCNFLT_STATUS_MASK			(1<<4)
#define M98925_SLOTCNFLT_STATUS_SHIFT			4
#define M98925_SLOTCNFLT_STATUS_WIDTH			1
#define M98925_VBSTOVFL_STATUS_MASK			(1<<3)
#define M98925_VBSTOVFL_STATUS_SHIFT			3
#define M98925_VBSTOVFL_STATUS_WIDTH			1
#define M98925_VBATOVFL_STATUS_MASK			(1<<2)
#define M98925_VBATOVFL_STATUS_SHIFT			2
#define M98925_VBATOVFL_STATUS_WIDTH			1
#define M98925_IMONOVFL_STATUS_MASK			(1<<1)
#define M98925_IMONOVFL_STATUS_SHIFT			1
#define M98925_IMONOVFL_STATUS_WIDTH			1
#define M98925_VMONOVFL_STATUS_MASK			(1<<0)
#define M98925_VMONOVFL_STATUS_SHIFT			0
#define M98925_VMONOVFL_STATUS_WIDTH			1

/* MAX98925_R005_STATE0 */
#define M98925_THERMWARN_END_STATE_MASK			(1<<3)
#define M98925_THERMWARN_END_STATE_SHIFT		3
#define M98925_THERMWARN_END_STATE_WIDTH		1
#define M98925_THERMWARN_BGN_STATE_MASK			(1<<2)
#define M98925_THERMWARN_BGN_STATE_SHIFT		1
#define M98925_THERMWARN_BGN_STATE_WIDTH		1
#define M98925_THERMSHDN_END_STATE_MASK			(1<<1)
#define M98925_THERMSHDN_END_STATE_SHIFT		1
#define M98925_THERMSHDN_END_STATE_WIDTH		1
#define M98925_THERMSHDN_BGN_STATE_MASK			(1<<0)
#define M98925_THERMSHDN_BGN_STATE_SHIFT		0
#define M98925_THERMSHDN_BGN_STATE_WIDTH		1

/* MAX98925_R006_STATE1 */
#define M98925_SPRCURNT_STATE_MASK			(1<<5)
#define M98925_SPRCURNT_STATE_SHIFT			5
#define M98925_SPRCURNT_STATE_WIDTH			1
#define M98925_WATCHFAIL_STATE_MASK			(1<<4)
#define M98925_WATCHFAIL_STATE_SHIFT			4
#define M98925_WATCHFAIL_STATE_WIDTH			1
#define M98925_ALCINFH_STATE_MASK			(1<<3)
#define M98925_ALCINFH_STATE_SHIFT			3
#define M98925_ALCINFH_STATE_WIDTH			1
#define M98925_ALCACT_STATE_MASK			(1<<2)
#define M98925_ALCACT_STATE_SHIFT			2
#define M98925_ALCACT_STATE_WIDTH			1
#define M98925_ALCMUT_STATE_MASK			(1<<1)
#define M98925_ALCMUT_STATE_SHIFT			1
#define M98925_ALCMUT_STATE_WIDTH			1
#define M98925_ALCP_STATE_MASK				(1<<0)
#define M98925_ALCP_STATE_SHIFT				0
#define M98925_ALCP_STATE_WIDTH				1

/* MAX98925_R007_STATE2 */
#define M98925_SLOTOVRN_STATE_MASK			(1<<6)
#define M98925_SLOTOVRN_STATE_SHIFT			6
#define M98925_SLOTOVRN_STATE_WIDTH			1
#define M98925_INVALSLOT_STATE_MASK			(1<<5)
#define M98925_INVALSLOT_STATE_SHIFT			5
#define M98925_INVALSLOT_STATE_WIDTH			1
#define M98925_SLOTCNFLT_STATE_MASK			(1<<4)
#define M98925_SLOTCNFLT_STATE_SHIFT			4
#define M98925_SLOTCNFLT_STATE_WIDTH			1
#define M98925_VBSTOVFL_STATE_MASK			(1<<3)
#define M98925_VBSTOVFL_STATE_SHIFT			3
#define M98925_VBSTOVFL_STATE_WIDTH			1
#define M98925_VBATOVFL_STATE_MASK			(1<<2)
#define M98925_VBATOVFL_STATE_SHIFT			2
#define M98925_VBATOVFL_STATE_WIDTH			1
#define M98925_IMONOVFL_STATE_MASK			(1<<1)
#define M98925_IMONOVFL_STATE_SHIFT			1
#define M98925_IMONOVFL_STATE_WIDTH			1
#define M98925_VMONOVFL_STATE_MASK			(1<<0)
#define M98925_VMONOVFL_STATE_SHIFT			0
#define M98925_VMONOVFL_STATE_WIDTH			1

/* MAX98925_R008_FLAG0 */
#define M98925_THERMWARN_END_FLAG_MASK			(1<<3)
#define M98925_THERMWARN_END_FLAG_SHIFT			3
#define M98925_THERMWARN_END_FLAG_WIDTH			1
#define M98925_THERMWARN_BGN_FLAG_MASK			(1<<2)
#define M98925_THERMWARN_BGN_FLAG_SHIFT			2
#define M98925_THERMWARN_BGN_FLAG_WIDTH			1
#define M98925_THERMSHDN_END_FLAG_MASK			(1<<1)
#define M98925_THERMSHDN_END_FLAG_SHIFT			1
#define M98925_THERMSHDN_END_FLAG_WIDTH			1
#define M98925_THERMSHDN_BGN_FLAG_MASK			(1<<0)
#define M98925_THERMSHDN_BGN_FLAG_SHIFT			0
#define M98925_THERMSHDN_BGN_FLAG_WIDTH			1

/* MAX98925_R009_FLAG1 */
#define M98925_SPKCURNT_FLAG_MASK			(1<<5)
#define M98925_SPKCURNT_FLAG_SHIFT			5
#define M98925_SPKCURNT_FLAG_WIDTH			1
#define M98925_WATCHFAIL_FLAG_MASK			(1<<4)
#define M98925_WATCHFAIL_FLAG_SHIFT			4
#define M98925_WATCHFAIL_FLAG_WIDTH			1
#define M98925_ALCINFH_FLAG_MASK			(1<<3)
#define M98925_ALCINFH_FLAG_SHIFT			3
#define M98925_ALCINFH_FLAG_WIDTH			1
#define M98925_ALCACT_FLAG_MASK				(1<<2)
#define M98925_ALCACT_FLAG_SHIFT			2
#define M98925_ALCACT_FLAG_WIDTH			1
#define M98925_ALCMUT_FLAG_MASK				(1<<1)
#define M98925_ALCMUT_FLAG_SHIFT			1
#define M98925_ALCMUT_FLAG_WIDTH			1
#define M98925_ALCP_FLAG_MASK				(1<<0)
#define M98925_ALCP_FLAG_SHIFT				0
#define M98925_ALCP_FLAG_WIDTH				1

/* MAX98925_R00A_FLAG2 */
#define M98925_SLOTOVRN_FLAG_MASK			(1<<6)
#define M98925_SLOTOVRN_FLAG_SHIFT			6
#define M98925_SLOTOVRN_FLAG_WIDTH			1
#define M98925_INVALSLOT_FLAG_MASK			(1<<5)
#define M98925_INVALSLOT_FLAG_SHIFT			5
#define M98925_INVALSLOT_FLAG_WIDTH			1
#define M98925_SLOTCNFLT_FLAG_MASK			(1<<4)
#define M98925_SLOTCNFLT_FLAG_SHIFT			4
#define M98925_SLOTCNFLT_FLAG_WIDTH			1
#define M98925_VBSTOVFL_FLAG_MASK			(1<<3)
#define M98925_VBSTOVFL_FLAG_SHIFT			3
#define M98925_VBSTOVFL_FLAG_WIDTH			1
#define M98925_VBATOVFL_FLAG_MASK			(1<<2)
#define M98925_VBATOVFL_FLAG_SHIFT			2
#define M98925_VBATOVFL_FLAG_WIDTH			1
#define M98925_IMONOVFL_FLAG_MASK			(1<<1)
#define M98925_IMONOVFL_FLAG_SHIFT			1
#define M98925_IMONOVFL_FLAG_WIDTH			1
#define M98925_VMONOVFL_FLAG_MASK			(1<<0)
#define M98925_VMONOVFL_FLAG_SHIFT			0
#define M98925_VMONOVFL_FLAG_WIDTH			1

/* MAX98925_R00B_IRQ_ENABLE0 */
#define M98925_THERMWARN_END_EN_MASK			(1<<3)
#define M98925_THERMWARN_END_EN_SHIFT			3
#define M98925_THERMWARN_END_EN_WIDTH			1
#define M98925_THERMWARN_BGN_EN_MASK			(1<<2)
#define M98925_THERMWARN_BGN_EN_SHIFT			2
#define M98925_THERMWARN_BGN_EN_WIDTH			1
#define M98925_THERMSHDN_END_EN_MASK			(1<<1)
#define M98925_THERMSHDN_END_EN_SHIFT			1
#define M98925_THERMSHDN_END_EN_WIDTH			1
#define M98925_THERMSHDN_BGN_EN_MASK			(1<<0)
#define M98925_THERMSHDN_BGN_EN_SHIFT			0
#define M98925_THERMSHDN_BGN_EN_WIDTH			1

/* MAX98925_R00C_IRQ_ENABLE1 */
#define M98925_SPKCURNT_EN_MASK				(1<<5)
#define M98925_SPKCURNT_EN_SHIFT			5
#define M98925_SPKCURNT_EN_WIDTH			1
#define M98925_WATCHFAIL_EN_MASK			(1<<4)
#define M98925_WATCHFAIL_EN_SHIFT			4
#define M98925_WATCHFAIL_EN_WIDTH			1
#define M98925_ALCINFH_EN_MASK				(1<<3)
#define M98925_ALCINFH_EN_SHIFT				3
#define M98925_ALCINFH_EN_WIDTH				1
#define M98925_ALCACT_EN_MASK				(1<<2)
#define M98925_ALCACT_EN_SHIFT				2
#define M98925_ALCACT_EN_WIDTH				1
#define M98925_ALCMUT_EN_MASK				(1<<1)
#define M98925_ALCMUT_EN_SHIFT				1
#define M98925_ALCMUT_EN_WIDTH				1
#define M98925_ALCP_EN_MASK					(1<<0)
#define M98925_ALCP_EN_SHIFT				0
#define M98925_ALCP_EN_WIDTH				1

/* MAX98925_R00D_IRQ_ENABLE2 */
#define M98925_SLOTOVRN_EN_MASK					(1<<6)
#define M98925_SLOTOVRN_EN_SHIFT				6
#define M98925_SLOTOVRN_EN_WIDTH				1
#define M98925_INVALSLOT_EN_MASK				(1<<5)
#define M98925_INVALSLOT_EN_SHIFT				5
#define M98925_INVALSLOT_EN_WIDTH				1
#define M98925_SLOTCNFLT_EN_MASK				(1<<4)
#define M98925_SLOTCNFLT_EN_SHIFT				4
#define M98925_SLOTCNFLT_EN_WIDTH				1
#define M98925_VBSTOVFL_EN_MASK					(1<<3)
#define M98925_VBSTOVFL_EN_SHIFT				3
#define M98925_VBSTOVFL_EN_WIDTH				1
#define M98925_VBATOVFL_EN_MASK					(1<<2)
#define M98925_VBATOVFL_EN_SHIFT				2
#define M98925_VBATOVFL_EN_WIDTH				1
#define M98925_IMONOVFL_EN_MASK					(1<<1)
#define M98925_IMONOVFL_EN_SHIFT				1
#define M98925_IMONOVFL_EN_WIDTH				1
#define M98925_VMONOVFL_EN_MASK					(1<<0)
#define M98925_VMONOVFL_EN_SHIFT				0
#define M98925_VMONOVFL_EN_WIDTH				1

/* MAX98925_R00E_IRQ_CLEAR0 */
#define M98925_THERMWARN_END_CLR_MASK			(1<<3)
#define M98925_THERMWARN_END_CLR_SHIFT			3
#define M98925_THERMWARN_END_CLR_WIDTH			1
#define M98925_THERMWARN_BGN_CLR_MASK			(1<<2)
#define M98925_THERMWARN_BGN_CLR_SHIFT			2
#define M98925_THERMWARN_BGN_CLR_WIDTH			1
#define M98925_THERMSHDN_END_CLR_MASK			(1<<1)
#define M98925_THERMSHDN_END_CLR_SHIFT			1
#define M98925_THERMSHDN_END_CLR_WIDTH			1
#define M98925_THERMSHDN_BGN_CLR_MASK			(1<<0)
#define M98925_THERMSHDN_BGN_CLR_SHIFT			0
#define M98925_THERMSHDN_BGN_CLR_WIDTH			1

/* MAX98925_R00F_IRQ_CLEAR1 */
#define M98925_SPKCURNT_CLR_MASK				(1<<5)
#define M98925_SPKCURNT_CLR_SHIFT				5
#define M98925_SPKCURNT_CLR_WIDTH				1
#define M98925_WATCHFAIL_CLR_MASK				(1<<4)
#define M98925_WATCHFAIL_CLR_SHIFT				4
#define M98925_WATCHFAIL_CLR_WIDTH				1
#define M98925_ALCINFH_CLR_MASK					(1<<3)
#define M98925_ALCINFH_CLR_SHIFT				3
#define M98925_ALCINFH_CLR_WIDTH				1
#define M98925_ALCACT_CLR_MASK					(1<<2)
#define M98925_ALCACT_CLR_SHIFT					2
#define M98925_ALCACT_CLR_WIDTH					1
#define M98925_ALCMUT_CLR_MASK					(1<<1)
#define M98925_ALCMUT_CLR_SHIFT					1
#define M98925_ALCMUT_CLR_WIDTH					1
#define M98925_ALCP_CLR_MASK					(1<<0)
#define M98925_ALCP_CLR_SHIFT					0
#define M98925_ALCP_CLR_WIDTH					1

/* MAX98925_R010_IRQ_CLEAR2 */
#define M98925_SLOTOVRN_CLR_MASK				(1<<6)
#define M98925_SLOTOVRN_CLR_SHIFT				6
#define M98925_SLOTOVRN_CLR_WIDTH				1
#define M98925_INVALSLOT_CLR_MASK				(1<<5)
#define M98925_INVALSLOT_CLR_SHIFT				5
#define M98925_INVALSLOT_CLR_WIDTH				1
#define M98925_SLOTCNFLT_CLR_MASK				(1<<4)
#define M98925_SLOTCNFLT_CLR_SHIFT				4
#define M98925_SLOTCNFLT_CLR_WIDTH				1
#define M98925_VBSTOVFL_CLR_MASK				(1<<3)
#define M98925_VBSTOVFL_CLR_SHIFT				3
#define M98925_VBSTOVFL_CLR_WIDTH				1
#define M98925_VBATOVFL_CLR_MASK				(1<<2)
#define M98925_VBATOVFL_CLR_SHIFT				2
#define M98925_VBATOVFL_CLR_WIDTH				1
#define M98925_IMONOVFL_CLR_MASK				(1<<1)
#define M98925_IMONOVFL_CLR_SHIFT				1
#define M98925_IMONOVFL_CLR_WIDTH				1
#define M98925_VMONOVFL_CLR_MASK				(1<<0)
#define M98925_VMONOVFL_CLR_SHIFT				0
#define M98925_VMONOVFL_CLR_WIDTH				1

/* MAX98925_R011_MAP0 */
#define M98925_ER_THERMWARN_EN_MASK				(1<<7)
#define M98925_ER_THERMWARN_EN_SHIFT			7
#define M98925_ER_THERMWARN_EN_WIDTH			1
#define M98925_ER_THERMWARN_MAP_MASK			(0x07<<4)
#define M98925_ER_THERMWARN_MAP_SHIFT			4
#define M98925_ER_THERMWARN_MAP_WIDTH			3

/* MAX98925_R012_MAP1 */
#define M98925_ER_ALCMUT_EN_MASK				(1<<7)
#define M98925_ER_ALCMUT_EN_SHIFT				7
#define M98925_ER_ALCMUT_EN_WIDTH				1
#define M98925_ER_ALCMUT_MAP_MASK				(0x07<<4)
#define M98925_ER_ALCMUT_MAP_SHIFT				4
#define M98925_ER_ALCMUT_MAP_WIDTH				3
#define M98925_ER_ALCP_EN_MASK					(1<<3)
#define M98925_ER_ALCP_EN_SHIFT					3
#define M98925_ER_ALCP_EN_WIDTH					1
#define M98925_ER_ALCP_MAP_MASK					(0x07<<0)
#define M98925_ER_ALCP_MAP_SHIFT				0
#define M98925_ER_ALCP_MAP_WIDTH				3

/* MAX98925_R013_MAP2 */
#define M98925_ER_ALCINFH_EN_MASK				(1<<7)
#define M98925_ER_ALCINFH_EN_SHIFT				7
#define M98925_ER_ALCINFH_EN_WIDTH				1
#define M98925_ER_ALCINFH_MAP_MASK				(0x07<<4)
#define M98925_ER_ALCINFH_MAP_SHIFT				4
#define M98925_ER_ALCINFH_MAP_WIDTH				3
#define M98925_ER_ALCACT_EN_MASK				(1<<3)
#define M98925_ER_ALCACT_EN_SHIFT				3
#define M98925_ER_ALCACT_EN_WIDTH				1
#define M98925_ER_ALCACT_MAP_MASK				(0x07<<0)
#define M98925_ER_ALCACT_MAP_SHIFT				0
#define M98925_ER_ALCACT_MAP_WIDTH				3

/* MAX98925_R014_MAP3 */
#define M98925_ER_SPKCURNT_EN_MASK				(1<<7)
#define M98925_ER_SPKCURNT_EN_SHIFT				7
#define M98925_ER_SPKCURNT_EN_WIDTH				1
#define M98925_ER_SPKCURNT_MAP_MASK				(0x07<<4)
#define M98925_ER_SPKCURNT_MAP_SHIFT			4
#define M98925_ER_SPKCURNT_MAP_WIDTH			3

/* MAX98925_R015_MAP4 */
/* RESERVED */

/* MAX98925_R016_MAP5 */
#define M98925_ER_IMONOVFL_EN_MASK				(1<<7)
#define M98925_ER_IMONOVFL_EN_SHIFT				7
#define M98925_ER_IMONOVFL_EN_WIDTH				1
#define M98925_ER_IMONOVFL_MAP_MASK				(0x07<<4)
#define M98925_ER_IMONOVFL_MAP_SHIFT			4
#define M98925_ER_IMONOVFL_MAP_WIDTH			3
#define M98925_ER_VMONOVFL_EN_MASK				(1<<3)
#define M98925_ER_VMONOVFL_EN_SHIFT				3
#define M98925_ER_VMONOVFL_EN_WIDTH				1
#define M98925_ER_VMONOVFL_MAP_MASK				(0x07<<0)
#define M98925_ER_VMONOVFL_MAP_SHIFT			0
#define M98925_ER_VMONOVFL_MAP_WIDTH			3

/* MAX98925_R017_MAP6 */
#define M98925_ER_VBSTOVFL_EN_MASK				(1<<7)
#define M98925_ER_VBSTOVFL_EN_SHIFT				7
#define M98925_ER_VBSTOVFL_EN_WIDTH				1
#define M98925_ER_VBSTOVFL_MAP_MASK				(0x07<<4)
#define M98925_ER_VBSTOVFL_MAP_SHIFT			4
#define M98925_ER_VBSTOVFL_MAP_WIDTH			3
#define M98925_ER_VBATOVFL_EN_MASK				(1<<3)
#define M98925_ER_VBATOVFL_EN_SHIFT				3
#define M98925_ER_VBATOVFL_EN_WIDTH				1
#define M98925_ER_VBATOVFL_MAP_MASK				(0x07<<0)
#define M98925_ER_VBATOVFL_MAP_SHIFT			0
#define M98925_ER_VBATOVFL_MAP_WIDTH			3

/* MAX98925_R018_MAP7 */
#define M98925_ER_INVALSLOT_EN_MASK				(1<<7)
#define M98925_ER_INVALSLOT_EN_SHIFT			7
#define M98925_ER_INVALSLOT_EN_WIDTH			1
#define M98925_ER_INVALSLOT_MAP_MASK			(0x07<<4)
#define M98925_ER_INVALSLOT_MAP_SHIFT			4
#define M98925_ER_INVALSLOT_MAP_WIDTH			3
#define M98925_ER_SLOTCNFLT_EN_MASK				(1<<3)
#define M98925_ER_SLOTCNFLT_EN_SHIFT			3
#define M98925_ER_SLOTCNFLT_EN_WIDTH			1
#define M98925_ER_SLOTCNFLT_MAP_MASK			(0x07<<0)
#define M98925_ER_SLOTCNFLT_MAP_SHIFT			0
#define M98925_ER_SLOTCNFLT_MAP_WIDTH			3

/* MAX98925_R019_MAP8 */
#define M98925_ER_SLOTOVRN_EN_MASK	(1<<3)
#define M98925_ER_SLOTOVRN_EN_SHIFT	3
#define M98925_ER_SLOTOVRN_EN_WIDTH	1
#define M98925_ER_SLOTOVRN_MAP_MASK	(0x07<<0)
#define M98925_ER_SLOTOVRN_MAP_SHIFT	0
#define M98925_ER_SLOTOVRN_MAP_WIDTH	3

/* MAX98925_R01A_DAI_CLK_MODE1 */
#define M98925_DAI_CLK_SOURCE_MASK	(1<<6)
#define M98925_DAI_CLK_SOURCE_SHIFT	6
#define M98925_DAI_CLK_SOURCE_WIDTH	1
#define M98925_MDLL_MULT_MASK		(0x0F<<0)
#define M98925_MDLL_MULT_SHIFT		0
#define M98925_MDLL_MULT_WIDTH		4

#define M98925_MDLL_MULT_MCLKx8		6
#define M98925_MDLL_MULT_MCLKx16	8

/* MAX98925_R01B_DAI_CLK_MODE2 */
#define M98925_DAI_SR_MASK			(0x0F<<4)
#define M98925_DAI_SR_SHIFT			4
#define M98925_DAI_SR_WIDTH			4
#define M98925_DAI_MAS_MASK			(1<<3)
#define M98925_DAI_MAS_SHIFT			3
#define M98925_DAI_MAS_WIDTH			1
#define M98925_DAI_BSEL_MASK			(0x07<<0)
#define M98925_DAI_BSEL_SHIFT			0
#define M98925_DAI_BSEL_WIDTH			3

#define M98925_DAI_BSEL_32 (0 << M98925_DAI_BSEL_SHIFT)
#define M98925_DAI_BSEL_48 (1 << M98925_DAI_BSEL_SHIFT)
#define M98925_DAI_BSEL_64 (2 << M98925_DAI_BSEL_SHIFT)
#define M98925_DAI_BSEL_256 (6 << M98925_DAI_BSEL_SHIFT)

/* MAX98925_R01C_DAI_CLK_DIV_M_MSBS */
#define M98925_DAI_M_MSBS_MASK					(0xFF<<0)
#define M98925_DAI_M_MSBS_SHIFT					0
#define M98925_DAI_M_MSBS_WIDTH					8

/* MAX98925_R01D_DAI_CLK_DIV_M_LSBS */
#define M98925_DAI_M_LSBS_MASK					(0xFF<<0)
#define M98925_DAI_M_LSBS_SHIFT					0
#define M98925_DAI_M_LSBS_WIDTH					8

/* MAX98925_R01E_DAI_CLK_DIV_N_MSBS */
#define M98925_DAI_N_MSBS_MASK					(0x7F<<0)
#define M98925_DAI_N_MSBS_SHIFT					0
#define M98925_DAI_N_MSBS_WIDTH					7

/* MAX98925_R01F_DAI_CLK_DIV_N_LSBS */
#define M98925_DAI_N_LSBS_MASK					(0xFF<<0)
#define M98925_DAI_N_LSBS_SHIFT					0
#define M98925_DAI_N_LSBS_WIDTH					8

/* MAX98925_R020_FORMAT */
#define M98925_DAI_CHANSZ_MASK					(0x03<<6)
#define M98925_DAI_CHANSZ_SHIFT					6
#define M98925_DAI_CHANSZ_WIDTH					2
#define M98925_DAI_EXTBCLK_HIZ_MASK				(1<<4)
#define M98925_DAI_EXTBCLK_HIZ_SHIFT			4
#define M98925_DAI_EXTBCLK_HIZ_WIDTH			1
#define M98925_DAI_WCI_MASK						(1<<3)
#define M98925_DAI_WCI_SHIFT					3
#define M98925_DAI_WCI_WIDTH					1
#define M98925_DAI_BCI_MASK						(1<<2)
#define M98925_DAI_BCI_SHIFT					2
#define M98925_DAI_BCI_WIDTH					1
#define M98925_DAI_DLY_MASK						(1<<1)
#define M98925_DAI_DLY_SHIFT					1
#define M98925_DAI_DLY_WIDTH					1
#define M98925_DAI_TDM_MASK						(1<<0)
#define M98925_DAI_TDM_SHIFT					0
#define M98925_DAI_TDM_WIDTH					1

#define M98925_DAI_CHANSZ_16 (1 << M98925_DAI_CHANSZ_SHIFT)
#define M98925_DAI_CHANSZ_24 (2 << M98925_DAI_CHANSZ_SHIFT)
#define M98925_DAI_CHANSZ_32 (3 << M98925_DAI_CHANSZ_SHIFT)

/* MAX98925_R021_TDM_SLOT_SELECT */
#define M98925_DAI_DO_EN_MASK					(1<<7)
#define M98925_DAI_DO_EN_SHIFT					7
#define M98925_DAI_DO_EN_WIDTH					1
#define M98925_DAI_DIN_EN_MASK					(1<<6)
#define M98925_DAI_DIN_EN_SHIFT					6
#define M98925_DAI_DIN_EN_WIDTH					1
#define M98925_DAI_INR_SOURCE_MASK				(0x07<<3)
#define M98925_DAI_INR_SOURCE_SHIFT				3
#define M98925_DAI_INR_SOURCE_WIDTH				3
#define M98925_DAI_INL_SOURCE_MASK				(0x07<<0)
#define M98925_DAI_INL_SOURCE_SHIFT				0
#define M98925_DAI_INL_SOURCE_WIDTH				3

/* MAX98925_R022_DOUT_CFG_VMON */
#define M98925_DAI_VMON_EN_MASK					(1<<5)
#define M98925_DAI_VMON_EN_SHIFT				5
#define M98925_DAI_VMON_EN_WIDTH				1
#define M98925_DAI_VMON_SLOT_MASK				(0x1F<<0)
#define M98925_DAI_VMON_SLOT_SHIFT				0
#define M98925_DAI_VMON_SLOT_WIDTH				5

#define M98925_DAI_VMON_SLOT_00_01 (0 << M98925_DAI_VMON_SLOT_SHIFT)
#define M98925_DAI_VMON_SLOT_01_02 (1 << M98925_DAI_VMON_SLOT_SHIFT)
#define M98925_DAI_VMON_SLOT_02_03 (2 << M98925_DAI_VMON_SLOT_SHIFT)
#define M98925_DAI_VMON_SLOT_03_04 (3 << M98925_DAI_VMON_SLOT_SHIFT)
#define M98925_DAI_VMON_SLOT_04_05 (4 << M98925_DAI_VMON_SLOT_SHIFT)
#define M98925_DAI_VMON_SLOT_05_06 (5 << M98925_DAI_VMON_SLOT_SHIFT)
#define M98925_DAI_VMON_SLOT_06_07 (6 << M98925_DAI_VMON_SLOT_SHIFT)
#define M98925_DAI_VMON_SLOT_07_08 (7 << M98925_DAI_VMON_SLOT_SHIFT)
#define M98925_DAI_VMON_SLOT_08_09 (8 << M98925_DAI_VMON_SLOT_SHIFT)
#define M98925_DAI_VMON_SLOT_09_0A (9 << M98925_DAI_VMON_SLOT_SHIFT)
#define M98925_DAI_VMON_SLOT_0A_0B (10 << M98925_DAI_VMON_SLOT_SHIFT)
#define M98925_DAI_VMON_SLOT_0B_0C (11 << M98925_DAI_VMON_SLOT_SHIFT)
#define M98925_DAI_VMON_SLOT_0C_0D (12 << M98925_DAI_VMON_SLOT_SHIFT)
#define M98925_DAI_VMON_SLOT_0D_0E (13 << M98925_DAI_VMON_SLOT_SHIFT)
#define M98925_DAI_VMON_SLOT_0E_0F (14 << M98925_DAI_VMON_SLOT_SHIFT)
#define M98925_DAI_VMON_SLOT_0F_10 (15 << M98925_DAI_VMON_SLOT_SHIFT)
#define M98925_DAI_VMON_SLOT_10_11 (16 << M98925_DAI_VMON_SLOT_SHIFT)
#define M98925_DAI_VMON_SLOT_11_12 (17 << M98925_DAI_VMON_SLOT_SHIFT)
#define M98925_DAI_VMON_SLOT_12_13 (18 << M98925_DAI_VMON_SLOT_SHIFT)
#define M98925_DAI_VMON_SLOT_13_14 (19 << M98925_DAI_VMON_SLOT_SHIFT)
#define M98925_DAI_VMON_SLOT_14_15 (20 << M98925_DAI_VMON_SLOT_SHIFT)
#define M98925_DAI_VMON_SLOT_15_16 (21 << M98925_DAI_VMON_SLOT_SHIFT)
#define M98925_DAI_VMON_SLOT_16_17 (22 << M98925_DAI_VMON_SLOT_SHIFT)
#define M98925_DAI_VMON_SLOT_17_18 (23 << M98925_DAI_VMON_SLOT_SHIFT)
#define M98925_DAI_VMON_SLOT_18_19 (24 << M98925_DAI_VMON_SLOT_SHIFT)
#define M98925_DAI_VMON_SLOT_19_1A (25 << M98925_DAI_VMON_SLOT_SHIFT)
#define M98925_DAI_VMON_SLOT_1A_1B (26 << M98925_DAI_VMON_SLOT_SHIFT)
#define M98925_DAI_VMON_SLOT_1B_1C (27 << M98925_DAI_VMON_SLOT_SHIFT)
#define M98925_DAI_VMON_SLOT_1C_1D (28 << M98925_DAI_VMON_SLOT_SHIFT)
#define M98925_DAI_VMON_SLOT_1D_1E (29 << M98925_DAI_VMON_SLOT_SHIFT)
#define M98925_DAI_VMON_SLOT_1E_1F (30 << M98925_DAI_VMON_SLOT_SHIFT)

/* MAX98925_R023_DOUT_CFG_IMON */
#define M98925_DAI_IMON_EN_MASK					(1<<5)
#define M98925_DAI_IMON_EN_SHIFT				5
#define M98925_DAI_IMON_EN_WIDTH				1
#define M98925_DAI_IMON_SLOT_MASK				(0x1F<<0)
#define M98925_DAI_IMON_SLOT_SHIFT				0
#define M98925_DAI_IMON_SLOT_WIDTH				5

#define M98925_DAI_IMON_SLOT_00_01 (0 << M98925_DAI_IMON_SLOT_SHIFT)
#define M98925_DAI_IMON_SLOT_01_02 (1 << M98925_DAI_IMON_SLOT_SHIFT)
#define M98925_DAI_IMON_SLOT_02_03 (2 << M98925_DAI_IMON_SLOT_SHIFT)
#define M98925_DAI_IMON_SLOT_03_04 (3 << M98925_DAI_IMON_SLOT_SHIFT)
#define M98925_DAI_IMON_SLOT_04_05 (4 << M98925_DAI_IMON_SLOT_SHIFT)
#define M98925_DAI_IMON_SLOT_05_06 (5 << M98925_DAI_IMON_SLOT_SHIFT)
#define M98925_DAI_IMON_SLOT_06_07 (6 << M98925_DAI_IMON_SLOT_SHIFT)
#define M98925_DAI_IMON_SLOT_07_08 (7 << M98925_DAI_IMON_SLOT_SHIFT)
#define M98925_DAI_IMON_SLOT_08_09 (8 << M98925_DAI_IMON_SLOT_SHIFT)
#define M98925_DAI_IMON_SLOT_09_0A (9 << M98925_DAI_IMON_SLOT_SHIFT)
#define M98925_DAI_IMON_SLOT_0A_0B (10 << M98925_DAI_IMON_SLOT_SHIFT)
#define M98925_DAI_IMON_SLOT_0B_0C (11 << M98925_DAI_IMON_SLOT_SHIFT)
#define M98925_DAI_IMON_SLOT_0C_0D (12 << M98925_DAI_IMON_SLOT_SHIFT)
#define M98925_DAI_IMON_SLOT_0D_0E (13 << M98925_DAI_IMON_SLOT_SHIFT)
#define M98925_DAI_IMON_SLOT_0E_0F (14 << M98925_DAI_IMON_SLOT_SHIFT)
#define M98925_DAI_IMON_SLOT_0F_10 (15 << M98925_DAI_IMON_SLOT_SHIFT)
#define M98925_DAI_IMON_SLOT_10_11 (16 << M98925_DAI_IMON_SLOT_SHIFT)
#define M98925_DAI_IMON_SLOT_11_12 (17 << M98925_DAI_IMON_SLOT_SHIFT)
#define M98925_DAI_IMON_SLOT_12_13 (18 << M98925_DAI_IMON_SLOT_SHIFT)
#define M98925_DAI_IMON_SLOT_13_14 (19 << M98925_DAI_IMON_SLOT_SHIFT)
#define M98925_DAI_IMON_SLOT_14_15 (20 << M98925_DAI_IMON_SLOT_SHIFT)
#define M98925_DAI_IMON_SLOT_15_16 (21 << M98925_DAI_IMON_SLOT_SHIFT)
#define M98925_DAI_IMON_SLOT_16_17 (22 << M98925_DAI_IMON_SLOT_SHIFT)
#define M98925_DAI_IMON_SLOT_17_18 (23 << M98925_DAI_IMON_SLOT_SHIFT)
#define M98925_DAI_IMON_SLOT_18_19 (24 << M98925_DAI_IMON_SLOT_SHIFT)
#define M98925_DAI_IMON_SLOT_19_1A (25 << M98925_DAI_IMON_SLOT_SHIFT)
#define M98925_DAI_IMON_SLOT_1A_1B (26 << M98925_DAI_IMON_SLOT_SHIFT)
#define M98925_DAI_IMON_SLOT_1B_1C (27 << M98925_DAI_IMON_SLOT_SHIFT)
#define M98925_DAI_IMON_SLOT_1C_1D (28 << M98925_DAI_IMON_SLOT_SHIFT)
#define M98925_DAI_IMON_SLOT_1D_1E (29 << M98925_DAI_IMON_SLOT_SHIFT)
#define M98925_DAI_IMON_SLOT_1E_1F (30 << M98925_DAI_IMON_SLOT_SHIFT)

/* MAX98925_R024_DOUT_CFG_VBAT */
#define M98925_DAI_VBAT_EN_MASK					(1<<5)
#define M98925_DAI_VBAT_EN_SHIFT				5
#define M98925_DAI_VBAT_EN_WIDTH				1
#define M98925_DAI_VBAT_SLOT_MASK				(0x1F<<0)
#define M98925_DAI_VBAT_SLOT_SHIFT				0
#define M98925_DAI_VBAT_SLOT_WIDTH				5

/* MAX98925_R025_DOUT_CFG_VBST */
#define M98925_DAI_VBST_EN_MASK					(1<<5)
#define M98925_DAI_VBST_EN_SHIFT				5
#define M98925_DAI_VBST_EN_WIDTH				1
#define M98925_DAI_VBST_SLOT_MASK				(0x1F<<0)
#define M98925_DAI_VBST_SLOT_SHIFT				0
#define M98925_DAI_VBST_SLOT_WIDTH				5

/* MAX98925_R026_DOUT_CFG_FLAG */
#define M98925_DAI_FLAG_EN_MASK					(1<<5)
#define M98925_DAI_FLAG_EN_SHIFT				5
#define M98925_DAI_FLAG_EN_WIDTH				1
#define M98925_DAI_FLAG_SLOT_MASK				(0x1F<<0)
#define M98925_DAI_FLAG_SLOT_SHIFT				0
#define M98925_DAI_FLAG_SLOT_WIDTH				5

/* MAX98925_R027_DOUT_HIZ_CFG1 */
#define M98925_DAI_SLOT_HIZ_CFG1_MASK			(0xFF<<0)
#define M98925_DAI_SLOT_HIZ_CFG1_SHIFT			0
#define M98925_DAI_SLOT_HIZ_CFG1_WIDTH			8

/* MAX98925_R028_DOUT_HIZ_CFG2 */
#define M98925_DAI_SLOT_HIZ_CFG2_MASK			(0xFF<<0)
#define M98925_DAI_SLOT_HIZ_CFG2_SHIFT			0
#define M98925_DAI_SLOT_HIZ_CFG2_WIDTH			8

/* MAX98925_R029_DOUT_HIZ_CFG3 */
#define M98925_DAI_SLOT_HIZ_CFG3_MASK			(0xFF<<0)
#define M98925_DAI_SLOT_HIZ_CFG3_SHIFT			0
#define M98925_DAI_SLOT_HIZ_CFG3_WIDTH			8

/* MAX98925_R02A_DOUT_HIZ_CFG4 */
#define M98925_DAI_SLOT_HIZ_CFG4_MASK			(0xFF<<0)
#define M98925_DAI_SLOT_HIZ_CFG4_SHIFT			0
#define M98925_DAI_SLOT_HIZ_CFG4_WIDTH			8

/* MAX98925_R02B_DOUT_DRV_STRENGTH */
#define M98925_DAI_OUT_DRIVE_MASK				(0x03<<0)
#define M98925_DAI_OUT_DRIVE_SHIFT				0
#define M98925_DAI_OUT_DRIVE_WIDTH				2

/* MAX98925_R02C_FILTERS */
#define M98925_ADC_DITHER_EN_MASK				(1<<7)
#define M98925_ADC_DITHER_EN_SHIFT				7
#define M98925_ADC_DITHER_EN_WIDTH				1
#define M98925_IV_DCB_EN_MASK					(1<<6)
#define M98925_IV_DCB_EN_SHIFT					6
#define M98925_IV_DCB_EN_WIDTH					1
#define M98925_DAC_DITHER_EN_MASK				(1<<4)
#define M98925_DAC_DITHER_EN_SHIFT				4
#define M98925_DAC_DITHER_EN_WIDTH				1
#define M98925_DAC_FILTER_MODE_MASK				(1<<3)
#define M98925_DAC_FILTER_MODE_SHIFT			3
#define M98925_DAC_FILTER_MODE_WIDTH			1
#define M98925_DAC_HPF_MASK				(0x07<<0)
#define M98925_DAC_HPF_SHIFT					0
#define M98925_DAC_HPF_WIDTH					3
#define M98925_DAC_HPF_DISABLE		(0 << M98925_DAC_HPF_SHIFT)
#define M98925_DAC_HPF_DC_BLOCK		(1 << M98925_DAC_HPF_SHIFT)
#define M98925_DAC_HPF_EN_100		(2 << M98925_DAC_HPF_SHIFT)
#define M98925_DAC_HPF_EN_200		(3 << M98925_DAC_HPF_SHIFT)
#define M98925_DAC_HPF_EN_400		(4 << M98925_DAC_HPF_SHIFT)
#define M98925_DAC_HPF_EN_800		(5 << M98925_DAC_HPF_SHIFT)

/* MAX98925_R02D_GAIN */
#define M98925_DAC_IN_SEL_MASK					(0x03<<5)
#define M98925_DAC_IN_SEL_SHIFT					5
#define M98925_DAC_IN_SEL_WIDTH					2
#define M98925_SPK_GAIN_MASK					(0x1F<<0)
#define M98925_SPK_GAIN_SHIFT					0
#define M98925_SPK_GAIN_WIDTH					5

#define M98925_DAC_IN_SEL_LEFT_DAI (0 << M98925_DAC_IN_SEL_SHIFT)
#define M98925_DAC_IN_SEL_RIGHT_DAI (1 << M98925_DAC_IN_SEL_SHIFT)
#define M98925_DAC_IN_SEL_SUMMED_DAI (2 << M98925_DAC_IN_SEL_SHIFT)
#define M98925_DAC_IN_SEL_DIV2_SUMMED_DAI (3 << M98925_DAC_IN_SEL_SHIFT)

/* MAX98925_R02E_GAIN_RAMPING */
#define M98925_SPK_RMP_EN_MASK		(1<<1)
#define M98925_SPK_RMP_EN_SHIFT		1
#define M98925_SPK_RMP_EN_WIDTH		1
#define M98925_SPK_ZCD_EN_MASK		(1<<0)
#define M98925_SPK_ZCD_EN_SHIFT		0
#define M98925_SPK_ZCD_EN_WIDTH		1

/* MAX98925_R02F_SPK_AMP */
#define M98925_SPK_MODE_MASK		(1<<0)
#define M98925_SPK_MODE_SHIFT		0
#define M98925_SPK_MODE_WIDTH		1

/* MAX98925_R030_THRESHOLD */
#define M98925_ALC_EN_MASK			(1<<5)
#define M98925_ALC_EN_SHIFT			5
#define M98925_ALC_EN_WIDTH			1
#define M98925_ALC_TH_MASK			(0x1F<<0)
#define M98925_ALC_TH_SHIFT			0
#define M98925_ALC_TH_WIDTH			5

/* MAX98925_R031_ALC_ATTACK */
#define M98925_ALC_ATK_STEP_MASK	(0x0F<<4)
#define M98925_ALC_ATK_STEP_SHIFT	4
#define M98925_ALC_ATK_STEP_WIDTH	4
#define M98925_ALC_ATK_RATE_MASK	(0x7<<0)
#define M98925_ALC_ATK_RATE_SHIFT	0
#define M98925_ALC_ATK_RATE_WIDTH	3

/* MAX98925_R032_ALC_ATTEN_RLS */
#define M98925_ALC_MAX_ATTEN_MASK	(0x0F<<4)
#define M98925_ALC_MAX_ATTEN_SHIFT	4
#define M98925_ALC_MAX_ATTEN_WIDTH	4
#define M98925_ALC_RLS_RATE_MASK	(0x7<<0)
#define M98925_ALC_RLS_RATE_SHIFT	0
#define M98925_ALC_RLS_RATE_WIDTH	3

/* MAX98925_R033_ALC_HOLD_RLS */
#define M98925_ALC_RLS_TGR_MASK		(1<<0)
#define M98925_ALC_RLS_TGR_SHIFT	0
#define M98925_ALC_RLS_TGR_WIDTH	1

/* MAX98925_R034_ALC_CONFIGURATION */
#define M98925_ALC_MUTE_EN_MASK		(1<<7)
#define M98925_ALC_MUTE_EN_SHIFT	7
#define M98925_ALC_MUTE_EN_WIDTH	1
#define M98925_ALC_MUTE_DLY_MASK	(0x07<<4)
#define M98925_ALC_MUTE_DLY_SHIFT	4
#define M98925_ALC_MUTE_DLY_WIDTH	3
#define M98925_ALC_RLS_DBT_MASK		(0x07<<0)
#define M98925_ALC_RLS_DBT_SHIFT	0
#define M98925_ALC_RLS_DBT_WIDTH	3

/* MAX98925_R035_BOOST_CONVERTER */
#define M98925_BST_SYNC_MASK		(1<<7)
#define M98925_BST_SYNC_SHIFT		7
#define M98925_BST_SYNC_WIDTH		1
#define M98925_BST_PHASE_MASK		(0x03<<4)
#define M98925_BST_PHASE_SHIFT		4
#define M98925_BST_PHASE_WIDTH		2
#define M98925_BST_SKIP_MODE_MASK	(0x03<<0)
#define M98925_BST_SKIP_MODE_SHIFT	0
#define M98925_BST_SKIP_MODE_WIDTH	2

/* MAX98925_R036_BLOCK_ENABLE */
#define M98925_BST_EN_MASK			(1<<7)
#define M98925_BST_EN_SHIFT			7
#define M98925_BST_EN_WIDTH			1
#define M98925_WATCH_EN_MASK		(1<<6)
#define M98925_WATCH_EN_SHIFT		6
#define M98925_WATCH_EN_WIDTH		1
#define M98925_CLKMON_EN_MASK		(1<<5)
#define M98925_CLKMON_EN_SHIFT		5
#define M98925_CLKMON_EN_WIDTH		1
#define M98925_SPK_EN_MASK			(1<<4)
#define M98925_SPK_EN_SHIFT			4
#define M98925_SPK_EN_WIDTH			1
#define M98925_ADC_VBST_EN_MASK		(1<<3)
#define M98925_ADC_VBST_EN_SHIFT	3
#define M98925_ADC_VBST_EN_WIDTH	1
#define M98925_ADC_VBAT_EN_MASK		(1<<2)
#define M98925_ADC_VBAT_EN_SHIFT	2
#define M98925_ADC_VBAT_EN_WIDTH	1
#define M98925_ADC_IMON_EN_MASK		(1<<1)
#define M98925_ADC_IMON_EN_SHIFT	1
#define M98925_ADC_IMON_EN_WIDTH	1
#define M98925_ADC_VMON_EN_MASK		(1<<0)
#define M98925_ADC_VMON_EN_SHIFT	0
#define M98925_ADC_VMON_EN_WIDTH	1

/* MAX98925_R037_CONFIGURATION */
#define M98925_BST_VOUT_MASK		(0x0F<<4)
#define M98925_BST_VOUT_SHIFT		4
#define M98925_BST_VOUT_WIDTH		4
#define M98925_THERMWARN_LEVEL_MASK	(0x03<<2)
#define M98925_THERMWARN_LEVEL_SHIFT			2
#define M98925_THERMWARN_LEVEL_WIDTH			2
#define M98925_WATCH_TIME_MASK			(0x03<<0)
#define M98925_WATCH_TIME_SHIFT			0
#define M98925_WATCH_TIME_WIDTH			2

/* MAX98925_R038_GLOBAL_ENABLE */
#define M98925_EN_MASK			(1<<7)
#define M98925_EN_SHIFT			7
#define M98925_EN_WIDTH			1

/* MAX98925_R03A_BOOST_LIMITER */
#define M98925_BST_ILIM_MASK	(0x1F<<3)
#define M98925_BST_ILIM_SHIFT	3
#define M98925_BST_ILIM_WIDTH	5

/* MAX98925_R0FF_VERSION */
#define M98925_REV_ID_MASK	(0xFF<<0)
#define M98925_REV_ID_SHIFT	0
#define M98925_REV_ID_WIDTH	8

struct max98925_priv {
	struct regmap *regmap;
	struct snd_soc_component *component;
	struct max98925_pdata *pdata;
	unsigned int sysclk;
	unsigned int v_slot;
	unsigned int i_slot;
	unsigned int spk_gain;
	unsigned int ch_size;
};
#endif
