https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 *   Copyright (C) International Business Machines  Corp., 2002
 */
#ifndef _H_JFS_ACL
#define _H_JFS_ACL

#ifdef CONFIG_JFS_POSIX_ACL

struct posix_acl *jfs_get_acl(struct inode *inode, int type);
int jfs_set_acl(struct inode *inode, struct posix_acl *acl, int type);
int jfs_init_acl(tid_t, struct inode *, struct inode *);

#else

static inline int jfs_init_acl(tid_t tid, struct inode *inode,
			       struct inode *dir)
{
	return 0;
}

#endif
#endif		/* _H_JFS_ACL */
