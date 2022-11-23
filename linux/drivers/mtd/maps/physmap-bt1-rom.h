https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0-only */
#include <linux/mtd/map.h>
#include <linux/of.h>

#ifdef CONFIG_MTD_PHYSMAP_BT1_ROM
int of_flash_probe_bt1_rom(struct platform_device *pdev,
			   struct device_node *np,
			   struct map_info *map);
#else
static inline
int of_flash_probe_bt1_rom(struct platform_device *pdev,
			   struct device_node *np,
			   struct map_info *map)
{
	return 0;
}
#endif
