/*
 * Write a program that reads two integers a, b;
 * b is either -1 or 1:
 *	If -1, print 2*a+1;
 *	If 1, print A*A
 */

#include <iostream>

int main()
{
	int a{};
	int b{};
	std::cout << "Enter two values for a and b (-1 or 1): ";
	std::cin >> a >> b;

	// There is a two possible results:
	int equ_is_1 = a * a;
	int equ_is_neg_1 = 2 * a + 1;

	// The trick we want to make them in one equation
	// Where if input is: only 1 equation is computed and the second is zero
	// Convert -1 to 0 and 1 to 1
	// With simple math, we can convert [-1 1] to [0 1]

	// value 1 for b = 1 and value 0 for b = -1
	int is_1 = (b + 1) / 2; // Gives 1 if b=1, 0 otherwise

	// value 1 for b = -1 and value 0 for b = 1
	int is_ng_1 = 1 - is_1; // Gives 1 if is_1 = 0 or gives 0 if is_1 = 1

	// Either 1*something + 0*something for b = 1
	// Or 0*something + 1*something for b = -1
	std::cout << is_1 * equ_is_1 + is_ng_1 * equ_is_neg_1;

	

	return 0;
}