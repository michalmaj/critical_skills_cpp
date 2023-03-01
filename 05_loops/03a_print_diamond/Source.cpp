#include <iostream>


int main()
{
	int n;
	std::cout << "Enter how many rows do you want: ";
	std::cin >> n;

	/*
	 * Let's print the upper triangle first.
	 * Let's assume N = 4, how many spaces and starts we print.
	 * Row 1		Spaces 3		Stars 1
	 * Row 2		Spaces 2		Stars 3
	 * Row 3		Spaces 1		Stars 5
	 * Row 4		Spaces 0		Stars 7
	 *
	 * Now we want to develop formulas for number of spaces and number of stars.
	 * For given 'row'
	 *	Spaces are: N - row			(3, 2, 1, 0)
	 *	Stars are: 2 * row - 1		(1, 3, 5, 7)
	 *
	 * Now we just iterate for each row
	 *	print spaces
	 *	then print stars
	 */

	int row = 1;
	while(row <= n)
	{
		int stars_count = 1;

		// Print N - rows spaces
		while(stars_count <= n - row)
		{
			std::cout << " ";
			++stars_count;
		}

		// Print 2 * rows - 1 stars
		stars_count = 1;
		while (stars_count <= 2 * row - 1)
		{
			std::cout << "*";
			++stars_count;
		}
		std::cout << std::endl;
		++row;
	}

	/*
	 * Let's print the lower triangle.
	 * Same logic, but we just switch looping from N to 1.
	 */
	row = n;
	while(row >= 1)
	{
		int stars_count{ 1 };

		while(stars_count <= n - row)
		{
			std::cout << " ";
			++stars_count;
		}

		stars_count = 1;
		while(stars_count <= 2 * row - 1)
		{
			std::cout << "*";
			++stars_count;
		}

		std::cout << std::endl;
		--row;
	}


	return 0;
}