https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: MIT */
#ifndef __NVKM_ICCSENSE_H__
#define __NVKM_ICCSENSE_H__

#include <core/subdev.h>

struct nvkm_iccsense {
	struct nvkm_subdev subdev;
	bool data_valid;
	struct list_head sensors;
	struct list_head rails;

	u32 power_w_max;
	u32 power_w_crit;
};

int gf100_iccsense_new(struct nvkm_device *, int index, struct nvkm_iccsense **);
int nvkm_iccsense_read_all(struct nvkm_iccsense *iccsense);
#endif
