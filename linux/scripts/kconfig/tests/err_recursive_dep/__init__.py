https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
# SPDX-License-Identifier: GPL-2.0
"""
Detect recursive dependency error.

Recursive dependency should be treated as an error.
"""

def test(conf):
    assert conf.oldaskconfig() == 1
    assert conf.stderr_contains('expected_stderr')
