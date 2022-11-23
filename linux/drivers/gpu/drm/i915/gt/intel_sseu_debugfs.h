https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: MIT */

/*
 * Copyright © 2020 Intel Corporation
 */

#ifndef INTEL_SSEU_DEBUGFS_H
#define INTEL_SSEU_DEBUGFS_H

struct intel_gt;
struct dentry;
struct seq_file;

int intel_sseu_status(struct seq_file *m, struct intel_gt *gt);
void intel_sseu_debugfs_register(struct intel_gt *gt, struct dentry *root);

#endif /* INTEL_SSEU_DEBUGFS_H */
