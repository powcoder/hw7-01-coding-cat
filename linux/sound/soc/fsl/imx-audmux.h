https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __IMX_AUDMUX_H
#define __IMX_AUDMUX_H

#include <dt-bindings/sound/fsl-imx-audmux.h>

int imx_audmux_v1_configure_port(unsigned int port, unsigned int pcr);

int imx_audmux_v2_configure_port(unsigned int port, unsigned int ptcr,
		unsigned int pdcr);

#endif /* __IMX_AUDMUX_H */
