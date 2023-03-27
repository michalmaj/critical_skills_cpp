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

	int q;
	std::cout << "How many times do you want to compare rows: ";
	std::cin >> q;

	while(q--)
	{
		int f, s;
		std::cout << "Enter which columns do you want to check: ";
		std::cin >> f >> s;
		bool is_smaller{ true };

		for(int c{0}; c < cols; ++c)
		{
			if (arr[f - 1][c] >= arr[s - 1][c])
			{
				is_smaller = false;
				break;
			}
		}

		std::cout << f << " " << s << " => " << (is_smaller ? "YES" : "NO") << std::endl;
	}


	return 0;
}