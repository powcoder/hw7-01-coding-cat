https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: MIT
/*
 * Copyright (C) 2013-2017 Oracle Corporation
 * This file is based on ast_ttm.c
 * Copyright 2012 Red Hat Inc.
 * Authors: Dave Airlie <airlied@redhat.com>
 *          Michael Thayer <michael.thayer@oracle.com>
 */
#include <linux/pci.h>
#include <drm/drm_file.h>
#include "vbox_drv.h"

int vbox_mm_init(struct vbox_private *vbox)
{
	struct drm_vram_mm *vmm;
	int ret;
	struct drm_device *dev = &vbox->ddev;

	vmm = drm_vram_helper_alloc_mm(dev, pci_resource_start(dev->pdev, 0),
				       vbox->available_vram_size);
	if (IS_ERR(vmm)) {
		ret = PTR_ERR(vmm);
		DRM_ERROR("Error initializing VRAM MM; %d\n", ret);
		return ret;
	}

	vbox->fb_mtrr = arch_phys_wc_add(pci_resource_start(dev->pdev, 0),
					 pci_resource_len(dev->pdev, 0));
	return 0;
}

void vbox_mm_fini(struct vbox_private *vbox)
{
	arch_phys_wc_del(vbox->fb_mtrr);
	drm_vram_helper_release_mm(&vbox->ddev);
}
