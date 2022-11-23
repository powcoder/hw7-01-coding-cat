https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#!/bin/sh
# SPDX-License-Identifier: GPL-2.0
# Runs blackhole-dev test using blackhole-dev kernel module

if /sbin/modprobe -q test_blackhole_dev ; then
	/sbin/modprobe -q -r test_blackhole_dev;
	echo "test_blackhole_dev: ok";
else
	echo "test_blackhole_dev: [FAIL]";
	exit 1;
fi
