#include <iostream>
#include <string>

bool starts_with(const std::string& input, const std::string& pattern, int pos)
{
	if (pos + pattern.size() > input.size())
		return false;

	for(size_t i{0}; i < pattern.size(); ++i)
	{
		if (input.at(pos + i) != pattern.at(i))
			return false;
	}
	return true;
}

std::string replace_str(const std::string& input, const std::string& pattern, const std::string& to)
{
	std::string output;

	size_t it{ 0 };
	while (it < input.size())
	{
		if (starts_with(input, pattern, it))
		{
			output += to;
			it += pattern.size();
		}
		else
		{
			output += input.at(it);
			it++;
		}
	}

	return output;
}

int main()
{
	std::cout << replace_str("aabcabaaad", "aa", "") << std::endl;

	return 0;
}