#include <iostream>


int main()
{
	int end;
	std::cout << "Enter range from 0 to N to find multiples: ";
	std::cin >> end;

	int start{ 0 };
	while(start <= end)
	{
		if (start % 8 == 0 or start % 12 == 0)
			std::cout << start << " ";

		++start;
	}

	std::cout << std::endl;

	


	return 0;
}