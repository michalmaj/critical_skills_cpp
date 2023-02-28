#include <iostream>

int main()
{
	int n;
	char c;
	std::cout << "Enter how many times do you want to print a character: ";
	std::cin >> n >> c;

	while(n--)
	{
		std::cout << c;
	}


	return 0;
}