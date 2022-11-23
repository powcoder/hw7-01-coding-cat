https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#!/bin/sh
# SPDX-License-Identifier: GPL-2.0

if [ ! -f "$1" ]; then
	SEED=`od -A n -t x8 -N 32 /dev/urandom | tr -d ' \n'`
	echo "const char *randstruct_seed = \"$SEED\";" > "$1"
	HASH=`echo -n "$SEED" | sha256sum | cut -d" " -f1 | tr -d ' \n'`
	echo "#define RANDSTRUCT_HASHED_SEED \"$HASH\"" > "$2"
fi
