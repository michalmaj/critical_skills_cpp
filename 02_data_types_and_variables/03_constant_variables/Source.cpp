/*
 * Constant variable is define once and can't be change later.
 * We have a naming convention, we use capital letters.
 * Constants are used for disallow changes and clear intentions.
 */

#include <iostream>
#include <climits>

int main()
{
	// Capital letters for constants
	const double PI{ 3.14159 };
	//PI = 10; // Compiler Error: can't modify const variable

	//const int x; // Compiler error: we must assign a value!

	const char charVal{ 'A' };

	const std::string str{ "Welcome" };

	// C++ limits as constants
	std::cout << "Maximum integer: " << INT_MAX << std::endl;
	std::cout << "minimum integer: " << INT_MIN << std::endl;

	return 0;
}