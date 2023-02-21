#include <iostream>

int main()
{
	int a{ 10 }, b{ 20 }, c{ 30 }, d{ 40 };

	std::cout << std::boolalpha;
	std::cout << (a + b == c) << std::endl; // true
	std::cout << (a + b + c >= 2 * d) << std::endl; // false

	std::cout << (a > 5 || d < 30) << std::endl; // true
	std::cout << (a > 5 && d < 30) << std::endl; // false
	std::cout << (a <= b && b <= c) << std::endl; // true

	std::cout << (a > 5 && d < 30 || c - b == 10) << std::endl; // true
	std::cout << (a <= b && b <= c && c <= d) << std::endl; // true

	std::cout << (a > 5 && d < 30 || c > d || d % 2 == 0) << std::endl; // true
	std::cout << (a > 5 && d < 30 || c > d && d % 2 == 0) << std::endl; // false

	std::cout << (a == 10 || b != 20 && c != 30 || d != 40) << std::endl; // true
	std::cout << ((a == 10 || b != 20) && c != 30 || d != 40) << std::endl; // false

	return 0;
}