/*
 * Write a program that reads 2 number and print their + - * /
 * Test our code using
 *	 - zero as first or second number;
 *	 - negative values;
 *	 - even and odd value;
 *	 - INT_MAX;
 */

#include <iostream>

int main()
{
	int a{}, b{};
	std::cout << "Enter two values: ";
	std::cin >> a >> b;

	// Do calculations:
	std::cout << a << " +  " << b << " = " << a + b << std::endl;
	std::cout << a << " -  " << b << " = " << a - b << std::endl;
	std::cout << a << " *  " << b << " = " << a * b << std::endl; // If 0 as second number we will get unhandled exception: integer division by zero.
	std::cout << a << " /  " << b << " = " << a / b << std::endl;

	return 0;
}