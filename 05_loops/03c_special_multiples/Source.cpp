#include <iostream>


int main()
{
	int n;
	std::cout << "Enter how many number do you want to find that is divisible by 3 but not by 4: ";
	std::cin >> n;

	int num{ -1 };
	while (n)
	{
		++num;
		if(num % 3 == 0 and num % 4 != 0)
		{
			std::cout << num << " ";
			n--;
		}
	}

	std::cout << std::endl;




	return 0;
}