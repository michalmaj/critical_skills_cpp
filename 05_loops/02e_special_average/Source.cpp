#include <iostream>

int main()
{
	int n;
	double odd_n{ 0 }, odd_sum{ 0 };
	double even_n{ 0 }, even_sum{ 0 };

	std::cout << "Enter how many numbers do you want to read: ";
	std::cin >> n;

	int cnt{ 0 };
	while(cnt < n)
	{
		++cnt;
		int num;
		std::cin >> num;

		if(cnt % 2 == 0)
		{
			even_n++;
			even_sum += num;
			continue;
		}

		odd_n++;
		odd_sum += num;
	}

	std::cout << odd_sum / odd_n << std::endl;
	std::cout << even_sum / even_n << std::endl;


	return 0;
}