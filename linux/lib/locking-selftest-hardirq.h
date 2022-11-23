https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#undef IRQ_DISABLE
#undef IRQ_ENABLE
#undef IRQ_ENTER
#undef IRQ_EXIT

#define IRQ_ENABLE		HARDIRQ_ENABLE
#define IRQ_DISABLE		HARDIRQ_DISABLE
#define IRQ_ENTER		HARDIRQ_ENTER
#define IRQ_EXIT		HARDIRQ_EXIT
