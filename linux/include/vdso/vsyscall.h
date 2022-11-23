https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __VDSO_VSYSCALL_H
#define __VDSO_VSYSCALL_H

#ifndef __ASSEMBLY__

#include <asm/vdso/vsyscall.h>

unsigned long vdso_update_begin(void);
void vdso_update_end(unsigned long flags);

#endif /* !__ASSEMBLY__ */

#endif /* __VDSO_VSYSCALL_H */
