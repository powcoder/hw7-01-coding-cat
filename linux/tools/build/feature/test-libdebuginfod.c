https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0
#include <elfutils/debuginfod.h>

int main(void)
{
	debuginfod_client* c = debuginfod_begin();
	return (long)c;
}
