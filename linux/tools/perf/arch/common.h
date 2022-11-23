https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef ARCH_PERF_COMMON_H
#define ARCH_PERF_COMMON_H

#include <stdbool.h>

struct perf_env;

int perf_env__lookup_objdump(struct perf_env *env, const char **path);
bool perf_env__single_address_space(struct perf_env *env);

#endif /* ARCH_PERF_COMMON_H */
