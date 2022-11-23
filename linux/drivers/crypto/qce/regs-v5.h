https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2012-2014, The Linux Foundation. All rights reserved.
 */

#ifndef _REGS_V5_H_
#define _REGS_V5_H_

#include <linux/bitops.h>

#define REG_VERSION			0x000
#define REG_STATUS			0x100
#define REG_STATUS2			0x104
#define REG_ENGINES_AVAIL		0x108
#define REG_FIFO_SIZES			0x10c
#define REG_SEG_SIZE			0x110
#define REG_GOPROC			0x120
#define REG_ENCR_SEG_CFG		0x200
#define REG_ENCR_SEG_SIZE		0x204
#define REG_ENCR_SEG_START		0x208
#define REG_CNTR0_IV0			0x20c
#define REG_CNTR1_IV1			0x210
#define REG_CNTR2_IV2			0x214
#define REG_CNTR3_IV3			0x218
#define REG_CNTR_MASK			0x21C
#define REG_ENCR_CCM_INT_CNTR0		0x220
#define REG_ENCR_CCM_INT_CNTR1		0x224
#define REG_ENCR_CCM_INT_CNTR2		0x228
#define REG_ENCR_CCM_INT_CNTR3		0x22c
#define REG_ENCR_XTS_DU_SIZE		0x230
#define REG_CNTR_MASK2			0x234
#define REG_CNTR_MASK1			0x238
#define REG_CNTR_MASK0			0x23c
#define REG_AUTH_SEG_CFG		0x300
#define REG_AUTH_SEG_SIZE		0x304
#define REG_AUTH_SEG_START		0x308
#define REG_AUTH_IV0			0x310
#define REG_AUTH_IV1			0x314
#define REG_AUTH_IV2			0x318
#define REG_AUTH_IV3			0x31c
#define REG_AUTH_IV4			0x320
#define REG_AUTH_IV5			0x324
#define REG_AUTH_IV6			0x328
#define REG_AUTH_IV7			0x32c
#define REG_AUTH_IV8			0x330
#define REG_AUTH_IV9			0x334
#define REG_AUTH_IV10			0x338
#define REG_AUTH_IV11			0x33c
#define REG_AUTH_IV12			0x340
#define REG_AUTH_IV13			0x344
#define REG_AUTH_IV14			0x348
#define REG_AUTH_IV15			0x34c
#define REG_AUTH_INFO_NONCE0		0x350
#define REG_AUTH_INFO_NONCE1		0x354
#define REG_AUTH_INFO_NONCE2		0x358
#define REG_AUTH_INFO_NONCE3		0x35c
#define REG_AUTH_BYTECNT0		0x390
#define REG_AUTH_BYTECNT1		0x394
#define REG_AUTH_BYTECNT2		0x398
#define REG_AUTH_BYTECNT3		0x39c
#define REG_AUTH_EXP_MAC0		0x3a0
#define REG_AUTH_EXP_MAC1		0x3a4
#define REG_AUTH_EXP_MAC2		0x3a8
#define REG_AUTH_EXP_MAC3		0x3ac
#define REG_AUTH_EXP_MAC4		0x3b0
#define REG_AUTH_EXP_MAC5		0x3b4
#define REG_AUTH_EXP_MAC6		0x3b8
#define REG_AUTH_EXP_MAC7		0x3bc
#define REG_CONFIG			0x400
#define REG_GOPROC_QC_KEY		0x1000
#define REG_GOPROC_OEM_KEY		0x2000
#define REG_ENCR_KEY0			0x3000
#define REG_ENCR_KEY1			0x3004
#define REG_ENCR_KEY2			0x3008
#define REG_ENCR_KEY3			0x300c
#define REG_ENCR_KEY4			0x3010
#define REG_ENCR_KEY5			0x3014
#define REG_ENCR_KEY6			0x3018
#define REG_ENCR_KEY7			0x301c
#define REG_ENCR_XTS_KEY0		0x3020
#define REG_ENCR_XTS_KEY1		0x3024
#define REG_ENCR_XTS_KEY2		0x3028
#define REG_ENCR_XTS_KEY3		0x302c
#define REG_ENCR_XTS_KEY4		0x3030
#define REG_ENCR_XTS_KEY5		0x3034
#define REG_ENCR_XTS_KEY6		0x3038
#define REG_ENCR_XTS_KEY7		0x303c
#define REG_AUTH_KEY0			0x3040
#define REG_AUTH_KEY1			0x3044
#define REG_AUTH_KEY2			0x3048
#define REG_AUTH_KEY3			0x304c
#define REG_AUTH_KEY4			0x3050
#define REG_AUTH_KEY5			0x3054
#define REG_AUTH_KEY6			0x3058
#define REG_AUTH_KEY7			0x305c
#define REG_AUTH_KEY8			0x3060
#define REG_AUTH_KEY9			0x3064
#define REG_AUTH_KEY10			0x3068
#define REG_AUTH_KEY11			0x306c
#define REG_AUTH_KEY12			0x3070
#define REG_AUTH_KEY13			0x3074
#define REG_AUTH_KEY14			0x3078
#define REG_AUTH_KEY15			0x307c

