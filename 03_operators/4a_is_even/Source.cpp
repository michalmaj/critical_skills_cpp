#include <iostream>

int main()
{
	int num;
	std::cout << "Enter number to check if it is even or odd: ";
	std::cin >> num;

	std::cout << std::boolalpha;
	// Is even using %2
	bool is_even1 = (num % 2 == 0);
	std::cout << "Is even using %2: " << is_even1 << std::endl;

	// Is even using /2
	bool is_even2 = (num / 2) * 2 == num;
	std::cout << "Is even using /2: " << is_even2 << std::endl;

	// Is even using % 10
	bool is_even3 = num % 10 == 2 ||
					num % 10 == 4 ||
					num % 10 == 6 ||
					num % 10 == 8 ||
					num % 10 == 0;
	std::cout << "Is even using %10: " << is_even3 << std::endl;


	return 0;
}