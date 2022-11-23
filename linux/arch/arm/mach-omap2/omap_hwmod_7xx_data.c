https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0-only
/*
 * Hardware modules present on the DRA7xx chips
 *
 * Copyright (C) 2013 Texas Instruments Incorporated - https://www.ti.com
 *
 * Paul Walmsley
 * Benoit Cousson
 *
 * This file is automatically generated from the OMAP hardware databases.
 * We respectfully ask that any modifications to this file be coordinated
 * with the public linux-omap@vger.kernel.org mailing list and the
 * authors above to ensure that the autogeneration scripts are kept
 * up-to-date with the file contents.
 */

#include <linux/io.h>

#include "omap_hwmod.h"
#include "omap_hwmod_common_data.h"
#include "cm1_7xx.h"
#include "cm2_7xx.h"
#include "prm7xx.h"
#include "soc.h"

/* Base offset for all DRA7XX interrupts external to MPUSS */
#define DRA7XX_IRQ_GIC_START	32

/*
 * IP blocks
 */

/*
 * 'dmm' class
 * instance(s): dmm
 */
static struct omap_hwmod_class dra7xx_dmm_hwmod_class = {
	.name	= "dmm",
};

/* dmm */
static struct omap_hwmod dra7xx_dmm_hwmod = {
	.name		= "dmm",
	.class		= &dra7xx_dmm_hwmod_class,
	.clkdm_name	= "emif_clkdm",
	.prcm = {
		.omap4 = {
			.clkctrl_offs = DRA7XX_CM_EMIF_DMM_CLKCTRL_OFFSET,
			.context_offs = DRA7XX_RM_EMIF_DMM_CONTEXT_OFFSET,
		},
	},
};

/*
 * 'l3' class
 * instance(s): l3_instr, l3_main_1, l3_main_2
 */
static struct omap_hwmod_class dra7xx_l3_hwmod_class = {
	.name	= "l3",
};

/* l3_instr */
static struct omap_hwmod dra7xx_l3_instr_hwmod = {
	.name		= "l3_instr",
	.class		= &dra7xx_l3_hwmod_class,
	.clkdm_name	= "l3instr_clkdm",
	.prcm = {
		.omap4 = {
			.clkctrl_offs = DRA7XX_CM_L3INSTR_L3_INSTR_CLKCTRL_OFFSET,
			.context_offs = DRA7XX_RM_L3INSTR_L3_INSTR_CONTEXT_OFFSET,
			.modulemode   = MODULEMODE_HWCTRL,
		},
	},
};

/* l3_main_1 */
static struct omap_hwmod dra7xx_l3_main_1_hwmod = {
	.name		= "l3_main_1",
	.class		= &dra7xx_l3_hwmod_class,
	.clkdm_name	= "l3main1_clkdm",
	.prcm = {
		.omap4 = {
			.clkctrl_offs = DRA7XX_CM_L3MAIN1_L3_MAIN_1_CLKCTRL_OFFSET,
			.context_offs = DRA7XX_RM_L3MAIN1_L3_MAIN_1_CONTEXT_OFFSET,
		},
	},
};

/* l3_main_2 */
static struct omap_hwmod dra7xx_l3_main_2_hwmod = {
	.name		= "l3_main_2",
	.class		= &dra7xx_l3_hwmod_class,
	.clkdm_name	= "l3instr_clkdm",
	.prcm = {
		.omap4 = {
			.clkctrl_offs = DRA7XX_CM_L3INSTR_L3_MAIN_2_CLKCTRL_OFFSET,
			.context_offs = DRA7XX_RM_L3INSTR_L3_MAIN_2_CONTEXT_OFFSET,
			.modulemode   = MODULEMODE_HWCTRL,
		},
	},
};

/*
 * 'l4' class
 * instance(s): l4_cfg, l4_per1, l4_per2, l4_per3, l4_wkup
 */
static struct omap_hwmod_class dra7xx_l4_hwmod_class = {
	.name	= "l4",
};

