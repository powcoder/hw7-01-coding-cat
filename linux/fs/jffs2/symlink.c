https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/*
 * JFFS2 -- Journalling Flash File System, Version 2.
 *
 * Copyright © 2001-2007 Red Hat, Inc.
 *
 * Created by David Woodhouse <dwmw2@infradead.org>
 *
 * For licensing information, see the file 'LICENCE' in this directory.
 *
 */

#include "nodelist.h"

const struct inode_operations jffs2_symlink_inode_operations =
{
	.get_link =	simple_get_link,
	.setattr =	jffs2_setattr,
	.listxattr =	jffs2_listxattr,
};
