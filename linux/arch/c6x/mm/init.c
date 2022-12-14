https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0-only
/*
 *  Port on Texas Instruments TMS320C6x architecture
 *
 *  Copyright (C) 2004, 2009, 2010, 2011 Texas Instruments Incorporated
 *  Author: Aurelien Jacquiot (aurelien.jacquiot@jaluna.com)
 */
#include <linux/mm.h>
#include <linux/swap.h>
#include <linux/module.h>
#include <linux/memblock.h>
#ifdef CONFIG_BLK_DEV_RAM
#include <linux/blkdev.h>
#endif
#include <linux/initrd.h>

#include <asm/sections.h>
#include <linux/uaccess.h>

/*
 * ZERO_PAGE is a special page that is used for zero-initialized
 * data and COW.
 */
unsigned long empty_zero_page;
EXPORT_SYMBOL(empty_zero_page);

/*
 * paging_init() continues the virtual memory environment setup which
 * was begun by the code in arch/head.S.
 * The parameters are pointers to where to stick the starting and ending
 * addresses  of available kernel virtual memory.
 */
void __init paging_init(void)
{
	struct pglist_data *pgdat = NODE_DATA(0);
	unsigned long max_zone_pfn[MAX_NR_ZONES] = {0, };

	empty_zero_page      = (unsigned long) memblock_alloc(PAGE_SIZE,
							      PAGE_SIZE);
	if (!empty_zero_page)
		panic("%s: Failed to allocate %lu bytes align=0x%lx\n",
		      __func__, PAGE_SIZE, PAGE_SIZE);

	/*
	 * Set up user data space
	 */
	set_fs(KERNEL_DS);

	/*
	 * Define zones
	 */
	max_zone_pfn[ZONE_NORMAL] = memory_end >> PAGE_SHIFT;

	free_area_init(max_zone_pfn);
}

void __init mem_init(void)
{
	high_memory = (void *)(memory_end & PAGE_MASK);

	/* this will put all memory onto the freelists */
	memblock_free_all();

	mem_init_print_info(NULL);
}
