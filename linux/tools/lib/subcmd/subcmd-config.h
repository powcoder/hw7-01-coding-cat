https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __PERF_SUBCMD_CONFIG_H
#define __PERF_SUBCMD_CONFIG_H

struct subcmd_config {
	const char *exec_name;
	const char *prefix;
	const char *exec_path;
	const char *exec_path_env;
	const char *pager_env;
};

extern struct subcmd_config subcmd_config;

#endif /* __PERF_SUBCMD_CONFIG_H */
