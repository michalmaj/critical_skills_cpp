#include <iostream>

int main()
{
	int num1, num2;
	std::cout << "Enter 2 numbers: ";
	std::cin >> num1 >> num2;

	if (num1 < num2)
		std::cout << num1 << std::endl;
	else
		std::cout << num2 << std::endl;


	return 0;
}