https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/*
 * Allwinner SoCs SRAM Controller Driver
 *
 * Copyright (C) 2015 Maxime Ripard
 *
 * Author: Maxime Ripard <maxime.ripard@free-electrons.com>
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2.  This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#ifndef _SUNXI_SRAM_H_
#define _SUNXI_SRAM_H_

int sunxi_sram_claim(struct device *dev);
int sunxi_sram_release(struct device *dev);

#endif /* _SUNXI_SRAM_H_ */
