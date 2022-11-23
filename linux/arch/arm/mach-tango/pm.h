https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */

#ifdef CONFIG_SUSPEND
void __init tango_pm_init(void);
#else
#define tango_pm_init NULL
#endif
