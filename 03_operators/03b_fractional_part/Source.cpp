#include <iostream>

int main()
{
	int a{ 201 }, b{ 25 };

	int int_division = a / b;
	double double_division = a / (b * 1.0);
	double division_part = double_division - int_division;
	std::cout << "Fraction part: " << division_part << std::endl;

	// Another version
	double result = a / (b * 1.0);
	std::cout << "Fraction part: " << result - static_cast<int>(result) << std::endl;

	return 0;
}