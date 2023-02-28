#include <iostream>

int main()
{
	int start, end;
	std::cout << "Give a range to print: ";
	std::cin >> start >> end;

	while(start <= end)
	{
		std::cout << start << std::endl;
		++start;
	}


	return 0;
}