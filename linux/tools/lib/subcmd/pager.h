https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __SUBCMD_PAGER_H
#define __SUBCMD_PAGER_H

extern void pager_init(const char *pager_env);

extern void setup_pager(void);
extern int pager_in_use(void);
extern int pager_get_columns(void);
extern void force_pager(const char *);

#endif /* __SUBCMD_PAGER_H */
