#include <iostream>

int main()
{
	int a{ 201 }, b{ 25 };

	int int_division = a / b;
	double double_division = a / (b * 1.0);
	double division_part = double_division - int_division;
	std::cout << "Fraction part: " << division_part << std::endl;

	return 0;
}