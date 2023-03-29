#include <iostream>
#include <random>

int main()
{
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dist(1, 100);

	constexpr int rows{ 10 };
	constexpr int cols{ 10 };

	int arr[rows][cols]{};

	for (int i{ 0 }; i < rows; ++i)
	{
		for (int j{ 0 }; j < cols; ++j)
			arr[i][j] = dist(mt);
	}

	for (const auto& r : arr)
	{
		for (const auto& e : r)
			std::cout << e << " ";
		std::cout << std::endl;
	}

	//constexpr int rows{ 3 };
	//constexpr int cols{ 3 };
	//int arr[rows][cols]
	//{
	//	{8, 6, 1},
	//	{3, 2, 9},
	//	{1, 6, 4}
	//};

	// left up diag, up, right up diag, right, right down diag, down, left down diag, left
	int di[]{ -1, 1, -1, 0, 1, 1, 1, 0 };
	int dj[]{ -1, 0, 1, 1, 1, 0, -1, -1 };

	for(int i{0}; i < rows; ++i)
	{
		for(int j{0}; j < 3; ++j)
		{
			bool is_mountain{ true };
			int ni, nj;
			int val = arr[i][j];
			for(int d{0}; d < std::size(di); ++d)
			{
				ni = i + di[d];
				nj = j + dj[d];
				if(ni >= 0 and nj >=0 and ni < rows and nj < cols)
				{
					if (val <= arr[ni][nj])
						is_mountain = false;
				}
			}
			if(is_mountain)
				std::cout << i << " " << j << " " << val << std::endl;
		}
	}



	return 0;
}