/* Register bits - REG_VERSION */
#define CORE_STEP_REV_SHIFT		0
#define CORE_STEP_REV_MASK		GENMASK(15, 0)
#define CORE_MINOR_REV_SHIFT		16
#define CORE_MINOR_REV_MASK		GENMASK(23, 16)
#define CORE_MAJOR_REV_SHIFT		24
#define CORE_MAJOR_REV_MASK		GENMASK(31, 24)

/* Register bits - REG_STATUS */
#define MAC_FAILED_SHIFT		31
#define DOUT_SIZE_AVAIL_SHIFT		26
#define DOUT_SIZE_AVAIL_MASK		GENMASK(30, 26)
#define DIN_SIZE_AVAIL_SHIFT		21
#define DIN_SIZE_AVAIL_MASK		GENMASK(25, 21)
#define HSD_ERR_SHIFT			20
#define ACCESS_VIOL_SHIFT		19
#define PIPE_ACTIVE_ERR_SHIFT		18
#define CFG_CHNG_ERR_SHIFT		17
#define DOUT_ERR_SHIFT			16
#define DIN_ERR_SHIFT			15
#define AXI_ERR_SHIFT			14
#define CRYPTO_STATE_SHIFT		10
#define CRYPTO_STATE_MASK		GENMASK(13, 10)
#define ENCR_BUSY_SHIFT			9
#define AUTH_BUSY_SHIFT			8
#define DOUT_INTR_SHIFT			7
#define DIN_INTR_SHIFT			6
#define OP_DONE_INTR_SHIFT		5
#define ERR_INTR_SHIFT			4
#define DOUT_RDY_SHIFT			3
#define DIN_RDY_SHIFT			2
#define OPERATION_DONE_SHIFT		1
#define SW_ERR_SHIFT			0

/* Register bits - REG_STATUS2 */
#define AXI_EXTRA_SHIFT			1
#define LOCKED_SHIFT			2

/* Register bits - REG_CONFIG */
#define REQ_SIZE_SHIFT			17
#define REQ_SIZE_MASK			GENMASK(20, 17)
#define REQ_SIZE_ENUM_1_BEAT		0
#define REQ_SIZE_ENUM_2_BEAT		1
#define REQ_SIZE_ENUM_3_BEAT		2
#define REQ_SIZE_ENUM_4_BEAT		3
#define REQ_SIZE_ENUM_5_BEAT		4
#define REQ_SIZE_ENUM_6_BEAT		5
#define REQ_SIZE_ENUM_7_BEAT		6
#define REQ_SIZE_ENUM_8_BEAT		7
#define REQ_SIZE_ENUM_9_BEAT		8
#define REQ_SIZE_ENUM_10_BEAT		9
#define REQ_SIZE_ENUM_11_BEAT		10
#define REQ_SIZE_ENUM_12_BEAT		11
#define REQ_SIZE_ENUM_13_BEAT		12
#define REQ_SIZE_ENUM_14_BEAT		13
#define REQ_SIZE_ENUM_15_BEAT		14
#define REQ_SIZE_ENUM_16_BEAT		15

