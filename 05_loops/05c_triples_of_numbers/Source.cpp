#include <iostream>


int main()
{
	int n, m, w;
	std::cout << "Enter three numbers: ";
	std::cin >> n >> m >> w;

	int cnt{ 0 };

	for(int i{1}; i <= n; ++i)
	{
		for(int j{i}; j <= m; ++j)
		{
			int k = i + j;

			if (1 <= k and k <= w)
				cnt += w - k + 1;
		}
	}

	std::cout << "Number of triplets: " << cnt << std::endl;

	std::cout << std::endl;




	return 0;
}