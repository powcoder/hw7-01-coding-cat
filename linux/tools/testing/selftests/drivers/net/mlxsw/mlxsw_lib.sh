https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#!/bin/bash
# SPDX-License-Identifier: GPL-2.0

##############################################################################
# Defines

if [[ ! -v MLXSW_CHIP ]]; then
	MLXSW_CHIP=$(devlink -j dev info $DEVLINK_DEV | jq -r '.[][]["driver"]')
	if [ -z "$MLXSW_CHIP" ]; then
		echo "SKIP: Device $DEVLINK_DEV doesn't support devlink info command"
		exit 1
	fi
fi