#define MAX_QUEUED_REQ_SHIFT		14
#define MAX_QUEUED_REQ_MASK		GENMASK(24, 16)
#define ENUM_1_QUEUED_REQS		0
#define ENUM_2_QUEUED_REQS		1
#define ENUM_3_QUEUED_REQS		2

#define IRQ_ENABLES_SHIFT		10
#define IRQ_ENABLES_MASK		GENMASK(13, 10)

#define LITTLE_ENDIAN_MODE_SHIFT	9
#define PIPE_SET_SELECT_SHIFT		5
#define PIPE_SET_SELECT_MASK		GENMASK(8, 5)

#define HIGH_SPD_EN_N_SHIFT		4
#define MASK_DOUT_INTR_SHIFT		3
#define MASK_DIN_INTR_SHIFT		2
#define MASK_OP_DONE_INTR_SHIFT		1
#define MASK_ERR_INTR_SHIFT		0

/* Register bits - REG_AUTH_SEG_CFG */
#define COMP_EXP_MAC_SHIFT		24
#define COMP_EXP_MAC_DISABLED		0
#define COMP_EXP_MAC_ENABLED		1

#define F9_DIRECTION_SHIFT		23
#define F9_DIRECTION_UPLINK		0
#define F9_DIRECTION_DOWNLINK		1

#define AUTH_NONCE_NUM_WORDS_SHIFT	20
#define AUTH_NONCE_NUM_WORDS_MASK	GENMASK(22, 20)

#define USE_PIPE_KEY_AUTH_SHIFT		19
#define USE_HW_KEY_AUTH_SHIFT		18
#define AUTH_FIRST_SHIFT		17
#define AUTH_LAST_SHIFT			16

#define AUTH_POS_SHIFT			14
#define AUTH_POS_MASK			GENMASK(15, 14)
#define AUTH_POS_BEFORE			0
#define AUTH_POS_AFTER			1

#define AUTH_SIZE_SHIFT			9
#define AUTH_SIZE_MASK			GENMASK(13, 9)
#define AUTH_SIZE_SHA1			0
#define AUTH_SIZE_SHA256		1
#define AUTH_SIZE_ENUM_1_BYTES		0
#define AUTH_SIZE_ENUM_2_BYTES		1
#define AUTH_SIZE_ENUM_3_BYTES		2
#define AUTH_SIZE_ENUM_4_BYTES		3
#define AUTH_SIZE_ENUM_5_BYTES		4
#define AUTH_SIZE_ENUM_6_BYTES		5
#define AUTH_SIZE_ENUM_7_BYTES		6
#define AUTH_SIZE_ENUM_8_BYTES		7
#define AUTH_SIZE_ENUM_9_BYTES		8
#define AUTH_SIZE_ENUM_10_BYTES		9
#define AUTH_SIZE_ENUM_11_BYTES		10
#define AUTH_SIZE_ENUM_12_BYTES		11
#define AUTH_SIZE_ENUM_13_BYTES		12
#define AUTH_SIZE_ENUM_14_BYTES		13
#define AUTH_SIZE_ENUM_15_BYTES		14
#define AUTH_SIZE_ENUM_16_BYTES		15

#define AUTH_MODE_SHIFT			6
#define AUTH_MODE_MASK			GENMASK(8, 6)
#define AUTH_MODE_HASH			0
#define AUTH_MODE_HMAC			1
#define AUTH_MODE_CCM			0
#define AUTH_MODE_CMAC			1

#define AUTH_KEY_SIZE_SHIFT		3
#define AUTH_KEY_SIZE_MASK		GENMASK(5, 3)
#define AUTH_KEY_SZ_AES128		0
#define AUTH_KEY_SZ_AES256		2

