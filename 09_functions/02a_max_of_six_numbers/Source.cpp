#include <iostream>

int max(int a, int b)
{
	return (a > b ? a : b);
}

int max(int a, int b, int c)
{
	int res = max(a, b);
	return (c > res ? c : res);
}

int max(int a, int b, int c, int d)
{
	int res = max(a, b, c);
	return (d > res ? d : res);
}

int max(int a, int b, int c, int d, int e)
{
	int res = max(a, b, c, d);
	return (e > res ? e : res);
}

int max(int a, int b, int c, int d, int e, int f)
{
	int res = max(a, b, c, d, e);
	return (f > res ? f : res);
}

int main()
{
	std::cout << max(1, 2, 7, 3, 4, 5) << std::endl;

	return 0;
}