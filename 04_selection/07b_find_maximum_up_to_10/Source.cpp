#include <iostream>

int main()
{
	int x, max, number_of_times;
	std::cout << "How many integers do you want to check: ";
	std::cin >> number_of_times;
	std::cout << "Enter " << number_of_times << " values: ";

	if(number_of_times > 0)
	{
		number_of_times--;
		std::cin >> x;
		max = x;
	}

	if(number_of_times > 0)
	{
		number_of_times--;
		std::cin >> x;
		if (x > max)
			max = x;
	}

	if (number_of_times > 0)
	{
		number_of_times--;
		std::cin >> x;
		if (x > max)
			max = x;
	}

	if (number_of_times > 0)
	{
		number_of_times--;
		std::cin >> x;
		if (x > max)
			max = x;
	}

	if (number_of_times > 0)
	{
		number_of_times--;
		std::cin >> x;
		if (x > max)
			max = x;
	}

	if (number_of_times > 0)
	{
		number_of_times--;
		std::cin >> x;
		if (x > max)
			max = x;
	}

	if (number_of_times > 0)
	{
		number_of_times--;
		std::cin >> x;
		if (x > max)
			max = x;
	}

	if (number_of_times > 0)
	{
		number_of_times--;
		std::cin >> x;
		if (x > max)
			max = x;
	}

	if (number_of_times > 0)
	{
		number_of_times--;
		std::cin >> x;
		if (x > max)
			max = x;
	}

	if (number_of_times > 0)
	{
		number_of_times--;
		std::cin >> x;
		if (x > max)
			max = x;
	}

	std::cout << "Max: " << max << std::endl;

	return 0;
}