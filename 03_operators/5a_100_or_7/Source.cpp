#include <iostream>

int main()
{
	int num;
	std::cout << "Enter a number: ";
	std::cin >> num;

	bool is_even{ num % 2 == 0 };
	bool is_odd{ num % 2 != 0 };

	int answer = 100 * is_even + 7 * is_odd;
	std::cout << "100 or 7: " << answer << std::endl;


	return 0;
}