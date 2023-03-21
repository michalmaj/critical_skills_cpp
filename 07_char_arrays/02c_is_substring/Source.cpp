#include<iostream>
#include <string>

int main()
{
	std::string str1{ "ABCDEFG" };
	std::string str2{ "ABCDEFG" };
	int it{ 0 };

	bool is_substring{ false };

	// Get size of largest string string
	int len{ static_cast<int>(str1.size()) };
	if (len < str2.size())
	{
		len = str2.size();
		std::swap(str1, str2);
	}

	for(int i{0}; i < len; ++i)
	{
		if (str1.at(i) == str2.at(it))
			it++;
		else
			it = 0;

		if(it == str2.size())
		{
			is_substring = true;
			break;
		}
	}



	std::cout << (is_substring ? "YES" : "NO") << std::endl;

	std::cout << std::endl;


	return 0;
}