/* l4_cfg */
static struct omap_hwmod dra7xx_l4_cfg_hwmod = {
	.name		= "l4_cfg",
	.class		= &dra7xx_l4_hwmod_class,
	.clkdm_name	= "l4cfg_clkdm",
	.prcm = {
		.omap4 = {
			.clkctrl_offs = DRA7XX_CM_L4CFG_L4_CFG_CLKCTRL_OFFSET,
			.context_offs = DRA7XX_RM_L4CFG_L4_CFG_CONTEXT_OFFSET,
		},
	},
};

/* l4_per1 */
static struct omap_hwmod dra7xx_l4_per1_hwmod = {
	.name		= "l4_per1",
	.class		= &dra7xx_l4_hwmod_class,
	.clkdm_name	= "l4per_clkdm",
	.prcm = {
		.omap4 = {
			.clkctrl_offs = DRA7XX_CM_L4PER_L4_PER1_CLKCTRL_OFFSET,
			.flags = HWMOD_OMAP4_NO_CONTEXT_LOSS_BIT,
		},
	},
};

/* l4_per2 */
static struct omap_hwmod dra7xx_l4_per2_hwmod = {
	.name		= "l4_per2",
	.class		= &dra7xx_l4_hwmod_class,
	.clkdm_name	= "l4per2_clkdm",
	.prcm = {
		.omap4 = {
			.clkctrl_offs = DRA7XX_CM_L4PER2_L4_PER2_CLKCTRL_OFFSET,
			.flags = HWMOD_OMAP4_NO_CONTEXT_LOSS_BIT,
		},
	},
};

/* l4_per3 */
static struct omap_hwmod dra7xx_l4_per3_hwmod = {
	.name		= "l4_per3",
	.class		= &dra7xx_l4_hwmod_class,
	.clkdm_name	= "l4per3_clkdm",
	.prcm = {
		.omap4 = {
			.clkctrl_offs = DRA7XX_CM_L4PER3_L4_PER3_CLKCTRL_OFFSET,
			.flags = HWMOD_OMAP4_NO_CONTEXT_LOSS_BIT,
		},
	},
};

/* l4_wkup */
static struct omap_hwmod dra7xx_l4_wkup_hwmod = {
	.name		= "l4_wkup",
	.class		= &dra7xx_l4_hwmod_class,
	.clkdm_name	= "wkupaon_clkdm",
	.prcm = {
		.omap4 = {
			.clkctrl_offs = DRA7XX_CM_WKUPAON_L4_WKUP_CLKCTRL_OFFSET,
			.context_offs = DRA7XX_RM_WKUPAON_L4_WKUP_CONTEXT_OFFSET,
		},
	},
};

/*
 * 'atl' class
 *
 */

static struct omap_hwmod_class dra7xx_atl_hwmod_class = {
	.name	= "atl",
};

/* atl */
static struct omap_hwmod dra7xx_atl_hwmod = {
	.name		= "atl",
	.class		= &dra7xx_atl_hwmod_class,
	.clkdm_name	= "atl_clkdm",
	.main_clk	= "atl_gfclk_mux",
	.prcm = {
		.omap4 = {
			.clkctrl_offs = DRA7XX_CM_ATL_ATL_CLKCTRL_OFFSET,
			.context_offs = DRA7XX_RM_ATL_ATL_CONTEXT_OFFSET,
			.modulemode   = MODULEMODE_SWCTRL,
		},
	},
};

/*
 * 'bb2d' class
 *
 */

static struct omap_hwmod_class dra7xx_bb2d_hwmod_class = {
	.name	= "bb2d",
};

