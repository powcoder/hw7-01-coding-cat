https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __ASM_GENERIC_MMIOWB_TYPES_H
#define __ASM_GENERIC_MMIOWB_TYPES_H

#include <linux/types.h>

struct mmiowb_state {
	u16	nesting_count;
	u16	mmiowb_pending;
};

#endif	/* __ASM_GENERIC_MMIOWB_TYPES_H */
