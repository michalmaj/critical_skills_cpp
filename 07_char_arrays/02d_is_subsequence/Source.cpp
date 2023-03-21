#include<iostream>
#include <string>

int main()
{
	std::string str1{ "ABCDEFG" };
	std::string str2{ "ACEG" };
	int it{ 0 };

	bool is_subsequence{ false };

	// Get size of largest string string
	int len{ static_cast<int>(str1.size()) };
	if (len < str2.size())
	{
		len = str2.size();
		std::swap(str1, str2);
	}

	for (int i{ 0 }; i < len; ++i)
	{
		if (str1.at(i) == str2.at(it))
			it++;


		if (it == str2.size())
		{
			is_subsequence = true;
			break;
		}
	}



	std::cout << (is_subsequence ? "YES" : "NO") << std::endl;

	std::cout << std::endl;


	return 0;
}