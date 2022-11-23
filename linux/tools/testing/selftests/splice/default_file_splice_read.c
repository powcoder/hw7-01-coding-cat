https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0
#define _GNU_SOURCE
#include <fcntl.h>

int main(int argc, char **argv)
{
        splice(0, 0, 1, 0, 1<<30, 0);
	return 0;
}