/* bb2d */
static struct omap_hwmod dra7xx_bb2d_hwmod = {
	.name		= "bb2d",
	.class		= &dra7xx_bb2d_hwmod_class,
	.clkdm_name	= "dss_clkdm",
	.main_clk	= "dpll_core_h24x2_ck",
	.prcm = {
		.omap4 = {
			.clkctrl_offs = DRA7XX_CM_DSS_BB2D_CLKCTRL_OFFSET,
			.context_offs = DRA7XX_RM_DSS_BB2D_CONTEXT_OFFSET,
			.modulemode   = MODULEMODE_SWCTRL,
		},
	},
};

/*
 * 'ctrl_module' class
 *
 */

static struct omap_hwmod_class dra7xx_ctrl_module_hwmod_class = {
	.name	= "ctrl_module",
};

/* ctrl_module_wkup */
static struct omap_hwmod dra7xx_ctrl_module_wkup_hwmod = {
	.name		= "ctrl_module_wkup",
	.class		= &dra7xx_ctrl_module_hwmod_class,
	.clkdm_name	= "wkupaon_clkdm",
	.prcm = {
		.omap4 = {
			.flags = HWMOD_OMAP4_NO_CONTEXT_LOSS_BIT,
		},
	},
};

/*
 * 'gpmc' class
 *
 */

static struct omap_hwmod_class_sysconfig dra7xx_gpmc_sysc = {
	.rev_offs	= 0x0000,
	.sysc_offs	= 0x0010,
	.syss_offs	= 0x0014,
	.sysc_flags	= (SYSC_HAS_AUTOIDLE | SYSC_HAS_SIDLEMODE |
			   SYSC_HAS_SOFTRESET | SYSS_HAS_RESET_STATUS),
	.idlemodes	= (SIDLE_FORCE | SIDLE_NO | SIDLE_SMART),
	.sysc_fields	= &omap_hwmod_sysc_type1,
};

static struct omap_hwmod_class dra7xx_gpmc_hwmod_class = {
	.name	= "gpmc",
	.sysc	= &dra7xx_gpmc_sysc,
};

/* gpmc */

static struct omap_hwmod dra7xx_gpmc_hwmod = {
	.name		= "gpmc",
	.class		= &dra7xx_gpmc_hwmod_class,
	.clkdm_name	= "l3main1_clkdm",
	/* Skip reset for CONFIG_OMAP_GPMC_DEBUG for bootloader timings */
	.flags		= DEBUG_OMAP_GPMC_HWMOD_FLAGS,
	.main_clk	= "l3_iclk_div",
	.prcm = {
		.omap4 = {
			.clkctrl_offs = DRA7XX_CM_L3MAIN1_GPMC_CLKCTRL_OFFSET,
			.context_offs = DRA7XX_RM_L3MAIN1_GPMC_CONTEXT_OFFSET,
			.modulemode   = MODULEMODE_HWCTRL,
		},
	},
};



/*
 * 'mpu' class
 *
 */

static struct omap_hwmod_class dra7xx_mpu_hwmod_class = {
	.name	= "mpu",
};

/* mpu */
static struct omap_hwmod dra7xx_mpu_hwmod = {
	.name		= "mpu",
	.class		= &dra7xx_mpu_hwmod_class,
	.clkdm_name	= "mpu_clkdm",
	.flags		= HWMOD_INIT_NO_IDLE | HWMOD_INIT_NO_RESET,
	.main_clk	= "dpll_mpu_m2_ck",
	.prcm = {
		.omap4 = {
			.clkctrl_offs = DRA7XX_CM_MPU_MPU_CLKCTRL_OFFSET,
			.context_offs = DRA7XX_RM_MPU_MPU_CONTEXT_OFFSET,
		},
	},
};


/*
 * 'PCIE' class
 *
 */

/*
 * As noted in documentation for _reset() in omap_hwmod.c, the stock reset
 * functionality of OMAP HWMOD layer does not deassert the hardreset lines
 * associated with an IP automatically leaving the driver to handle that
 * by itself. This does not work for PCIeSS which needs the reset lines
 * deasserted for the driver to start accessing registers.
 *
 * We use a PCIeSS HWMOD class specific reset handler to deassert the hardreset
 * lines after asserting them.
 */
