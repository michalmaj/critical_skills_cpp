#include <iostream>

bool is_prefix(const std::string& main, const std::string& prefix, int start_pos=0)
{
	if (start_pos == prefix.size())
		return true;

	if (main.at(start_pos) != prefix.at(start_pos))
		return false;

	return is_prefix(main, prefix, start_pos + 1);
}

int main()
{
	std::cout << std::boolalpha;
	std::cout << is_prefix("abcdefg", "abcd", 3) << std::endl;
	std::cout << is_prefix("abcdefg", "", 0) << std::endl;
	std::cout << is_prefix("abcdefg", "abd", 3) << std::endl;

	return 0;
}