https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0
#include <bpf/libbpf.h>

int main(void)
{
	return bpf_object__open("test") ? 0 : -1;
}