int dra7xx_pciess_reset(struct omap_hwmod *oh)
{
	int i;

	for (i = 0; i < oh->rst_lines_cnt; i++) {
		omap_hwmod_assert_hardreset(oh, oh->rst_lines[i].name);
		omap_hwmod_deassert_hardreset(oh, oh->rst_lines[i].name);
	}

	return 0;
}

static struct omap_hwmod_class dra7xx_pciess_hwmod_class = {
	.name	= "pcie",
	.reset	= dra7xx_pciess_reset,
};

/* pcie1 */
static struct omap_hwmod_rst_info dra7xx_pciess1_resets[] = {
	{ .name = "pcie", .rst_shift = 0 },
};

static struct omap_hwmod dra7xx_pciess1_hwmod = {
	.name		= "pcie1",
	.class		= &dra7xx_pciess_hwmod_class,
	.clkdm_name	= "pcie_clkdm",
	.rst_lines	= dra7xx_pciess1_resets,
	.rst_lines_cnt	= ARRAY_SIZE(dra7xx_pciess1_resets),
	.main_clk	= "l4_root_clk_div",
	.prcm = {
		.omap4 = {
			.clkctrl_offs = DRA7XX_CM_L3INIT_PCIESS1_CLKCTRL_OFFSET,
			.rstctrl_offs = DRA7XX_RM_L3INIT_PCIESS_RSTCTRL_OFFSET,
			.context_offs = DRA7XX_RM_L3INIT_PCIESS1_CONTEXT_OFFSET,
			.modulemode   = MODULEMODE_SWCTRL,
		},
	},
};

/* pcie2 */
static struct omap_hwmod_rst_info dra7xx_pciess2_resets[] = {
	{ .name = "pcie", .rst_shift = 1 },
};

/* pcie2 */
static struct omap_hwmod dra7xx_pciess2_hwmod = {
	.name		= "pcie2",
	.class		= &dra7xx_pciess_hwmod_class,
	.clkdm_name	= "pcie_clkdm",
	.rst_lines	= dra7xx_pciess2_resets,
	.rst_lines_cnt	= ARRAY_SIZE(dra7xx_pciess2_resets),
	.main_clk	= "l4_root_clk_div",
	.prcm = {
		.omap4 = {
			.clkctrl_offs = DRA7XX_CM_L3INIT_PCIESS2_CLKCTRL_OFFSET,
			.rstctrl_offs = DRA7XX_RM_L3INIT_PCIESS_RSTCTRL_OFFSET,
			.context_offs = DRA7XX_RM_L3INIT_PCIESS2_CONTEXT_OFFSET,
			.modulemode   = MODULEMODE_SWCTRL,
		},
	},
};

/*
 * 'qspi' class
 *
 */

static struct omap_hwmod_class_sysconfig dra7xx_qspi_sysc = {
	.rev_offs	= 0,
	.sysc_offs	= 0x0010,
	.sysc_flags	= SYSC_HAS_SIDLEMODE,
	.idlemodes	= (SIDLE_FORCE | SIDLE_NO | SIDLE_SMART |
			   SIDLE_SMART_WKUP),
	.sysc_fields	= &omap_hwmod_sysc_type2,
};

static struct omap_hwmod_class dra7xx_qspi_hwmod_class = {
	.name	= "qspi",
	.sysc	= &dra7xx_qspi_sysc,
};

/* qspi */
static struct omap_hwmod dra7xx_qspi_hwmod = {
	.name		= "qspi",
	.class		= &dra7xx_qspi_hwmod_class,
	.clkdm_name	= "l4per2_clkdm",
	.main_clk	= "qspi_gfclk_div",
	.prcm = {
		.omap4 = {
			.clkctrl_offs = DRA7XX_CM_L4PER2_QSPI_CLKCTRL_OFFSET,
			.context_offs = DRA7XX_RM_L4PER2_QSPI_CONTEXT_OFFSET,
			.modulemode   = MODULEMODE_SWCTRL,
		},
	},
};

