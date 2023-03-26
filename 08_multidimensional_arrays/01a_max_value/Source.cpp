#include <iostream>

// Usage: 3 4
// Then 1 5 1 10 2 10 3 4 1 10 10 7

int main()
{
	int mat[100][100];
	int col, row;
	std::cout << "Enter how many row and columns you need: ";
	std::cin >> row >> col;
	int i{ 0 };
	int j{ 0 };

	for(int r{0}; r < row; ++r)
	{
		for(int c{0}; c < col; ++c)
		{
			std::cin >> mat[r][c];
			if(mat[r][c] >= mat[i][j])
			{
				i = r;
				j = c;
			}
		}
	}

	std::cout << "Max value at position " << i << " " << j << " with value = " << mat[i][j] << std::endl;


	return 0;
}