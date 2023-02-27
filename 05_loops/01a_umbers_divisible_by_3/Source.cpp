#include <iostream>

int main()
{
	int end;
	std::cout << "Enter range from 0 to N to check: ";
	std::cin >> end;

	int start{ 1 };

	while(start <= end)
	{
		if (start % 3 == 0)
			std::cout << start << " ";
		start++;
	}



	return 0;
}