https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#include <linux/reboot.h>

extern void footbridge_timer_init(void);
extern void isa_timer_init(void);

extern void isa_rtc_init(void);

extern void footbridge_map_io(void);
extern void footbridge_init_irq(void);

extern void isa_init_irq(unsigned int irq);
extern void footbridge_restart(enum reboot_mode, const char *);

extern void footbridge_sched_clock(void);
