#include<iostream>
#include <string>

int main()
{
	std::string str{ "111222aabbb" };


	for(int i{0}; i < str.size(); ++i)
	{
		if (i != 0 and str[i - 1] != str[i]) // new group, split by space
			std::cout << " ";
		std::cout << str[i];
	}



	return 0;
}