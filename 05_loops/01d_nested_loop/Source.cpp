#include <iostream>


int main()
{
	int T;
	std::cout << "Enter how many test cases do you want: ";
	std::cin >> T;

	//// Version with two loops
	//while(T > 0)
	//{
	//	int num;
	//	std::cout << "Enter value to sum of 1 to N: ";
	//	std::cin >> num;

	//	int sum{ 0 };
	//	int start{ 1 };

	//	while (start <= num)
	//	{
	//		sum += start;
	//		start++;
	//	}

	//	--T;

	//	std::cout << "Sum from 1 to " << num << " = " << sum << std::endl;
	//}

	// Version with one loop and math trick, this version will be more efficient
	while (T > 0)
	{
		int num;
		std::cout << "Enter value to sum of 1 to N: ";
		std::cin >> num;

		int sum{ num * (num + 1) / 2};

		--T;

		std::cout << "Sum from 1 to " << num << " = " << sum << std::endl;
	}

	return 0;
}