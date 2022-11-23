https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0
#include <iostream>
#include <memory>

static void print_str(std::string s)
{
	std::cout << s << std::endl;
}

int main()
{
	std::string s("Hello World!");
	print_str(std::move(s));
	std::cout << "|" << s << "|" << std::endl;
	return 0;
}
