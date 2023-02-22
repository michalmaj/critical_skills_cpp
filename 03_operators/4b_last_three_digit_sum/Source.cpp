#include <iostream>

int main()
{
	int num;
	std::cout << "Enter a number: ";
	std::cin >> num;

	int sum = num % 10;
	num /= 10;

	sum += num % 10;
	num /= 10;

	sum += num % 10;

	std::cout << "Last 3 digit sum: " << sum << std::endl;


	return 0;
}