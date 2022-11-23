https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#!/bin/sh
# SPDX-License-Identifier: (GPL-2.0 OR BSD-3-Clause)

# Kselftest framework requirement - SKIP code is 4.
ksft_skip=4

[ -e /dev/tpm0 ] || exit $ksft_skip

python3 -m unittest -v tpm2_tests.SmokeTest
python3 -m unittest -v tpm2_tests.AsyncTest
