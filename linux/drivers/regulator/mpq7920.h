https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * mpq7920.h  -  Regulator definitions for mpq7920
 *
 * Copyright 2019 Monolithic Power Systems, Inc
 *
 */

#ifndef __MPQ7920_H__
#define __MPQ7920_H__

#define MPQ7920_REG_CTL0		0x00
#define MPQ7920_REG_CTL1		0x01
#define MPQ7920_REG_CTL2		0x02
#define MPQ7920_BUCK1_REG_A		0x03
#define MPQ7920_BUCK1_REG_B		0x04
#define MPQ7920_BUCK1_REG_C		0x05
#define MPQ7920_BUCK1_REG_D		0x06
#define MPQ7920_BUCK2_REG_A		0x07
#define MPQ7920_BUCK2_REG_B		0x08
#define MPQ7920_BUCK2_REG_C		0x09
#define MPQ7920_BUCK2_REG_D		0x0a
#define MPQ7920_BUCK3_REG_A		0x0b
#define MPQ7920_BUCK3_REG_B		0x0c
#define MPQ7920_BUCK3_REG_C		0x0d
#define MPQ7920_BUCK3_REG_D		0x0e
#define MPQ7920_BUCK4_REG_A		0x0f
#define MPQ7920_BUCK4_REG_B		0x10
#define MPQ7920_BUCK4_REG_C		0x11
#define MPQ7920_BUCK4_REG_D		0x12
#define MPQ7920_LDO1_REG_A		0x13
#define MPQ7920_LDO1_REG_B		0x0
#define MPQ7920_LDO2_REG_A		0x14
#define MPQ7920_LDO2_REG_B		0x15
#define MPQ7920_LDO2_REG_C		0x16
#define MPQ7920_LDO3_REG_A		0x17
#define MPQ7920_LDO3_REG_B		0x18
#define MPQ7920_LDO3_REG_C		0x19
#define MPQ7920_LDO4_REG_A		0x1a
#define MPQ7920_LDO4_REG_B		0x1b
#define MPQ7920_LDO4_REG_C		0x1c
#define MPQ7920_LDO5_REG_A		0x1d
#define MPQ7920_LDO5_REG_B		0x1e
#define MPQ7920_LDO5_REG_C		0x1f
#define MPQ7920_REG_MODE		0x20
#define MPQ7920_REG_REGULATOR_EN	0x22

#define MPQ7920_MASK_VREF		0x7f
#define MPQ7920_MASK_BUCK_ILIM		0xc0
#define MPQ7920_MASK_LDO_ILIM		BIT(6)
#define MPQ7920_MASK_DISCHARGE		BIT(5)
#define MPQ7920_MASK_MODE		0xc0
#define MPQ7920_MASK_SOFTSTART		0x0c
#define MPQ7920_MASK_SWITCH_FREQ	0x30
#define MPQ7920_MASK_BUCK_PHASE_DEALY	0x30
#define MPQ7920_MASK_DVS_SLEWRATE	0xc0
#define MPQ7920_MASK_OVP		0x40
#define MPQ7920_OVP_DISABLE		~(0x40)
#define MPQ7920_DISCHARGE_ON		BIT(5)

#define MPQ7920_REGULATOR_EN_OFFSET	7

/* values in mV */
#define MPQ7920_BUCK_VOLT_MIN		400000
#define MPQ7920_LDO_VOLT_MIN		650000
#define MPQ7920_VOLT_MAX		3587500
#define MPQ7920_VOLT_STEP		12500

#endif /* __MPQ7920_H__ */
