#include <iostream>

int main()
{
	int n;
	std::cout << "Enter how many rows do you want in X: ";
	std::cin >> n;

	for(int i{0}; i < n; ++i)
	{
		for(int j{0}; j < n; ++j)
		{
			if (i == j or n - i - 1 == j)
				std::cout << "*";
			else
				std::cout << " ";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
	return 0;
}