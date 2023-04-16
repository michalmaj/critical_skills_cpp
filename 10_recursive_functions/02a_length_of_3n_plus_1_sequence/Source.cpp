#include <iostream>

int length_3n_plus_1(int n)
{
	// Base case
	if (n == 1)
		return 1;

	// If even, for example 6 3 10 5 16 8 4 2 1
	if (n % 2 == 0)
		return 1 + length_3n_plus_1(n / 2);

	// If odd
	return 1 + length_3n_plus_1(3 * n + 1);
}

int main()
{
	std::cout << length_3n_plus_1(5) << std::endl;


	return 0;
}