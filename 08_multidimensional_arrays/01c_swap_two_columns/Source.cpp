#include <iostream>


int main()
{
	int mat[3][4]
	{
		{8, 16, 9, 52},
		{3, 15, 27, 6},
		{14, 25, 2, 10}
	};

	int n, m;
	std::cout << "Which columns do you want to swap: ";
	std::cin >> n >> m;

	int i{ 0 };
	while(i < 3)
	{
		int t = mat[i][n];
		mat[i][n] = mat[i][m];
		mat[i][m] = t;
		++i;
	}

	for(auto& r : mat)
	{
		for (auto& e : r)
			std::cout << e << " ";
		std::cout << std::endl;
	}


	return 0;
}