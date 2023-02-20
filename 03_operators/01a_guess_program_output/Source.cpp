#include <iostream>

int main()
{
	int a{ 0 }, b{ 1 };

	std::cout << a++ << std::endl; // 0
	std::cout << ++a << std::endl; // 2

	a += 2 * b + 1;
	b = ++a * 2;
	std::cout << a << " " << b << std::endl; // 6 12

	b = a; // b = 6
	a = 12 + a / 3 / 2 - 2 * 2;
	std::cout << a << std::endl; // 9

	a = b;
	a = ((12 + a) / 3 / 2 - 2) * 2;
	std::cout << a << std::endl; // 2



	return 0;
}