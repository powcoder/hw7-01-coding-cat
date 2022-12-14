https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef __NVKM_GSP_H__
#define __NVKM_GSP_H__
#define nvkm_gsp(p) container_of((p), struct nvkm_gsp, subdev)
#include <core/subdev.h>
#include <core/falcon.h>

struct nvkm_gsp {
	struct nvkm_subdev subdev;
	struct nvkm_falcon falcon;
};

int gv100_gsp_new(struct nvkm_device *, int, struct nvkm_gsp **);
#endif
