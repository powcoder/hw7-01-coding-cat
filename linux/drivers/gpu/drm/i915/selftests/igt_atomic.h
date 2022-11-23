https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: MIT */
/*
 * Copyright © 2018 Intel Corporation
 */

#ifndef IGT_ATOMIC_H
#define IGT_ATOMIC_H

struct igt_atomic_section {
	const char *name;
	void (*critical_section_begin)(void);
	void (*critical_section_end)(void);
};

extern const struct igt_atomic_section igt_atomic_phases[];

#endif /* IGT_ATOMIC_H */
