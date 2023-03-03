#include <iostream>


int main()
{
	int n, m, sum;
	std::cout << "Enter pair of numbers and sum to check: ";
	std::cin >> n >> m >> sum;

	int cnt{ 0 };

	//// First version - nested loops
	//for(int i{0}; i <= n; ++i)
	//{
	//	for(int j{0}; j <= m; ++j)
	//	{
	//		if (i + j == sum)
	//		{
	//			//std::cout << i << " + " << j << " = " << SUM << std::endl;
	//			cnt++;
	//		}
	//	}
	//}

	// Second version - FASTER
	for(int i{1}; i <= n; ++i)
	{
		int j = sum - i; // i + j = sum

		if (1 <= j && j <= m)
		{
			std::cout << i << " + " << j << " = " << sum << std::endl;
			cnt++;
		}
	}

	std::cout << "Number of pairs: " << cnt << std::endl;

	std::cout << std::endl;




	return 0;
}