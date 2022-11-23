https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: MIT */
#ifndef __NVKM_NVDEC_H__
#define __NVKM_NVDEC_H__
#define nvkm_nvdec(p) container_of((p), struct nvkm_nvdec, engine)
#include <core/engine.h>
#include <core/falcon.h>

struct nvkm_nvdec {
	const struct nvkm_nvdec_func *func;
	struct nvkm_engine engine;
	struct nvkm_falcon falcon;
};

int gm107_nvdec_new(struct nvkm_device *, int, struct nvkm_nvdec **);
#endif
