https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0+ */
// Copyright 2017 IBM Corp.
#ifndef _ASM_PNV_OCXL_H
#define _ASM_PNV_OCXL_H

#include <linux/pci.h>

#define PNV_OCXL_TL_MAX_TEMPLATE        63
#define PNV_OCXL_TL_BITS_PER_RATE       4
#define PNV_OCXL_TL_RATE_BUF_SIZE       ((PNV_OCXL_TL_MAX_TEMPLATE+1) * PNV_OCXL_TL_BITS_PER_RATE / 8)

int pnv_ocxl_get_actag(struct pci_dev *dev, u16 *base, u16 *enabled, u16 *supported);
int pnv_ocxl_get_pasid_count(struct pci_dev *dev, int *count);

int pnv_ocxl_get_tl_cap(struct pci_dev *dev, long *cap,
			char *rate_buf, int rate_buf_size);
int pnv_ocxl_set_tl_conf(struct pci_dev *dev, long cap,
			 uint64_t rate_buf_phys, int rate_buf_size);

int pnv_ocxl_get_xsl_irq(struct pci_dev *dev, int *hwirq);
void pnv_ocxl_unmap_xsl_regs(void __iomem *dsisr, void __iomem *dar,
			     void __iomem *tfc, void __iomem *pe_handle);
int pnv_ocxl_map_xsl_regs(struct pci_dev *dev, void __iomem **dsisr,
			  void __iomem **dar, void __iomem **tfc,
			  void __iomem **pe_handle);

int pnv_ocxl_spa_setup(struct pci_dev *dev, void *spa_mem, int PE_mask, void **platform_data);
void pnv_ocxl_spa_release(void *platform_data);
int pnv_ocxl_spa_remove_pe_from_cache(void *platform_data, int pe_handle);

#endif /* _ASM_PNV_OCXL_H */
