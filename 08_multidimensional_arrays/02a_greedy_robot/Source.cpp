#include <iostream>


int main()
{
	constexpr int rows{ 3 };
	constexpr int cols{ 4 };

	int mat[rows][cols]
	{
		{8, 16, 9, 52},
		{3, 15, 27, 6},
		{14, 25, 2, 10}
	};

	int sum{ 0 };
	int i{ 0 }, j{ 0 }; // starting position

	// Directional array
	// It's direction for: value below, value on the right, and value on diagonal
	int di[]{ 1, 0, 1 };
	int dj[]{ 0, 1, 1 };

	while (i < rows and j < cols)
	{
		sum += mat[i][j];

		int next_val, best_i{ -1 }, best_j{ -1 };

		for (int d{ 0 }; d < 3; ++d)
		{
			int ni = i + di[d];
			int nj = j + dj[d];

			if (ni < rows and nj < cols)
			{
				if (best_i == -1 or next_val < mat[ni][nj])
					next_val = mat[ni][nj], best_i = ni, best_j = nj;
			}
		}
		if (best_i == -1)
			break;
		i = best_i, j = best_j;
	}


	std::cout << sum << std::endl;


	return 0;
}