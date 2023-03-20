#include<iostream>
#include <string>

int main()
{
	std::string first, second;
	std::cout << "Enter two strings: ";
	std::cin >> first >> second;

	int mx_size = first.size();

	if (mx_size < second.size())
		mx_size = second.size();

	for(int i{0}; i < mx_size; ++i)
	{
		if (i < first.size())
			std::cout << first[i];
		if (i < second.size())
			std::cout << second[i];
	}

	std::cout << std::endl;

	return 0;
}