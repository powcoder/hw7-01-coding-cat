https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __ALPHA_DELAY_H
#define __ALPHA_DELAY_H

extern void __delay(int loops);
extern void udelay(unsigned long usecs);

extern void ndelay(unsigned long nsecs);
#define ndelay ndelay

#endif /* defined(__ALPHA_DELAY_H) */