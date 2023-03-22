#include<iostream>
#include <string>

int main()
{
	std::string str{ "12345" };
	int num{ 0 };

	// How to convert digits 1 2 3 4 5 to 12345
	// Repeat: multiply with 10 then add digit
	// 1 => 10 + 2 = 12 => 12 * 10 + 3 = 123 => 123 * 10 + 4 = 1234 => 1234 * 10 + 5 = 12345 
	for(int i{0}; i < str.size(); ++i)
	{
		num *= 10;
		num += str.at(i) - '0';
	}

	std::cout << num << " " << 3 * num << std::endl;


	return 0;
}