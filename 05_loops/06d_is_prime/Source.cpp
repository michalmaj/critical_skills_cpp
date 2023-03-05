#include <iostream>

int main()
{
	int n;
	std::cout << "Enter number to check if it is prime: ";
	std::cin >> n;

	if (n <= 1)
	{
		std::cout << "NO" << std::endl;
		return 0;
	}

	if(n == 2)
	{
		std::cout << "YES" << std::endl;
		return 0;
	}

	bool is_prime{ true };
	for(int i{2}; i < n / 2 + 1; ++i)
	{
		if(n == i)
			continue;

		if (n % i == 0)
		{
			is_prime = false;
			break;
		}
	}

	std::cout << ((is_prime) ? "YES" : "NO") << std::endl;

	return 0;
}