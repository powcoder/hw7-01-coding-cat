https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#!/bin/sh
# SPDX-License-Identifier: GPL-2.0

cat << "END" | $@ -x c - -o /dev/null >/dev/null 2>&1
#include <stdio.h>
int main(void)
{
	printf("");
	return 0;
}
END