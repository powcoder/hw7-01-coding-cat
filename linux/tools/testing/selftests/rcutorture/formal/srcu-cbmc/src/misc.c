https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0
#include <config.h>

#include "misc.h"
#include "bug_on.h"

struct rcu_head;

void wakeme_after_rcu(struct rcu_head *head)
{
	BUG();
}
