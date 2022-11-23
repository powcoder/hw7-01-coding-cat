https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef SWPHY_H
#define SWPHY_H

struct fixed_phy_status;

int swphy_validate_state(const struct fixed_phy_status *state);
int swphy_read_reg(int reg, const struct fixed_phy_status *state);

#endif
