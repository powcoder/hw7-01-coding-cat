https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier:    GPL-2.0 */
/*
 * Copyright (C) 2017, Intel Corporation
 */

#ifndef	__STRATIX10_CLK_H
#define	__STRATIX10_CLK_H

struct stratix10_clock_data {
	struct clk_onecell_data	clk_data;
	void __iomem		*base;
};

struct stratix10_pll_clock {
	unsigned int		id;
	const char		*name;
	const struct clk_parent_data	*parent_data;
	u8			num_parents;
	unsigned long		flags;
	unsigned long		offset;
};

struct stratix10_perip_c_clock {
	unsigned int		id;
	const char		*name;
	const char		*parent_name;
	const struct clk_parent_data	*parent_data;
	u8			num_parents;
	unsigned long		flags;
	unsigned long		offset;
};

struct stratix10_perip_cnt_clock {
	unsigned int		id;
	const char		*name;
	const char		*parent_name;
	const struct clk_parent_data	*parent_data;
	u8			num_parents;
	unsigned long		flags;
	unsigned long		offset;
	u8			fixed_divider;
	unsigned long		bypass_reg;
	unsigned long		bypass_shift;
};

struct stratix10_gate_clock {
	unsigned int		id;
	const char		*name;
	const char		*parent_name;
	const struct clk_parent_data	*parent_data;
	u8			num_parents;
	unsigned long		flags;
	unsigned long		gate_reg;
	u8			gate_idx;
	unsigned long		div_reg;
	u8			div_offset;
	u8			div_width;
	unsigned long		bypass_reg;
	u8			bypass_shift;
	u8			fixed_div;
};

struct clk *s10_register_pll(const struct stratix10_pll_clock *,
			     void __iomem *);
struct clk *agilex_register_pll(const struct stratix10_pll_clock *,
				void __iomem *);
struct clk *s10_register_periph(const struct stratix10_perip_c_clock *,
				void __iomem *);
struct clk *s10_register_cnt_periph(const struct stratix10_perip_cnt_clock *,
				    void __iomem *);
struct clk *s10_register_gate(const struct stratix10_gate_clock *,
			      void __iomem *);
#endif	/* __STRATIX10_CLK_H */