/*
 * 'sata' class
 *
 */

static struct omap_hwmod_class_sysconfig dra7xx_sata_sysc = {
	.rev_offs	= 0x00fc,
	.sysc_offs	= 0x0000,
	.sysc_flags	= (SYSC_HAS_MIDLEMODE | SYSC_HAS_SIDLEMODE),
	.idlemodes	= (SIDLE_FORCE | SIDLE_NO | SIDLE_SMART |
			   SIDLE_SMART_WKUP | MSTANDBY_FORCE | MSTANDBY_NO |
			   MSTANDBY_SMART | MSTANDBY_SMART_WKUP),
	.sysc_fields	= &omap_hwmod_sysc_type2,
};

static struct omap_hwmod_class dra7xx_sata_hwmod_class = {
	.name	= "sata",
	.sysc	= &dra7xx_sata_sysc,
};

/* sata */

static struct omap_hwmod dra7xx_sata_hwmod = {
	.name		= "sata",
	.class		= &dra7xx_sata_hwmod_class,
	.clkdm_name	= "l3init_clkdm",
	.flags		= HWMOD_SWSUP_SIDLE | HWMOD_SWSUP_MSTANDBY,
	.main_clk	= "func_48m_fclk",
	.mpu_rt_idx	= 1,
	.prcm = {
		.omap4 = {
			.clkctrl_offs = DRA7XX_CM_L3INIT_SATA_CLKCTRL_OFFSET,
			.context_offs = DRA7XX_RM_L3INIT_SATA_CONTEXT_OFFSET,
			.modulemode   = MODULEMODE_SWCTRL,
		},
	},
};

/*
 * 'vcp' class
 *
 */

static struct omap_hwmod_class dra7xx_vcp_hwmod_class = {
	.name	= "vcp",
};

/* vcp1 */
static struct omap_hwmod dra7xx_vcp1_hwmod = {
	.name		= "vcp1",
	.class		= &dra7xx_vcp_hwmod_class,
	.clkdm_name	= "l3main1_clkdm",
	.main_clk	= "l3_iclk_div",
	.prcm = {
		.omap4 = {
			.clkctrl_offs = DRA7XX_CM_L3MAIN1_VCP1_CLKCTRL_OFFSET,
			.context_offs = DRA7XX_RM_L3MAIN1_VCP1_CONTEXT_OFFSET,
		},
	},
};

/* vcp2 */
static struct omap_hwmod dra7xx_vcp2_hwmod = {
	.name		= "vcp2",
	.class		= &dra7xx_vcp_hwmod_class,
	.clkdm_name	= "l3main1_clkdm",
	.main_clk	= "l3_iclk_div",
	.prcm = {
		.omap4 = {
			.clkctrl_offs = DRA7XX_CM_L3MAIN1_VCP2_CLKCTRL_OFFSET,
			.context_offs = DRA7XX_RM_L3MAIN1_VCP2_CONTEXT_OFFSET,
		},
	},
};



/*
 * Interfaces
 */

/* l3_main_1 -> dmm */
static struct omap_hwmod_ocp_if dra7xx_l3_main_1__dmm = {
	.master		= &dra7xx_l3_main_1_hwmod,
	.slave		= &dra7xx_dmm_hwmod,
	.clk		= "l3_iclk_div",
	.user		= OCP_USER_SDMA,
};

/* l3_main_2 -> l3_instr */
static struct omap_hwmod_ocp_if dra7xx_l3_main_2__l3_instr = {
	.master		= &dra7xx_l3_main_2_hwmod,
	.slave		= &dra7xx_l3_instr_hwmod,
	.clk		= "l3_iclk_div",
	.user		= OCP_USER_MPU | OCP_USER_SDMA,
};

