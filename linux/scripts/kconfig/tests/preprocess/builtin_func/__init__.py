https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
# SPDX-License-Identifier: GPL-2.0
"""
Built-in function tests.
"""

def test(conf):
    assert conf.oldaskconfig() == 0
    assert conf.stdout_contains('expected_stdout')
    assert conf.stderr_matches('expected_stderr')
