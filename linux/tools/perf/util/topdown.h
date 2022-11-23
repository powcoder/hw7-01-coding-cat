https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef TOPDOWN_H
#define TOPDOWN_H 1
#include "evsel.h"

bool arch_topdown_check_group(bool *warn);
void arch_topdown_group_warn(void);
bool arch_topdown_sample_read(struct evsel *leader);

int topdown_filter_events(const char **attr, char **str, bool use_group);

#endif
