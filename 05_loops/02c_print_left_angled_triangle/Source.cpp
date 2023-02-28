#include <iostream>

int main()
{
	int n;

	std::cout << "Enter how many rows do you want: ";
	std::cin >> n;

	int i{ 1 };
	while(n--)
	{
		int temp = i;
		while(i--)
		{
			std::cout << '*';
		}
		std::cout << std::endl;
		i = temp;
		++i;
	}
	

	return 0;
}