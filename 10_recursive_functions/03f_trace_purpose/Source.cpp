#include <iostream>

void do_something(int n)
{
	if(n)
	{
		std::cout << n % 10;
		do_something(n / 10);
	}
}

int main()
{
	do_something(123456);

	return 0;
}