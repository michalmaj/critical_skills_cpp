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
	int i{ 0 }, j{ 0 }; // Starting position
	while(i < rows and j < cols)
	{
		sum += mat[i][j];

		int nex_val, best_i = -1, best_j = -1;

		// is right ok position?
		if (j +	1 < cols)
			nex_val = mat[i][j + 1], best_i = i, best_j = j + 1;

		// is down ok position?
		if(i + 1 < rows)
		{
			if (best_i == -1 or nex_val < mat[i + 1][j])
				nex_val = mat[i + 1][j], best_i = i + 1, best_j = j;
		}

		// is diagonal ok position
		if(i + 1 < rows and j + 1 < cols)
		{
			if (best_i == -1 or nex_val < mat[i + 1][j + 1])
				nex_val = mat[i + 1][j + 1], best_i = i + 1, best_j = j + 1;
		}

		if(best_i == -1)
			break;
		i = best_i, j = best_j;
	}


	std::cout << sum << std::endl;


	return 0;
}