https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright 2014 Linaro Ltd.
 * Copyright (C) 2014 ZTE Corporation.
 */

#include <asm/mach/arch.h>
#include <asm/mach/map.h>

#include <linux/of_address.h>
#include <linux/of_platform.h>

static const char *const zx296702_dt_compat[] __initconst = {
	"zte,zx296702",
	NULL,
};

DT_MACHINE_START(ZX, "ZTE ZX296702 (Device Tree)")
	.dt_compat	= zx296702_dt_compat,
	.l2c_aux_val    = 0,
	.l2c_aux_mask   = ~0,
MACHINE_END
