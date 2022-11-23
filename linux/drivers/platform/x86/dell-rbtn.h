https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
    Dell Airplane Mode Switch driver
    Copyright (C) 2014-2015  Pali Rohár <pali@kernel.org>

*/

#ifndef _DELL_RBTN_H_
#define _DELL_RBTN_H_

struct notifier_block;

int dell_rbtn_notifier_register(struct notifier_block *nb);
int dell_rbtn_notifier_unregister(struct notifier_block *nb);

#endif
