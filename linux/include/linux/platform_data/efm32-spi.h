https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __LINUX_PLATFORM_DATA_EFM32_SPI_H__
#define __LINUX_PLATFORM_DATA_EFM32_SPI_H__

#include <linux/types.h>

/**
 * struct efm32_spi_pdata
 * @location: pinmux location for the I/O pins (to be written to the ROUTE
 * 	register)
 */
struct efm32_spi_pdata {
	u8 location;
};
#endif /* ifndef __LINUX_PLATFORM_DATA_EFM32_SPI_H__ */
