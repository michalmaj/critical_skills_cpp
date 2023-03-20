#include<iostream>
#include <string>

int main()
{
	std::string str{ "vwXYZ0123" };

	std::string from{ "abcdefghijklmnopqrstuvwxyz0123456789" };
	std::string to{ "YZIMNESTODUAPWXHQFBRJKCGVL!@#$%^&*()" };

	char letter_map[150]{ 0 };

	// Map ASCII values (here as indexes) as new values
	for (int i{ 0 }; i < from.size(); ++i)
		letter_map[from[i]] = to[i];

	for(int i{0}; i < str.size(); ++i)
	{
		if('A' <= str[i] and str[i] <= 'Z')
			continue;
		str[i] = letter_map[str[i]];
	}

	std::cout << str << std::endl;
	

	std::cout << std::endl;


	return 0;
}