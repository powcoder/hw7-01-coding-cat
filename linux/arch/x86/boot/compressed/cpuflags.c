https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0
#include "../cpuflags.c"

bool has_cpuflag(int flag)
{
	get_cpuflags();

	return test_bit(flag, cpu.flags);
}
