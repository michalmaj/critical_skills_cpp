#include <iostream>

int max(int a, int b, int c)
{
	return (std::max(a, std::max(b, c)));
}

int max(int a, int b, int c, int d)
{
	return std::max(a, max(b, c, d));
}

int max(int a, int b, int c, int d, int e)
{
	return std::max(a, max(b, c, d, e));
}

int max(int a, int b, int c, int d, int e, int f)
{
	return std::max(a, max(b, c, d, e, f));
}

int main()
{
	std::cout << max(1, 2, 7, 3, 4, 5) << std::endl;

	return 0;
}