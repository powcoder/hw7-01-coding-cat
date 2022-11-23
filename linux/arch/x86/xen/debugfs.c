https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0
#include <linux/init.h>
#include <linux/debugfs.h>
#include <linux/slab.h>

#include "debugfs.h"

static struct dentry *d_xen_debug;

struct dentry * __init xen_init_debugfs(void)
{
	if (!d_xen_debug)
		d_xen_debug = debugfs_create_dir("xen", NULL);
	return d_xen_debug;
}

