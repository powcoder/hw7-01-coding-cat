https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: MIT */
#ifndef __NOUVEAU_USIF_H__
#define __NOUVEAU_USIF_H__

void usif_client_init(struct nouveau_cli *);
void usif_client_fini(struct nouveau_cli *);
int  usif_ioctl(struct drm_file *, void __user *, u32);
int  usif_notify(const void *, u32, const void *, u32);

#endif
