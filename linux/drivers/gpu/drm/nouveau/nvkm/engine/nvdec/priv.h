https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: MIT */
#ifndef __NVKM_NVDEC_PRIV_H__
#define __NVKM_NVDEC_PRIV_H__
#include <engine/nvdec.h>

struct nvkm_nvdec_func {
	const struct nvkm_falcon_func *flcn;
};

struct nvkm_nvdec_fwif {
	int version;
	int (*load)(struct nvkm_nvdec *, int ver,
		    const struct nvkm_nvdec_fwif *);
	const struct nvkm_nvdec_func *func;
};

int nvkm_nvdec_new_(const struct nvkm_nvdec_fwif *fwif,
		    struct nvkm_device *, int, struct nvkm_nvdec **);
#endif
