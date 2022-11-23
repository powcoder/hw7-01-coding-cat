https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * OMAP44xx PRCM MPU instance offset macros
 *
 * Copyright (C) 2010, 2012 Texas Instruments, Inc.
 * Copyright (C) 2010 Nokia Corporation
 *
 * Paul Walmsley (paul@pwsan.com)
 * Rajendra Nayak (rnayak@ti.com)
 * Benoit Cousson (b-cousson@ti.com)
 *
 * This file is automatically generated from the OMAP hardware databases.
 * We respectfully ask that any modifications to this file be coordinated
 * with the public linux-omap@vger.kernel.org mailing list and the
 * authors above to ensure that the autogeneration scripts are kept
 * up-to-date with the file contents.
 *
 * XXX This file needs to be updated to align on one of "OMAP4", "OMAP44XX",
 *     or "OMAP4430".
 */

#ifndef __ARCH_ARM_MACH_OMAP2_PRCM_MPU44XX_H
#define __ARCH_ARM_MACH_OMAP2_PRCM_MPU44XX_H

#include "prcm_mpu_44xx_54xx.h"

#define OMAP4430_PRCM_MPU_BASE			0x48243000

#define OMAP44XX_PRCM_MPU_REGADDR(inst, reg)				\
	OMAP2_L4_IO_ADDRESS(OMAP4430_PRCM_MPU_BASE + (inst) + (reg))

/* PRCM_MPU instances */
#define OMAP4430_PRCM_MPU_OCP_SOCKET_PRCM_INST	0x0000
#define OMAP4430_PRCM_MPU_DEVICE_PRM_INST	0x0200
#define OMAP4430_PRCM_MPU_CPU0_INST		0x0400
#define OMAP4430_PRCM_MPU_CPU1_INST		0x0800

/* PRCM_MPU clockdomain register offsets (from instance start) */
#define OMAP4430_PRCM_MPU_CPU0_CPU0_CDOFFS	0x0018
#define OMAP4430_PRCM_MPU_CPU1_CPU1_CDOFFS	0x0018


/*
 * PRCM_MPU
 *
 * The PRCM_MPU is a local PRCM inside the MPU subsystem. For the PRCM (global)
 * point of view the PRCM_MPU is a single entity. It shares the same
 * programming model as the global PRCM and thus can be assimilate as two new
 * MOD inside the PRCM
 */

/* PRCM_MPU.OCP_SOCKET_PRCM register offsets */
#define OMAP4_REVISION_PRCM_OFFSET		0x0000
#define OMAP4430_REVISION_PRCM			OMAP44XX_PRCM_MPU_REGADDR(OMAP4430_PRCM_MPU_OCP_SOCKET_PRCM_INST, 0x0000)

/* PRCM_MPU.DEVICE_PRM register offsets */
#define OMAP4_PRCM_MPU_PRM_RSTST_OFFSET		0x0000
#define OMAP4430_PRCM_MPU_PRM_RSTST		OMAP44XX_PRCM_MPU_REGADDR(OMAP4430_PRCM_MPU_DEVICE_PRM_INST, 0x0000)
#define OMAP4_PRCM_MPU_PRM_PSCON_COUNT_OFFSET	0x0004
#define OMAP4430_PRCM_MPU_PRM_PSCON_COUNT	OMAP44XX_PRCM_MPU_REGADDR(OMAP4430_PRCM_MPU_DEVICE_PRM_INST, 0x0004)

