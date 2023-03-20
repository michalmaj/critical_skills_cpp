#include<iostream>
#include <string>

int main()
{
	std::string str{"bAAAaaazz"};
	int frequency[26]{ 0 };
	/*std::cout << "Enter a string: ";
	std::cin >> str;*/

	for(int i{0}; i < str.size(); ++i)
	{
		if (str[i] >= 'a' and 'z' >= str[i])
		{
			frequency[str[i] - 'a']++;
		}
	}

	for(int i{0}; i < std::size(frequency); ++i)
	{
		if (frequency[i] != 0)
			std::cout << static_cast<char>(i + 'a') << " " << frequency[i] << std::endl;
	}


	std::cout << std::endl;

	return 0;
}