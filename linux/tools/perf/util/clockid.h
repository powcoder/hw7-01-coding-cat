https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */

#ifndef __PERF_CLOCKID_H
#define __PERF_CLOCKID_H

struct option;
int parse_clockid(const struct option *opt, const char *str, int unset);

const char *clockid_name(clockid_t clk_id);

#endif
