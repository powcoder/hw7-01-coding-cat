https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __EFI_FAKE_MEM_H__
#define __EFI_FAKE_MEM_H__
#include <asm/efi.h>

#define EFI_MAX_FAKEMEM CONFIG_EFI_MAX_FAKE_MEM

extern struct efi_mem_range efi_fake_mems[EFI_MAX_FAKEMEM];
extern int nr_fake_mem;
#endif /* __EFI_FAKE_MEM_H__ */