/* l4_cfg -> l3_main_1 */
static struct omap_hwmod_ocp_if dra7xx_l4_cfg__l3_main_1 = {
	.master		= &dra7xx_l4_cfg_hwmod,
	.slave		= &dra7xx_l3_main_1_hwmod,
	.clk		= "l3_iclk_div",
	.user		= OCP_USER_MPU | OCP_USER_SDMA,
};

/* mpu -> l3_main_1 */
static struct omap_hwmod_ocp_if dra7xx_mpu__l3_main_1 = {
	.master		= &dra7xx_mpu_hwmod,
	.slave		= &dra7xx_l3_main_1_hwmod,
	.clk		= "l3_iclk_div",
	.user		= OCP_USER_MPU,
};

/* l3_main_1 -> l3_main_2 */
static struct omap_hwmod_ocp_if dra7xx_l3_main_1__l3_main_2 = {
	.master		= &dra7xx_l3_main_1_hwmod,
	.slave		= &dra7xx_l3_main_2_hwmod,
	.clk		= "l3_iclk_div",
	.user		= OCP_USER_MPU,
};

/* l4_cfg -> l3_main_2 */
static struct omap_hwmod_ocp_if dra7xx_l4_cfg__l3_main_2 = {
	.master		= &dra7xx_l4_cfg_hwmod,
	.slave		= &dra7xx_l3_main_2_hwmod,
	.clk		= "l3_iclk_div",
	.user		= OCP_USER_MPU | OCP_USER_SDMA,
};

/* l3_main_1 -> l4_cfg */
static struct omap_hwmod_ocp_if dra7xx_l3_main_1__l4_cfg = {
	.master		= &dra7xx_l3_main_1_hwmod,
	.slave		= &dra7xx_l4_cfg_hwmod,
	.clk		= "l3_iclk_div",
	.user		= OCP_USER_MPU | OCP_USER_SDMA,
};

/* l3_main_1 -> l4_per1 */
static struct omap_hwmod_ocp_if dra7xx_l3_main_1__l4_per1 = {
	.master		= &dra7xx_l3_main_1_hwmod,
	.slave		= &dra7xx_l4_per1_hwmod,
	.clk		= "l3_iclk_div",
	.user		= OCP_USER_MPU | OCP_USER_SDMA,
};

/* l3_main_1 -> l4_per2 */
static struct omap_hwmod_ocp_if dra7xx_l3_main_1__l4_per2 = {
	.master		= &dra7xx_l3_main_1_hwmod,
	.slave		= &dra7xx_l4_per2_hwmod,
	.clk		= "l3_iclk_div",
	.user		= OCP_USER_MPU | OCP_USER_SDMA,
};

/* l3_main_1 -> l4_per3 */
static struct omap_hwmod_ocp_if dra7xx_l3_main_1__l4_per3 = {
	.master		= &dra7xx_l3_main_1_hwmod,
	.slave		= &dra7xx_l4_per3_hwmod,
	.clk		= "l3_iclk_div",
	.user		= OCP_USER_MPU | OCP_USER_SDMA,
};

/* l3_main_1 -> l4_wkup */
static struct omap_hwmod_ocp_if dra7xx_l3_main_1__l4_wkup = {
	.master		= &dra7xx_l3_main_1_hwmod,
	.slave		= &dra7xx_l4_wkup_hwmod,
	.clk		= "wkupaon_iclk_mux",
	.user		= OCP_USER_MPU | OCP_USER_SDMA,
};

/* l4_per2 -> atl */
static struct omap_hwmod_ocp_if dra7xx_l4_per2__atl = {
	.master		= &dra7xx_l4_per2_hwmod,
	.slave		= &dra7xx_atl_hwmod,
	.clk		= "l3_iclk_div",
	.user		= OCP_USER_MPU | OCP_USER_SDMA,
};

