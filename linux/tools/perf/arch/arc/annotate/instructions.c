https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0
#include <linux/compiler.h>

static int arc__annotate_init(struct arch *arch, char *cpuid __maybe_unused)
{
	arch->initialized = true;
	arch->objdump.comment_char = ';';
	return 0;
}
