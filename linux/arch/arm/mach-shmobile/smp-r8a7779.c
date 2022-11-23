https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0
/*
 * SMP support for R-Mobile / SH-Mobile - r8a7779 portion
 *
 * Copyright (C) 2011  Renesas Solutions Corp.
 * Copyright (C) 2011  Magnus Damm
 */
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/smp.h>
#include <linux/spinlock.h>
#include <linux/io.h>
#include <linux/delay.h>
#include <linux/soc/renesas/rcar-sysc.h>

#include <asm/cacheflush.h>
#include <asm/smp_plat.h>
#include <asm/smp_scu.h>

#include "common.h"
#include "r8a7779.h"

#define AVECR IOMEM(0xfe700040)
#define R8A7779_SCU_BASE 0xf0000000

static int r8a7779_boot_secondary(unsigned int cpu, struct task_struct *idle)
{
	int ret = -EIO;

	cpu = cpu_logical_map(cpu);
	if (cpu)
		ret = rcar_sysc_power_up_cpu(cpu);

	return ret;
}

static void __init r8a7779_smp_prepare_cpus(unsigned int max_cpus)
{
	/* Map the reset vector (in headsmp-scu.S, headsmp.S) */
	__raw_writel(__pa(shmobile_boot_vector), AVECR);

	/* setup r8a7779 specific SCU bits */
	shmobile_smp_scu_prepare_cpus(R8A7779_SCU_BASE, max_cpus);
}

#ifdef CONFIG_HOTPLUG_CPU
static int r8a7779_platform_cpu_kill(unsigned int cpu)
{
	int ret = -EIO;

	cpu = cpu_logical_map(cpu);
	if (cpu)
		ret = rcar_sysc_power_down_cpu(cpu);

	return ret ? ret : 1;
}

static int r8a7779_cpu_kill(unsigned int cpu)
{
	if (shmobile_smp_scu_cpu_kill(cpu))
		return r8a7779_platform_cpu_kill(cpu);

	return 0;
}
#endif /* CONFIG_HOTPLUG_CPU */

const struct smp_operations r8a7779_smp_ops  __initconst = {
	.smp_prepare_cpus	= r8a7779_smp_prepare_cpus,
	.smp_boot_secondary	= r8a7779_boot_secondary,
#ifdef CONFIG_HOTPLUG_CPU
	.cpu_die		= shmobile_smp_scu_cpu_die,
	.cpu_kill		= r8a7779_cpu_kill,
#endif
};