/* l3_main_1 -> bb2d */
static struct omap_hwmod_ocp_if dra7xx_l3_main_1__bb2d = {
	.master		= &dra7xx_l3_main_1_hwmod,
	.slave		= &dra7xx_bb2d_hwmod,
	.clk		= "l3_iclk_div",
	.user		= OCP_USER_MPU | OCP_USER_SDMA,
};

/* l4_wkup -> ctrl_module_wkup */
static struct omap_hwmod_ocp_if dra7xx_l4_wkup__ctrl_module_wkup = {
	.master		= &dra7xx_l4_wkup_hwmod,
	.slave		= &dra7xx_ctrl_module_wkup_hwmod,
	.clk		= "wkupaon_iclk_mux",
	.user		= OCP_USER_MPU | OCP_USER_SDMA,
};

/* l3_main_1 -> gpmc */
static struct omap_hwmod_ocp_if dra7xx_l3_main_1__gpmc = {
	.master		= &dra7xx_l3_main_1_hwmod,
	.slave		= &dra7xx_gpmc_hwmod,
	.clk		= "l3_iclk_div",
	.user		= OCP_USER_MPU | OCP_USER_SDMA,
};

/* l4_cfg -> mpu */
static struct omap_hwmod_ocp_if dra7xx_l4_cfg__mpu = {
	.master		= &dra7xx_l4_cfg_hwmod,
	.slave		= &dra7xx_mpu_hwmod,
	.clk		= "l3_iclk_div",
	.user		= OCP_USER_MPU | OCP_USER_SDMA,
};

/* l3_main_1 -> pciess1 */
static struct omap_hwmod_ocp_if dra7xx_l3_main_1__pciess1 = {
	.master		= &dra7xx_l3_main_1_hwmod,
	.slave		= &dra7xx_pciess1_hwmod,
	.clk		= "l3_iclk_div",
	.user		= OCP_USER_MPU | OCP_USER_SDMA,
};

/* l4_cfg -> pciess1 */
static struct omap_hwmod_ocp_if dra7xx_l4_cfg__pciess1 = {
	.master		= &dra7xx_l4_cfg_hwmod,
	.slave		= &dra7xx_pciess1_hwmod,
	.clk		= "l4_root_clk_div",
	.user		= OCP_USER_MPU | OCP_USER_SDMA,
};

/* l3_main_1 -> pciess2 */
static struct omap_hwmod_ocp_if dra7xx_l3_main_1__pciess2 = {
	.master		= &dra7xx_l3_main_1_hwmod,
	.slave		= &dra7xx_pciess2_hwmod,
	.clk		= "l3_iclk_div",
	.user		= OCP_USER_MPU | OCP_USER_SDMA,
};

/* l4_cfg -> pciess2 */
static struct omap_hwmod_ocp_if dra7xx_l4_cfg__pciess2 = {
	.master		= &dra7xx_l4_cfg_hwmod,
	.slave		= &dra7xx_pciess2_hwmod,
	.clk		= "l4_root_clk_div",
	.user		= OCP_USER_MPU | OCP_USER_SDMA,
};

/* l3_main_1 -> qspi */
static struct omap_hwmod_ocp_if dra7xx_l3_main_1__qspi = {
	.master		= &dra7xx_l3_main_1_hwmod,
	.slave		= &dra7xx_qspi_hwmod,
	.clk		= "l3_iclk_div",
	.user		= OCP_USER_MPU | OCP_USER_SDMA,
};

/* l4_cfg -> sata */
static struct omap_hwmod_ocp_if dra7xx_l4_cfg__sata = {
	.master		= &dra7xx_l4_cfg_hwmod,
	.slave		= &dra7xx_sata_hwmod,
	.clk		= "l3_iclk_div",
	.user		= OCP_USER_MPU | OCP_USER_SDMA,
};

/* l3_main_1 -> vcp1 */
static struct omap_hwmod_ocp_if dra7xx_l3_main_1__vcp1 = {
	.master		= &dra7xx_l3_main_1_hwmod,
	.slave		= &dra7xx_vcp1_hwmod,
	.clk		= "l3_iclk_div",
	.user		= OCP_USER_MPU | OCP_USER_SDMA,
};

