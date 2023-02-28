#include <iostream>

int main()
{
	int x, y;
	std::cout << "Give a range to print: ";
	std::cin >> x >> y;

	while(x <= y)
	{
		std::cout << x << std::endl;
		++x;
	}


	return 0;
}