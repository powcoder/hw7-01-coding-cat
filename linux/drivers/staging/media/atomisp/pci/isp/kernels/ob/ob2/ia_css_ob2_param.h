https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Support for Intel Camera Imaging ISP subsystem.
 * Copyright (c) 2015, Intel Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 */

#ifndef __IA_CSS_OB2_PARAM_H
#define __IA_CSS_OB2_PARAM_H

#include "type_support.h"

/* OB2 (Optical Black) */
struct sh_css_isp_ob2_params {
	s32 blacklevel_gr;
	s32 blacklevel_r;
	s32 blacklevel_b;
	s32 blacklevel_gb;
};

#endif /* __IA_CSS_OB2_PARAM_H */
