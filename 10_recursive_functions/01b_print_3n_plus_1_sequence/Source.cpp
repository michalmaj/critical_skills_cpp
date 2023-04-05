#include <iostream>

void print_sequence(int n)
{
	std::cout << n << " ";

	if(n == 1)
	{
		return;
	}


	if (n % 2 == 0)
		print_sequence(n / 2);
	else
		print_sequence(3 * n + 1);
}

int main()
{
	print_sequence(7);

	return 0;
}