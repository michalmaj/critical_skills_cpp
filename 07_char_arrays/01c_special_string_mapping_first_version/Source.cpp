#include<iostream>
#include <string>

int main()
{
	std::string str{ "vwXYZ0123" };
	std::string smaller{ "YZIMNESTODUAPWXHQFBRJKCGVL" };
	std::string numbers{ "!@#$%^&*()" };

	for(int i{0}; i < str.size(); ++i)
	{
		if (str[i] >= 'a' and str[i] <= 'z')
			std::cout << smaller[str[i] - 'a'];
		else if (str[i] >= '0' and str[i] <= '9')
			std::cout << numbers[str[i] - '0'];
		else
			std::cout << str[i];
	}

	std::cout << std::endl;


	return 0;
}