/* l4_per2 -> vcp1 */
static struct omap_hwmod_ocp_if dra7xx_l4_per2__vcp1 = {
	.master		= &dra7xx_l4_per2_hwmod,
	.slave		= &dra7xx_vcp1_hwmod,
	.clk		= "l3_iclk_div",
	.user		= OCP_USER_MPU | OCP_USER_SDMA,
};

/* l3_main_1 -> vcp2 */
static struct omap_hwmod_ocp_if dra7xx_l3_main_1__vcp2 = {
	.master		= &dra7xx_l3_main_1_hwmod,
	.slave		= &dra7xx_vcp2_hwmod,
	.clk		= "l3_iclk_div",
	.user		= OCP_USER_MPU | OCP_USER_SDMA,
};

/* l4_per2 -> vcp2 */
static struct omap_hwmod_ocp_if dra7xx_l4_per2__vcp2 = {
	.master		= &dra7xx_l4_per2_hwmod,
	.slave		= &dra7xx_vcp2_hwmod,
	.clk		= "l3_iclk_div",
	.user		= OCP_USER_MPU | OCP_USER_SDMA,
};

static struct omap_hwmod_ocp_if *dra7xx_hwmod_ocp_ifs[] __initdata = {
	&dra7xx_l3_main_1__dmm,
	&dra7xx_l3_main_2__l3_instr,
	&dra7xx_l4_cfg__l3_main_1,
	&dra7xx_mpu__l3_main_1,
	&dra7xx_l3_main_1__l3_main_2,
	&dra7xx_l4_cfg__l3_main_2,
	&dra7xx_l3_main_1__l4_cfg,
	&dra7xx_l3_main_1__l4_per1,
	&dra7xx_l3_main_1__l4_per2,
	&dra7xx_l3_main_1__l4_per3,
	&dra7xx_l3_main_1__l4_wkup,
	&dra7xx_l4_per2__atl,
	&dra7xx_l3_main_1__bb2d,
	&dra7xx_l4_wkup__ctrl_module_wkup,
	&dra7xx_l3_main_1__gpmc,
	&dra7xx_l4_cfg__mpu,
	&dra7xx_l3_main_1__pciess1,
	&dra7xx_l4_cfg__pciess1,
	&dra7xx_l3_main_1__pciess2,
	&dra7xx_l4_cfg__pciess2,
	&dra7xx_l3_main_1__qspi,
	&dra7xx_l4_cfg__sata,
	&dra7xx_l3_main_1__vcp1,
	&dra7xx_l4_per2__vcp1,
	&dra7xx_l3_main_1__vcp2,
	&dra7xx_l4_per2__vcp2,
	NULL,
};

/* SoC variant specific hwmod links */
static struct omap_hwmod_ocp_if *dra72x_hwmod_ocp_ifs[] __initdata = {
	NULL,
};

static struct omap_hwmod_ocp_if *rtc_hwmod_ocp_ifs[] __initdata = {
	NULL,
};

int __init dra7xx_hwmod_init(void)
{
	int ret;

	omap_hwmod_init();
	ret = omap_hwmod_register_links(dra7xx_hwmod_ocp_ifs);

	if (!ret && soc_is_dra74x()) {
		ret = omap_hwmod_register_links(rtc_hwmod_ocp_ifs);
	} else if (!ret && soc_is_dra72x()) {
		ret = omap_hwmod_register_links(dra72x_hwmod_ocp_ifs);
		if (!ret && !of_machine_is_compatible("ti,dra718"))
			ret = omap_hwmod_register_links(rtc_hwmod_ocp_ifs);
	} else if (!ret && soc_is_dra76x()) {
		if (!ret && soc_is_dra76x_abz())
			ret = omap_hwmod_register_links(rtc_hwmod_ocp_ifs);
	}

	return ret;
}
