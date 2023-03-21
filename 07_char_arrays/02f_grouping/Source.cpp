#include<iostream>
#include <string>

int main()
{
	std::string str{ "111222aabbb" };
	char actual{ str.at(0) };

	for(int i{0}; i < str.size(); ++i)
	{
		if (str.at(i) == actual)
			std::cout << str.at(i);
		else
		{
			std::cout << " " << str.at(i);
			actual = str.at(i);
		}
	}



	return 0;
}