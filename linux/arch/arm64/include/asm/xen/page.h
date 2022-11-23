https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include <xen/arm/page.h>
#include <asm/mmu.h>

static inline bool xen_kernel_unmapped_at_usr(void)
{
	return arm64_kernel_unmapped_at_el0();
}
