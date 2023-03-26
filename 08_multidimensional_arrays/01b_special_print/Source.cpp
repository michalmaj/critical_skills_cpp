#include <iostream>


int main()
{
	int mat[3][4]
	{
		{8, 16, 9, 52},
		{3, 15, 27, 6},
		{14, 25, 2, 10}
	};

	int i{ 0 };
	int j{ 0 };
	int left_diag{ 0 };
	while(i < 3 and j < 4)
	{
		left_diag += mat[i++][j++];
	}
	std::cout << left_diag << std::endl;

	i = 0, j = 3;
	int right_diag{0};
	while(i < 3 and j >= 0)
	{
		right_diag += mat[i++][j--];
	}
	std::cout << right_diag << std::endl;

	i = 2, j = 0;
	int last_row{ 0 };
	while(j < 4)
	{
		last_row += mat[i][j++];
	}
	std::cout << last_row << std::endl;

	i = 0, j = 3;
	int last_col{ 0 };
	while(i < 3)
	{
		last_col += mat[i++][j];
	}
	std::cout << last_col << std::endl;


	return 0;
}