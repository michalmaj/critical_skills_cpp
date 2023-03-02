#include <iostream>


int main()
{
	int T;
	std::cout << "Enter number of test cases: ";
	std::cin >> T;

	while(T--)
	{
		int N;
		std::cout << "Enter how many integers do you want: ";
		std::cin >> N;

		int cnt{ 1 };
		int sum{ 0 };
		while(N--)
		{
			int copy = cnt;
			int num;
			std::cin >> num;
			int val{ 1 };
			while(copy)
			{
				val *= num;
				--copy;
			}
			sum += val;
			cnt++;
		}
		std::cout << sum << std::endl;

	}


	std::cout << std::endl;




	return 0;
}