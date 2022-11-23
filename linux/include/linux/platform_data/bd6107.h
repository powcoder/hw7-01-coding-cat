https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * bd6107.h - Rohm BD6107 LEDs Driver
 */
#ifndef __BD6107_H__
#define __BD6107_H__

struct device;

struct bd6107_platform_data {
	struct device *fbdev;
	unsigned int def_value;
};

#endif
