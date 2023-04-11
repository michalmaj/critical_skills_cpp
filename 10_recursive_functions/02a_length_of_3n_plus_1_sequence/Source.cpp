#include <iostream>

int length_3n_plus_1(int n)
{
	static int len{ 0 };

	if (n == 1)
	{
		len++;
		return len;
	}

	if (n % 2 == 0)
	{
		len++;
		length_3n_plus_1(n / 2);
	}
	else
	{
		len++;
		length_3n_plus_1(3 * n + 1);
	}
}

int main()
{
	std::cout << length_3n_plus_1(7) << std::endl;


	return 0;
}