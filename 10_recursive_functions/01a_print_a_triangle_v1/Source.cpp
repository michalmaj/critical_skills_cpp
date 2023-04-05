#include <iostream>

/**
 * \brief Recursive function to print '*' from n to 1
 * \param levels How deep is our triangle.
 */
void print_triangle(int levels)
{
	if(levels == 0)
		return;

	for (int i{ 0 }; i < levels; ++i)
		std::cout << "*";
	std::cout << "\n";

	print_triangle(levels - 1);
}

int main()
{
	print_triangle(5);

	return 0;
}