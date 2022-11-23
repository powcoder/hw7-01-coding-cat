https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: MIT */
#ifndef __NVKM_PLL_H__
#define __NVKM_PLL_H__
#include <core/os.h>
struct nvkm_subdev;
struct nvbios_pll;

int nv04_pll_calc(struct nvkm_subdev *, struct nvbios_pll *, u32 freq,
		  int *N1, int *M1, int *N2, int *M2, int *P);
int gt215_pll_calc(struct nvkm_subdev *, struct nvbios_pll *, u32 freq,
		  int *N, int *fN, int *M, int *P);
#endif