/* PRCM_MPU.CPU0 register offsets */
#define OMAP4_PM_CPU0_PWRSTCTRL_OFFSET		0x0000
#define OMAP4430_PM_CPU0_PWRSTCTRL		OMAP44XX_PRCM_MPU_REGADDR(OMAP4430_PRCM_MPU_CPU0_INST, 0x0000)
#define OMAP4_PM_CPU0_PWRSTST_OFFSET		0x0004
#define OMAP4430_PM_CPU0_PWRSTST		OMAP44XX_PRCM_MPU_REGADDR(OMAP4430_PRCM_MPU_CPU0_INST, 0x0004)
#define OMAP4_RM_CPU0_CPU0_CONTEXT_OFFSET	0x0008
#define OMAP4430_RM_CPU0_CPU0_CONTEXT		OMAP44XX_PRCM_MPU_REGADDR(OMAP4430_PRCM_MPU_CPU0_INST, 0x0008)
#define OMAP4_RM_CPU0_CPU0_RSTCTRL_OFFSET	0x000c
#define OMAP4430_RM_CPU0_CPU0_RSTCTRL		OMAP44XX_PRCM_MPU_REGADDR(OMAP4430_PRCM_MPU_CPU0_INST, 0x000c)
#define OMAP4_RM_CPU0_CPU0_RSTST_OFFSET		0x0010
#define OMAP4430_RM_CPU0_CPU0_RSTST		OMAP44XX_PRCM_MPU_REGADDR(OMAP4430_PRCM_MPU_CPU0_INST, 0x0010)
#define OMAP4_CM_CPU0_CPU0_CLKCTRL_OFFSET	0x0014
#define OMAP4430_CM_CPU0_CPU0_CLKCTRL		OMAP44XX_PRCM_MPU_REGADDR(OMAP4430_PRCM_MPU_CPU0_INST, 0x0014)
#define OMAP4_CM_CPU0_CLKSTCTRL_OFFSET		0x0018
#define OMAP4430_CM_CPU0_CLKSTCTRL		OMAP44XX_PRCM_MPU_REGADDR(OMAP4430_PRCM_MPU_CPU0_INST, 0x0018)

/* PRCM_MPU.CPU1 register offsets */
#define OMAP4_PM_CPU1_PWRSTCTRL_OFFSET		0x0000
#define OMAP4430_PM_CPU1_PWRSTCTRL		OMAP44XX_PRCM_MPU_REGADDR(OMAP4430_PRCM_MPU_CPU1_INST, 0x0000)
#define OMAP4_PM_CPU1_PWRSTST_OFFSET		0x0004
#define OMAP4430_PM_CPU1_PWRSTST		OMAP44XX_PRCM_MPU_REGADDR(OMAP4430_PRCM_MPU_CPU1_INST, 0x0004)
#define OMAP4_RM_CPU1_CPU1_CONTEXT_OFFSET	0x0008
#define OMAP4430_RM_CPU1_CPU1_CONTEXT		OMAP44XX_PRCM_MPU_REGADDR(OMAP4430_PRCM_MPU_CPU1_INST, 0x0008)
#define OMAP4_RM_CPU1_CPU1_RSTCTRL_OFFSET	0x000c
#define OMAP4430_RM_CPU1_CPU1_RSTCTRL		OMAP44XX_PRCM_MPU_REGADDR(OMAP4430_PRCM_MPU_CPU1_INST, 0x000c)
#define OMAP4_RM_CPU1_CPU1_RSTST_OFFSET		0x0010
#define OMAP4430_RM_CPU1_CPU1_RSTST		OMAP44XX_PRCM_MPU_REGADDR(OMAP4430_PRCM_MPU_CPU1_INST, 0x0010)
#define OMAP4_CM_CPU1_CPU1_CLKCTRL_OFFSET	0x0014
#define OMAP4430_CM_CPU1_CPU1_CLKCTRL		OMAP44XX_PRCM_MPU_REGADDR(OMAP4430_PRCM_MPU_CPU1_INST, 0x0014)
#define OMAP4_CM_CPU1_CLKSTCTRL_OFFSET		0x0018
#define OMAP4430_CM_CPU1_CLKSTCTRL		OMAP44XX_PRCM_MPU_REGADDR(OMAP4430_PRCM_MPU_CPU1_INST, 0x0018)

#endif
