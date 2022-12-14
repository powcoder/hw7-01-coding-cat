https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0-or-later */
/* -*- mode: c; c-basic-offset: 8; -*-
 * vim: noexpandtab sw=8 ts=8 sts=0:
 *
 * resize.h
 *
 * Function prototypes
 *
 * Copyright (C) 2007 Oracle.  All rights reserved.
 */

#ifndef OCFS2_RESIZE_H
#define OCFS2_RESIZE_H

int ocfs2_group_extend(struct inode * inode, int new_clusters);
int ocfs2_group_add(struct inode *inode, struct ocfs2_new_group_input *input);

#endif /* OCFS2_RESIZE_H */
