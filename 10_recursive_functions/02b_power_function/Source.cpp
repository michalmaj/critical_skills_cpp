#include <iostream>

int my_pow(int value, int p = 2)
{
	// Base case
	if (p == 0)
		return 1;

	return (value * my_pow(value, p - 1));

}

int main()
{
	std::cout << my_pow(7, 3) << std::endl;


	return 0;
}