https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#!/bin/sh
# SPDX-License-Identifier: GPL-2.0
# Runs bpf test using test_bpf kernel module

if /sbin/modprobe -q test_bpf ; then
	/sbin/modprobe -q -r test_bpf;
	echo "test_bpf: ok";
else
	echo "test_bpf: [FAIL]";
	exit 1;
fi
