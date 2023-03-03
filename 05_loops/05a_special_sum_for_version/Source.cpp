#include <iostream>


int main()
{
	int T;
	std::cout << "Enter number of test cases: ";
	std::cin >> T;

	for(int i{0}; i < T; ++i)
	{
		int N;
		std::cout << "Enter how many integers do you want: ";
		std::cin >> N;

		int cnt{ 1 };
		int sum{ 0 };
		for(int j{0}; j < N; ++j)
		{
			int num;
			std::cin >> num;
			int val{ 1 };
			for(int k{0}; k < cnt; ++k)
			{
				val *= num;
			}
			sum += val;
			cnt++;
		}
		std::cout << sum << std::endl;

	}


	std::cout << std::endl;




	return 0;
}