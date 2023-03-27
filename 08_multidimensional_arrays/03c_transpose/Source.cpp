#include <iostream>


int main()
{
	constexpr int rows{ 3 };
	constexpr int cols{ 4 };

	int arr[rows][cols]
	{
		{8, 16, 9, 52},
		{3, 15, 27, 6},
		{14, 25, 29, 10}
	};

	int transpose[cols][rows];

	for(int c{0}; c < cols; ++c)
	{
		for(int r{0}; r < rows; ++r)
		{
			transpose[c][r] = arr[r][c];
		}
	}

	for(const auto& r : transpose)
	{
		for (const auto& e : r)
			std::cout << e << " ";
		std::cout << std::endl;
	}


	return 0;
}