https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#!/bin/bash
# SPDX-License-Identifier: GPL-2.0

# Exit on failure
set -e

# Wrapper script to test generic-XDP
export TESTNAME=xdp_vlan_mode_generic
./test_xdp_vlan.sh --mode=xdpgeneric
