#include <iostream>

int main()
{
	int a{ 1 }, b{ 1 }, c;

	std::cout << (c = a + b, a = b, b = c, // c = 2, a = 1, b = 2
				  c = a + b, a = b, b = c, // c = 3, a = 2, b = 3
				  c = a + b, a = b, b = c, // c = 5, a = 3, b = 5
				  c = a + b, a = b, b = c) // c = 8, a = 5, b = 8
	<< std::endl; // Final it shows 8





	return 0;
}