/*
 * Write a program that reads two variables: num1 and num2.
 * Then swap values of num1 and num2.
 */
#include <iostream>

int main()
{
	int num1{};
	int num2{};
	int num3{};

	std::cout << "Enter two numbers: ";
	std::cin >> num1 >> num2;

	// TODO: write 3 lines to swaps values of num1 and num2
	num3 = num1; // num3 will be temporary place in memory to store value hiding in num1
	num1 = num2; // place value of num2 to num1
	num2 = num3; // earlier we hid num1 inside num3, now we can put that value to num2

	std::cout << "num1: " << num1 << ", num2: " << num2 << std::endl;


	return 0;
}