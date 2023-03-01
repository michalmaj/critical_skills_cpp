#include <iostream>


int main()
{
	int T;
	std::cout << "Enter number of test cases: ";
	std::cin >> T;

	while(T--)
	{
		int n;
		std::cout << "Enter how many numbers do you want to read: ";
		std::cin >> n;

		int min = INT_MAX;
		while(n--)
		{
			int val;
			std::cin >> val;

			if (val < min)
				min = val;
		}

		std::cout << "min is: " << min << std::endl;
	}


	std::cout << std::endl;




	return 0;
}