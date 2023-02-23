#include <iostream>

int main()
{
	int num;
	std::cout << "Enter a number: ";
	std::cin >> num;

	if (num % 2 == 0)
		std::cout << num % 10 << std::endl;
	else
	{
		if(num < 1000)
			std::cout << num % 100 << std::endl;

		else if (num < 1000000)
			std::cout << num % 10000 << std::endl;
		else
			std::cout << -num << std::endl;
	}




	return 0;
}