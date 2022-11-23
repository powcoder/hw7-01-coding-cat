https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#!/bin/bash
# SPDX-License-Identifier: GPL-2.0
# Kselftest framework requirement - SKIP code is 4.
ksft_skip=4

# Run mount selftests
if [ -f /proc/self/uid_map ] ; then
	./unprivileged-remount-test ;
else
	echo "WARN: No /proc/self/uid_map exist, test skipped." ;
	exit $ksft_skip
fi
