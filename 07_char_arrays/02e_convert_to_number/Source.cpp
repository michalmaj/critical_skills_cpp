#include<iostream>
#include <string>

int main()
{
	std::string str{ "0200" };
	int num{ 0 };

	for(int i{0}; i < str.size(); ++i)
	{
		num *= 10;
		num += str.at(i) - '0';
	}

	std::cout << num << " " << 3 * num << std::endl;


	return 0;
}