https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0
#include <cpuid.h>

int main(void)
{
	unsigned int eax = 0, ebx = 0, ecx = 0, edx = 0;
	return __get_cpuid(0x15, &eax, &ebx, &ecx, &edx);
}