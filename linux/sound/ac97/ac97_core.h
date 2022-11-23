https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (C) 2016 Robert Jarzmik <robert.jarzmik@free.fr>
 */

unsigned int snd_ac97_bus_scan_one(struct ac97_controller *adrv,
				   unsigned int codec_num);

static inline bool ac97_ids_match(unsigned int id1, unsigned int id2,
				  unsigned int mask)
{
	return (id1 & mask) == (id2 & mask);
}
