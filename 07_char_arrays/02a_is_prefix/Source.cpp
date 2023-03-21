#include<iostream>
#include <string>

int main()
{
	std::string str1{ "ABCDEFG" };
	std::string str2{ "ABCDEFG" };
	bool is_prefix{ true };

	// Get size of smallest string
	size_t len{ str1.size() };
	if (len > str2.size())
		len = str2.size();

	for(size_t i{0}; i < len; ++i)
	{
		if(str1.at(i) != str2.at(i))
		{
			is_prefix = false;
			break;
		}
	}

	std::cout << (is_prefix ? "YES" : "NO") << std::endl;

	std::cout << std::endl;


	return 0;
}