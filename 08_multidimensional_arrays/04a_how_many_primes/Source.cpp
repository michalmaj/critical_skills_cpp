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

	for(int i{0}; i < rows; ++i)
	{
		for(int j{0}; j < cols; ++j)
		{
			int val = dist(mt);
			if (val == 1)
				val = 0;
			arr[i][j] = val;
			for(int k{2}; k < val / 2; ++k)
			{
				if (val % k == 0)
				{
					arr[i][j] = 0;
					break;
				}
			}
		}
	}

	for(const auto& r : arr)
	{
		for (const auto& e : r)
			std::cout << e << " ";
		std::cout << std::endl;
	}

	int q;
	std::cout << "How many times do you want to check sub-arrays: ";
	std::cin >> q;

	while(q--)
	{
		int sum{ 0 };
		int si, sj, r, c;
		std::cout << "Enter top left point (i, j) and number of rows and columns: ";
		std::cin >> si >> sj >> r >> c;
		for(int i{si}; i < si + r ; ++i)
		{
			for(int j{sj}; j < sj + c; ++j)
			{
				if (arr[i][j] != 0)
				{
					std::cout << arr[i][j] << " ";
					sum++;
				}
			}
		}
		std::cout << "Sum: " << sum << std::endl;
	}




	return 0;
}