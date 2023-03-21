#include<iostream>
#include <string>

int main()
{
	std::string str1{ "ABCDEFG" };
	std::string str2{ "ABCF" };
	int it{ 0 };

	bool is_substring{ true };

	// Get size of largest string string
	int len{ static_cast<int>(str1.size()) };
	if (len < str2.size())
	{
		len = str2.size();
		std::swap(str1, str2);
	}

	// For every possible position in larger str, try to match with the small
	for(int i{0}; i < str1.size(); ++i)
	{
		is_substring = true;
		for(int j{0}; j < str2.size() && is_substring; ++j)
		{
			if (str2.at(j) != str1.at(i + j))
				is_substring = false;
		}
		if(is_substring)
			break;
	}



	std::cout << (is_substring ? "YES" : "NO") << std::endl;

	std::cout << std::endl;


	return 0;
}