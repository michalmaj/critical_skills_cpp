#include <iostream>

int main()
{
	int num;
	std::cout << "Enter a number: ";
	std::cin >> num;

	if (num < 10000)
		std::cout << "This is a small number" << std::endl;
	else
	{
		int sum_last_three{ 0 };
		int first = num % 10;
		num /= 10;
		int second = num % 10;
		num /= 10;
		int third = num % 10;

		sum_last_three = first + second + third;
		if(sum_last_three != 0)
			std::cout << "This is a great number" << std::endl;
		else
		{
			bool any = first % 2 == 0 || second % 2 == 0 || third % 2 == 0;
			if(any)
				std::cout << "This is a good number" << std::endl;
			else
				std::cout << "This is a bad number" << std::endl;
		}
	}



	return 0;
}