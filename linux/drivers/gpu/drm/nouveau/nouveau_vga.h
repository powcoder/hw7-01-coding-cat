https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: MIT */
#ifndef __NOUVEAU_VGA_H__
#define __NOUVEAU_VGA_H__

void nouveau_vga_init(struct nouveau_drm *);
void nouveau_vga_fini(struct nouveau_drm *);
void nouveau_vga_lastclose(struct drm_device *dev);

#endif
