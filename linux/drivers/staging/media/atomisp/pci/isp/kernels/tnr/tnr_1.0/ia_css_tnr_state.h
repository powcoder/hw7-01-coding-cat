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

#ifndef __IA_CSS_TNR_STATE_H
#define __IA_CSS_TNR_STATE_H

#include "type_support.h"

/* TNR (temporal noise reduction) */
struct sh_css_isp_tnr_dmem_state {
	u32 tnr_in_buf_idx;
	u32 tnr_out_buf_idx;
};

#endif /* __IA_CSS_TNR_STATE_H */
