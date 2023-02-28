#include <iostream>

int main()
{
	int n;

	std::cout << "Enter how many rows do you want: ";
	std::cin >> n;

	int row{ 1 };
	while(row <= n)
	{
		int stars_count = 1;
		while(stars_count <= row)
		{
			std::cout << '*';
			++stars_count;
		}
		std::cout << std::endl;
		++row;
	}
	

	return 0;
}