https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#include <linux/of.h>
#include <linux/mtd/map.h>

#ifdef CONFIG_MTD_PHYSMAP_VERSATILE
int of_flash_probe_versatile(struct platform_device *pdev,
			     struct device_node *np,
			     struct map_info *map);
#else
static inline
int of_flash_probe_versatile(struct platform_device *pdev,
			     struct device_node *np,
			     struct map_info *map)
{
	return 0;
}
#endif
