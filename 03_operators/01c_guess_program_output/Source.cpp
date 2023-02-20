#include <iostream>

int main()
{
	int a{ 210 };

	a /= 2;
	std::cout << a << std::endl; // 105

	std::cout << (a /= 3) << std::endl; // 35
	std::cout << (a /= 5) << std::endl; // 7
	std::cout << (a /= 7) << std::endl; // 1

	std::cout << (2 + 3) * (5 - (-3)) / 5 / 8 << std::endl; // 1

	a = 10;
	std::cout << a++ + 10 << std::endl; // 20
	std::cout << ++a + 10 << std::endl; // 22
	std::cout << a-- + 10 << std::endl; // 22
	std::cout << --a + 10 << std::endl; // 20

	int b{ 20 };
	std::cout << a++ + ++b << std::endl; // 31

	std::cout << a << std::endl; // 11

	++a += 10;
	std::cout << a << std::endl; // 22


	return 0;
}