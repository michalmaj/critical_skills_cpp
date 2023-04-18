#include <iostream>

void do_something1(int n)
{
	if(n)
	{
		std::cout << n % 10;
		do_something1(n / 10);
	}
}

void do_something2(int n)
{
	if(n)
	{
		do_something2(n / 10);
		std::cout << n % 10;
	}
}

int main()
{
	do_something1(123456);
	std::cout << std::endl;
	do_something2(123456);

	return 0;
}