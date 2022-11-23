https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
#ifndef _UAPI__ASM_POWERPC_CPUTABLE_H
#define _UAPI__ASM_POWERPC_CPUTABLE_H

/* in AT_HWCAP */
#define PPC_FEATURE_32			0x80000000
#define PPC_FEATURE_64			0x40000000
#define PPC_FEATURE_601_INSTR		0x20000000
#define PPC_FEATURE_HAS_ALTIVEC		0x10000000
#define PPC_FEATURE_HAS_FPU		0x08000000
#define PPC_FEATURE_HAS_MMU		0x04000000
#define PPC_FEATURE_HAS_4xxMAC		0x02000000
#define PPC_FEATURE_UNIFIED_CACHE	0x01000000
#define PPC_FEATURE_HAS_SPE		0x00800000
#define PPC_FEATURE_HAS_EFP_SINGLE	0x00400000
#define PPC_FEATURE_HAS_EFP_DOUBLE	0x00200000
#define PPC_FEATURE_NO_TB		0x00100000
#define PPC_FEATURE_POWER4		0x00080000
#define PPC_FEATURE_POWER5		0x00040000
#define PPC_FEATURE_POWER5_PLUS		0x00020000
#define PPC_FEATURE_CELL		0x00010000
#define PPC_FEATURE_BOOKE		0x00008000
#define PPC_FEATURE_SMT			0x00004000
#define PPC_FEATURE_ICACHE_SNOOP	0x00002000
#define PPC_FEATURE_ARCH_2_05		0x00001000
#define PPC_FEATURE_PA6T		0x00000800
#define PPC_FEATURE_HAS_DFP		0x00000400
#define PPC_FEATURE_POWER6_EXT		0x00000200
#define PPC_FEATURE_ARCH_2_06		0x00000100
#define PPC_FEATURE_HAS_VSX		0x00000080

#define PPC_FEATURE_PSERIES_PERFMON_COMPAT \
					0x00000040

/* Reserved - do not use		0x00000004 */
#define PPC_FEATURE_TRUE_LE		0x00000002
#define PPC_FEATURE_PPC_LE		0x00000001

/* in AT_HWCAP2 */
#define PPC_FEATURE2_ARCH_2_07		0x80000000
#define PPC_FEATURE2_HTM		0x40000000
#define PPC_FEATURE2_DSCR		0x20000000
#define PPC_FEATURE2_EBB		0x10000000
#define PPC_FEATURE2_ISEL		0x08000000
#define PPC_FEATURE2_TAR		0x04000000
#define PPC_FEATURE2_VEC_CRYPTO		0x02000000
#define PPC_FEATURE2_HTM_NOSC		0x01000000
#define PPC_FEATURE2_ARCH_3_00		0x00800000 /* ISA 3.00 */
#define PPC_FEATURE2_HAS_IEEE128	0x00400000 /* VSX IEEE Binary Float 128-bit */
#define PPC_FEATURE2_DARN		0x00200000 /* darn random number insn */
#define PPC_FEATURE2_SCV		0x00100000 /* scv syscall */
#define PPC_FEATURE2_HTM_NO_SUSPEND	0x00080000 /* TM w/out suspended state */
#define PPC_FEATURE2_ARCH_3_1		0x00040000 /* ISA 3.1 */
#define PPC_FEATURE2_MMA		0x00020000 /* Matrix Multiply Assist */

/*
 * IMPORTANT!
 * All future PPC_FEATURE definitions should be allocated in cooperation with
 * OPAL / skiboot firmware, in accordance with the ibm,powerpc-cpu-features
 * device tree binding.
 */

#endif /* _UAPI__ASM_POWERPC_CPUTABLE_H */