#define AUTH_ALG_SHIFT			0
#define AUTH_ALG_MASK			GENMASK(2, 0)
#define AUTH_ALG_NONE			0
#define AUTH_ALG_SHA			1
#define AUTH_ALG_AES			2
#define AUTH_ALG_KASUMI			3
#define AUTH_ALG_SNOW3G			4
#define AUTH_ALG_ZUC			5

/* Register bits - REG_ENCR_XTS_DU_SIZE */
#define ENCR_XTS_DU_SIZE_SHIFT		0
#define ENCR_XTS_DU_SIZE_MASK		GENMASK(19, 0)

/* Register bits - REG_ENCR_SEG_CFG */
#define F8_KEYSTREAM_ENABLE_SHIFT	17
#define F8_KEYSTREAM_DISABLED		0
#define F8_KEYSTREAM_ENABLED		1

#define F8_DIRECTION_SHIFT		16
#define F8_DIRECTION_UPLINK		0
#define F8_DIRECTION_DOWNLINK		1

#define USE_PIPE_KEY_ENCR_SHIFT		15
#define USE_PIPE_KEY_ENCR_ENABLED	1
#define USE_KEY_REGISTERS		0

#define USE_HW_KEY_ENCR_SHIFT		14
#define USE_KEY_REG			0
#define USE_HW_KEY			1

#define LAST_CCM_SHIFT			13
#define LAST_CCM_XFR			1
#define INTERM_CCM_XFR			0

#define CNTR_ALG_SHIFT			11
#define CNTR_ALG_MASK			GENMASK(12, 11)
#define CNTR_ALG_NIST			0

#define ENCODE_SHIFT			10

#define ENCR_MODE_SHIFT			6
#define ENCR_MODE_MASK			GENMASK(9, 6)
#define ENCR_MODE_ECB			0
#define ENCR_MODE_CBC			1
#define ENCR_MODE_CTR			2
#define ENCR_MODE_XTS			3
#define ENCR_MODE_CCM			4

#define ENCR_KEY_SZ_SHIFT		3
#define ENCR_KEY_SZ_MASK		GENMASK(5, 3)
#define ENCR_KEY_SZ_DES			0
#define ENCR_KEY_SZ_3DES		1
#define ENCR_KEY_SZ_AES128		0
#define ENCR_KEY_SZ_AES256		2

#define ENCR_ALG_SHIFT			0
#define ENCR_ALG_MASK			GENMASK(2, 0)
#define ENCR_ALG_NONE			0
#define ENCR_ALG_DES			1
#define ENCR_ALG_AES			2
#define ENCR_ALG_KASUMI			4
#define ENCR_ALG_SNOW_3G		5
#define ENCR_ALG_ZUC			6

/* Register bits - REG_GOPROC */
#define GO_SHIFT			0
#define CLR_CNTXT_SHIFT			1
#define RESULTS_DUMP_SHIFT		2

/* Register bits - REG_ENGINES_AVAIL */
#define ENCR_AES_SEL_SHIFT		0
#define DES_SEL_SHIFT			1
#define ENCR_SNOW3G_SEL_SHIFT		2
#define ENCR_KASUMI_SEL_SHIFT		3
#define SHA_SEL_SHIFT			4
#define SHA512_SEL_SHIFT		5
#define AUTH_AES_SEL_SHIFT		6
#define AUTH_SNOW3G_SEL_SHIFT		7
#define AUTH_KASUMI_SEL_SHIFT		8
#define BAM_PIPE_SETS_SHIFT		9
#define BAM_PIPE_SETS_MASK		GENMASK(12, 9)
#define AXI_WR_BEATS_SHIFT		13
#define AXI_WR_BEATS_MASK		GENMASK(18, 13)
#define AXI_RD_BEATS_SHIFT		19
#define AXI_RD_BEATS_MASK		GENMASK(24, 19)
#define ENCR_ZUC_SEL_SHIFT		26
#define AUTH_ZUC_SEL_SHIFT		27
#define ZUC_ENABLE_SHIFT		28

#endif /* _REGS_V5_H_ */
