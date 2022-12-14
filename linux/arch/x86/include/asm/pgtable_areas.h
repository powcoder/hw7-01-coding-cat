https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef _ASM_X86_PGTABLE_AREAS_H
#define _ASM_X86_PGTABLE_AREAS_H

#ifdef CONFIG_X86_32
# include <asm/pgtable_32_areas.h>
#endif

/* Single page reserved for the readonly IDT mapping: */
#define CPU_ENTRY_AREA_RO_IDT		CPU_ENTRY_AREA_BASE
#define CPU_ENTRY_AREA_PER_CPU		(CPU_ENTRY_AREA_RO_IDT + PAGE_SIZE)

#define CPU_ENTRY_AREA_RO_IDT_VADDR	((void *)CPU_ENTRY_AREA_RO_IDT)

#define CPU_ENTRY_AREA_MAP_SIZE		(CPU_ENTRY_AREA_PER_CPU + CPU_ENTRY_AREA_ARRAY_SIZE - CPU_ENTRY_AREA_BASE)

#endif /* _ASM_X86_PGTABLE_AREAS_H */
