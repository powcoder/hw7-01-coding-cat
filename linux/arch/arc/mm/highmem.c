https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2015 Synopsys, Inc. (www.synopsys.com)
 */

#include <linux/memblock.h>
#include <linux/export.h>
#include <linux/highmem.h>
#include <linux/pgtable.h>
#include <asm/processor.h>
#include <asm/pgalloc.h>
#include <asm/tlbflush.h>

/*
 * HIGHMEM API:
 *
 * kmap() API provides sleep semantics hence referred to as "permanent maps"
 * It allows mapping LAST_PKMAP pages, using @last_pkmap_nr as the cursor
 * for book-keeping
 *
 * kmap_atomic() can't sleep (calls pagefault_disable()), thus it provides
 * shortlived ala "temporary mappings" which historically were implemented as
 * fixmaps (compile time addr etc). Their book-keeping is done per cpu.
 *
 *	Both these facts combined (preemption disabled and per-cpu allocation)
 *	means the total number of concurrent fixmaps will be limited to max
 *	such allocations in a single control path. Thus KM_TYPE_NR (another
 *	historic relic) is a small'ish number which caps max percpu fixmaps
 *
 * ARC HIGHMEM Details
 *
 * - the kernel vaddr space from 0x7z to 0x8z (currently used by vmalloc/module)
 *   is now shared between vmalloc and kmap (non overlapping though)
 *
 * - Both fixmap/pkmap use a dedicated page table each, hooked up to swapper PGD
 *   This means each only has 1 PGDIR_SIZE worth of kvaddr mappings, which means
 *   2M of kvaddr space for typical config (8K page and 11:8:13 traversal split)
 *
 * - fixmap anyhow needs a limited number of mappings. So 2M kvaddr == 256 PTE
 *   slots across NR_CPUS would be more than sufficient (generic code defines
 *   KM_TYPE_NR as 20).
 *
 * - pkmap being preemptible, in theory could do with more than 256 concurrent
 *   mappings. However, generic pkmap code: map_new_virtual(), doesn't traverse
 *   the PGD and only works with a single page table @pkmap_page_table, hence
 *   sets the limit
 */

extern pte_t * pkmap_page_table;
static pte_t * fixmap_page_table;

void *kmap_atomic_high_prot(struct page *page, pgprot_t prot)
{
	int idx, cpu_idx;
	unsigned long vaddr;

	cpu_idx = kmap_atomic_idx_push();
	idx = cpu_idx + KM_TYPE_NR * smp_processor_id();
	vaddr = FIXMAP_ADDR(idx);

	set_pte_at(&init_mm, vaddr, fixmap_page_table + idx,
		   mk_pte(page, prot));

	return (void *)vaddr;
}
EXPORT_SYMBOL(kmap_atomic_high_prot);

void kunmap_atomic_high(void *kv)
{
	unsigned long kvaddr = (unsigned long)kv;

	if (kvaddr >= FIXMAP_BASE && kvaddr < (FIXMAP_BASE + FIXMAP_SIZE)) {

		/*
		 * Because preemption is disabled, this vaddr can be associated
		 * with the current allocated index.
		 * But in case of multiple live kmap_atomic(), it still relies on
		 * callers to unmap in right order.
		 */
		int cpu_idx = kmap_atomic_idx();
		int idx = cpu_idx + KM_TYPE_NR * smp_processor_id();

		WARN_ON(kvaddr != FIXMAP_ADDR(idx));

		pte_clear(&init_mm, kvaddr, fixmap_page_table + idx);
		local_flush_tlb_kernel_range(kvaddr, kvaddr + PAGE_SIZE);

		kmap_atomic_idx_pop();
	}
}
EXPORT_SYMBOL(kunmap_atomic_high);

static noinline pte_t * __init alloc_kmap_pgtable(unsigned long kvaddr)
{
	pmd_t *pmd_k = pmd_off_k(kvaddr);
	pte_t *pte_k;

	pte_k = (pte_t *)memblock_alloc_low(PAGE_SIZE, PAGE_SIZE);
	if (!pte_k)
		panic("%s: Failed to allocate %lu bytes align=0x%lx\n",
		      __func__, PAGE_SIZE, PAGE_SIZE);

	pmd_populate_kernel(&init_mm, pmd_k, pte_k);
	return pte_k;
}

void __init kmap_init(void)
{
	/* Due to recursive include hell, we can't do this in processor.h */
	BUILD_BUG_ON(PAGE_OFFSET < (VMALLOC_END + FIXMAP_SIZE + PKMAP_SIZE));

	BUILD_BUG_ON(KM_TYPE_NR > PTRS_PER_PTE);
	pkmap_page_table = alloc_kmap_pgtable(PKMAP_BASE);

	BUILD_BUG_ON(LAST_PKMAP > PTRS_PER_PTE);
	fixmap_page_table = alloc_kmap_pgtable(FIXMAP_BASE);
}
