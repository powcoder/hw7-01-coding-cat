https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */

#ifndef __ASM_CSKY_MEMORY_H
#define __ASM_CSKY_MEMORY_H

#include <linux/compiler.h>
#include <linux/const.h>
#include <linux/types.h>
#include <linux/sizes.h>

#define FIXADDR_TOP	_AC(0xffffc000, UL)
#define PKMAP_BASE	_AC(0xff800000, UL)
#define VMALLOC_START	_AC(0xc0008000, UL)
#define VMALLOC_END	(PKMAP_BASE - (PAGE_SIZE * 2))

#ifdef CONFIG_HAVE_TCM
#ifdef CONFIG_HAVE_DTCM
#define TCM_NR_PAGES	(CONFIG_ITCM_NR_PAGES + CONFIG_DTCM_NR_PAGES)
#else
#define TCM_NR_PAGES	(CONFIG_ITCM_NR_PAGES)
#endif
#define FIXADDR_TCM	_AC(FIXADDR_TOP - (TCM_NR_PAGES * PAGE_SIZE), UL)
#endif

#endif
