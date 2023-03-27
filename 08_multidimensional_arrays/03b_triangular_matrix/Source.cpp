#include <iostream>


int main()
{
	constexpr int rows{ 3 };
	constexpr int cols{ 3 };

	int arr[rows][cols]
	{
		{8, 16, 9},
		{3, 15, 27},
		{14, 25, 29}
	};

	int r{ 0 };
	int c{ 0 };
	int upper_triangle{ 0 };
	while(r < rows)
	{
		for(int j{c}; j < cols; ++j)
		{
			upper_triangle += arr[r][j];
		}
		r++;
		c = r;
	}
	std::cout << upper_triangle << std::endl;

	r = 0;
	c = 0;
	int lower_triangle{ 0 };
	while(r < rows)
	{
		for(int j{0}; j <= c; ++j)
		{
			lower_triangle += arr[r][j];
		}
		r++;
		c = r;
	}
	std::cout << lower_triangle << std::endl;



	return 0;
}