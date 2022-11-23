https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: ISC
/*
 * Copyright (c) 2014 Broadcom Corporation
 */
#ifdef CONFIG_OF
void brcmf_of_probe(struct device *dev, enum brcmf_bus_type bus_type,
		    struct brcmf_mp_device *settings);
#else
static void brcmf_of_probe(struct device *dev, enum brcmf_bus_type bus_type,
			   struct brcmf_mp_device *settings)
{
}
#endif /* CONFIG_OF */
