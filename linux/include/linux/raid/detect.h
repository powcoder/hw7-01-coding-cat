https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */

void md_autodetect_dev(dev_t dev);

#ifdef CONFIG_BLK_DEV_MD
void md_run_setup(void);
#else
static inline void md_run_setup(void)
{
}
#endif
