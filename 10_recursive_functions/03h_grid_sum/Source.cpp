#include <iostream>

int di[]{ 1, 0, 1 };
int dj[]{ 0, 1, 1 };

int path_sum(int grid[100][100], int ROWS, int COLS, int row=0, int col=0)
{
	int sum = grid[row][col];

	if (row == ROWS - 1 and col == COLS - 1)
		return sum;

	int max_idx = -1, max_value{INT_MIN};

	for(int d{0}; d < 3; ++d)
	{
		int new_row = row + di[d];
		int new_col = col + dj[d];

		if(new_row >= ROWS or new_col >= COLS)
			continue;

		if (max_value < grid[new_row][new_col])
			max_value = grid[new_row][new_col], max_idx = d;
	}
	int new_row = row + di[max_idx];
	int new_col = col + dj[max_idx];

	return sum + path_sum(grid, ROWS, COLS, new_row, new_col);
}

int main()
{
	int arr[100][100]
	{
		{1, 7, 8},
		{2, 10, 11},
		{20, 5, 9}
	};

	std::cout << path_sum(arr, 3, 3, 0, 0) << std::endl;

	return 0;
}