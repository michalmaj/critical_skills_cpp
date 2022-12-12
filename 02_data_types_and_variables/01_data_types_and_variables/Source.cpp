/*
 * Data type: We vs Programming:
 *		Value:					We call it:					C++ Data Type:
 *		52						Number						Integer
 *		12.7					Number						Double or float
 *		Z						Letter						Character
 *		Computer				Word						String/Sequence of characters
 *		Male or female?			Status of 2 things			Boolean
 *
 * How to represents data types in computer memory, we should think of it as boxes.
 * Each box has:
 *	- address location;
 *	- type (e.g. integer, double)
 *	- name (e.g. age, name, salary)
 * We call it variable.
 */

#include <iostream>

int main()
{
	// Declaring variables

	// int for integer
	int age = 55;

	std::cout << age << std::endl;

	// double used for fraction
	double weight = 92.5;

	std::cout << "My weight is: " << weight << std::endl;

	// Declare variable in memory without initialization - garbage values.
	int number1;
	int number2;

	// Assign values (in memory)
	number1 = 30;
	number2 = 10;

	// Print values
	std::cout << number1 + number2 << std::endl;
	std::cout << number1 - number2 << std::endl;

	// Reassign values
	number1 = 50;
	std::cout << "2n+1 = " << number1 * 2 + 1 << std::endl;

	// Initialization: Several ways
	int age1; // uninitialized: garbage data - don't
	int age2 = 52; // C-style, popular
	int age3(52); // Constructor initialization
	int age4{ 52 }; // Modern initialization: preferred

	// Other important data types
	double weight1{ -92.5 };

	char group{ 'd' };

	bool is_male{ true };
	bool like_football{ false };

	int age5{ 55 };
	std::string name{ "John" };

	std::cout << "I am " << age5 << " years old\n";
	std::cout << "My weight is " << weight << std::endl;

	std::cout << "My name is " << name << " and group " << group << std::endl << is_male << " " << like_football << std::endl;

	// The right data type... the right way
	int a{ 10 };
	int b{ 21 };

	int i1{ a + b / 2 }; // 20
	int i2{ (a + b) / 2 }; // 15

	std::cout << "i1: " << i1 << std::endl;
	std::cout << "i2: " << i2 << std::endl;

	double x{ 10.0 };
	double y{ 21 };

	double d1{ x + y / 2.0 }; // 20.5
	double d2{ (x+y) / 2.0 }; // 15.5 
	std::cout << "d1: " << d1 << std::endl;
	std::cout << "d2: " << d2 << std::endl;

	return 0;
}