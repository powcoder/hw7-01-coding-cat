https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/*
 * Copyright (C) 2017 Broadcom
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation version 2.
 *
 * This program is distributed "as is" WITHOUT ANY WARRANTY of any
 * kind, whether express or implied; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <asm/mach/arch.h>

static const char * const bcm_hr2_dt_compat[] __initconst = {
	"brcm,hr2",
	NULL,
};

DT_MACHINE_START(BCM_HR2_DT, "Broadcom Hurricane 2 SoC")
	.l2c_aux_val	= 0,
	.l2c_aux_mask	= ~0,
	.dt_compat = bcm_hr2_dt_compat,
MACHINE_END
