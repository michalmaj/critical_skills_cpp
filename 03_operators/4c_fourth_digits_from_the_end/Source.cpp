#include <iostream>

int main()
{
	int num;
	std::cout << "Enter a number: ";
	std::cin >> num;

	num /= 1000;
	int result = num % 10;
	std::cout << "4th digits from the end: " << result << std::endl;


	return 0;
}