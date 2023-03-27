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

	int d_i[]{ 0, 1, 1 };
	int d_j[]{ 1, 1, 0 };

	int r{ 0 };
	int c{ 0 };
	int sum{ 0 };
	while(r < rows and c < cols)
	{
		sum += mat[r][c];
		int max{ INT_MIN };
		int r_inner, c_inner;
		for(int d{0}; d < 3; ++d)
		{
			if (max < mat[r + d_i[d]][c + d_j[d]])
			{
				max = mat[r + d_i[d]][c + d_j[d]];
				r_inner = r + d_i[d];
				c_inner = c + d_j[d];
			}
		}
		r = r_inner;
		c = c_inner;
	}

	std::cout << sum << std::endl;


	return 0;
}