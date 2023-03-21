#include<iostream>
#include <string>

int main()
{
	std::string str1{ "ABCDEFG" };
	std::string str2{ "EFG" };
	int str1_len = str1.size() - 1;
	int str2_len = str2.size() - 1;

	bool is_suffix{ true };

	// Get size of smallest string
	int len{ static_cast<int>(str1.size()) };
	if (len > str2.size())
		len = str2.size();

	for (int i{ len - 1 }; i >= 0; --i)
	{
		if (str1.at(str1_len--) != str2.at(str2_len--))
		{ 
			is_suffix = false;
			break;
		}
	}

	std::cout << (is_suffix ? "YES" : "NO") << std::endl;

	std::cout << std::endl;


	return 0;
}