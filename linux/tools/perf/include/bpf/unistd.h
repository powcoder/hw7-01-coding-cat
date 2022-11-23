https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: LGPL-2.1

#include <bpf.h>

static int (*bpf_get_current_pid_tgid)(void) = (void *)BPF_FUNC_get_current_pid_tgid;

static pid_t getpid(void)
{
	return bpf_get_current_pid_tgid();
}
