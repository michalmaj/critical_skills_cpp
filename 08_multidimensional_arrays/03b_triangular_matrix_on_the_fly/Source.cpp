#include <iostream>

int main()
{
	int n, upper = 0, lower = 0, val;

	std::cout << "Enter shape of your NxN matrix: ";
	std::cin >> n;

	// No need to create matrix
	for(int i{0}; i < n; ++i)
	{
		for(int j{0}; j < n; ++j)
		{
			std::cin >> val;

			if (i <= j)
				lower += val;
			if (i >= j)
				upper += val;
		}
	}
	std::cout << lower << std::endl;
	std::cout << upper << std::endl;




	return 0;

}