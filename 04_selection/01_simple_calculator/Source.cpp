#include <iostream>

int main()
{
	double num1, num2;
	char operand;
	std::cout << "Enter math operation: ";
	std::cin >> num1 >> operand >> num2;

	double result{ 0 };

	if (operand == '+')
		result = num1 + num2;
	else if (operand == '-')
		result = num1 - num2;
	else if (operand == '*')
		result = num1 * num2;
	else if (operand == '/')
		result = num1 / num2;
	else
		std::cout << "I don't know this operation!\n";

	std::cout << num1 << " " << operand << " " << num2 << " = " << result << std::endl;

	return 0;
}