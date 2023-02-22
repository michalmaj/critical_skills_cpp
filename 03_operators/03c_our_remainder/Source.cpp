#include <iostream>

int main()
{
	// Let's try 27/12
	// 27 / 12 = 2 [2 complete units, each is 12]
	// 2 * 12 = 24 [total complete units]
	// Remainder is 27 - 24 = 3. This number generate the fractional part.
	int a{ 27 }, b{ 12 };

	int division = a / b;
	int remainder = a - b * division;
	std::cout << "Our remainder: " << remainder << std::endl;


	return 0;
}