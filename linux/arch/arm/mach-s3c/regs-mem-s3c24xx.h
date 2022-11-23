https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2004 Simtec Electronics <linux@simtec.co.uk>
 *		http://www.simtec.co.uk/products/SWLINUX/
 *
 * S3C2410 Memory Control register definitions
 */

#ifndef __ARCH_ARM_MACH_S3C24XX_REGS_MEM_H
#define __ARCH_ARM_MACH_S3C24XX_REGS_MEM_H __FILE__

#include "map-s3c.h"

#define S3C2410_MEMREG(x)		(S3C24XX_VA_MEMCTRL + (x))

#define S3C2410_BWSCON			S3C2410_MEMREG(0x00)
#define S3C2410_BANKCON0		S3C2410_MEMREG(0x04)
#define S3C2410_BANKCON1		S3C2410_MEMREG(0x08)
#define S3C2410_BANKCON2		S3C2410_MEMREG(0x0C)
#define S3C2410_BANKCON3		S3C2410_MEMREG(0x10)
#define S3C2410_BANKCON4		S3C2410_MEMREG(0x14)
#define S3C2410_BANKCON5		S3C2410_MEMREG(0x18)
#define S3C2410_BANKCON6		S3C2410_MEMREG(0x1C)
#define S3C2410_BANKCON7		S3C2410_MEMREG(0x20)
#define S3C2410_REFRESH			S3C2410_MEMREG(0x24)
#define S3C2410_BANKSIZE		S3C2410_MEMREG(0x28)

#define S3C2410_BWSCON_ST1		(1 << 7)
#define S3C2410_BWSCON_ST2		(1 << 11)
#define S3C2410_BWSCON_ST3		(1 << 15)
#define S3C2410_BWSCON_ST4		(1 << 19)
#define S3C2410_BWSCON_ST5		(1 << 23)

#define S3C2410_BWSCON_GET(_bwscon, _bank) (((_bwscon) >> ((_bank) * 4)) & 0xf)

#define S3C2410_BWSCON_WS		(1 << 2)

#define S3C2410_BANKCON_PMC16		(0x3)

#define S3C2410_BANKCON_Tacp_SHIFT	(2)
#define S3C2410_BANKCON_Tcah_SHIFT	(4)
#define S3C2410_BANKCON_Tcoh_SHIFT	(6)
#define S3C2410_BANKCON_Tacc_SHIFT	(8)
#define S3C2410_BANKCON_Tcos_SHIFT	(11)
#define S3C2410_BANKCON_Tacs_SHIFT	(13)

#define S3C2410_BANKCON_SDRAM		(0x3 << 15)

#define S3C2410_REFRESH_SELF		(1 << 22)

#define S3C2410_BANKSIZE_MASK		(0x7 << 0)

#endif /* __ARCH_ARM_MACH_S3C24XX_REGS_MEM_H */
