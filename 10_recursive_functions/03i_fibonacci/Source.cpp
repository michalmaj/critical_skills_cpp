#include <iostream>

int fib(int n)
{
	if (n <= 1)
		return 1;
	return fib(n - 1) + fib(n - 2);
}

int main()
{
	std::cout << fib(6) << std::endl;
	std::cout << fib(40) << std::endl;

	return 0;
}