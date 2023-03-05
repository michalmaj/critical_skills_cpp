#include <iostream>

int main()
{
	int n, a, b, total{ 0 };

	std::cin >> n >> a >> b;

	for(int i{1}; i <= n; ++i)
	{
		int tmp = i;
		int digits_sum{ 0 };

		while (tmp)
		{
			digits_sum += tmp % 10;
			tmp /= 10;
		}

		if (a <= digits_sum and digits_sum >= b)
			total += 1;
	}

	std::cout << total << std::endl;

	return 0;
}