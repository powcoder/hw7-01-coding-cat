https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * gpio_backlight.h - Simple GPIO-controlled backlight
 */
#ifndef __GPIO_BACKLIGHT_H__
#define __GPIO_BACKLIGHT_H__

struct device;

struct gpio_backlight_platform_data {
	struct device *fbdev;
};

#endif
