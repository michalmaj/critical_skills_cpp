/*
 * Write a program that reads three variables: num1, num2, num3.
 * Then swap values of num1 and num2 and num3.
 * For example:
 *	num1 = 115, num2 = 20, num3 = 301
 * After swapping:
 *	num1 = 20, num2 = 301, num3 = 115
 */
#include <iostream>

int main()
{
	int num1{};
	int num2{};
	int num3{};
	int temp{};

	std::cout << "Enter three numbers: ";
	std::cin >> num1 >> num2 >> num3;

	// TODO: write 4 lines to swaps values of num1 and num2 and num3
	temp = num3;
	num3 = num1;
	num1 = num2; 
	num2 = temp; 

	std::cout << "num1: " << num1 << ", num2: " << num2 << ", num3: " << num3 << std::endl;
	

	return 0;
}