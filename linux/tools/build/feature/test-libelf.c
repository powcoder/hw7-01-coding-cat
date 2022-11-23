https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0
#include <libelf.h>

int main(void)
{
	Elf *elf = elf_begin(0, ELF_C_READ, 0);

	return (long)elf;
}
