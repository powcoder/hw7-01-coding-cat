https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0
#include <bfd.h>
#include <dis-asm.h>

int main(void)
{
	bfd *abfd = bfd_openr(NULL, NULL);

	disassembler(bfd_get_arch(abfd),
		     bfd_big_endian(abfd),
		     bfd_get_mach(abfd),
		     abfd);

	return 0;
}
