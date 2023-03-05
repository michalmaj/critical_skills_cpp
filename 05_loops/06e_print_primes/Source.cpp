#include <iostream>

int main()
{
	int n;
	bool first_print{ true };
	std::cout << "Enter range to check of primes: ";
	std::cin >> n;

	for(int i{2}; i <= n; ++i)
	{
		bool is_prime{ true };
		for(int j{2}; j < i / 2 + 1; ++j)
		{
			if(i == j)
				continue;
			if (i % j == 0)
			{
				is_prime = false;
				break;
			}
		}
		if (is_prime)
		{
			if (!first_print)
				std::cout << ",";
			std::cout << i;

			first_print = false;
		}
	}

	return 0;
}