https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __BCM63XX_FLASH_H
#define __BCM63XX_FLASH_H

enum {
	BCM63XX_FLASH_TYPE_PARALLEL,
	BCM63XX_FLASH_TYPE_SERIAL,
	BCM63XX_FLASH_TYPE_NAND,
};

int __init bcm63xx_flash_register(void);

#endif /* __BCM63XX_FLASH_H */
