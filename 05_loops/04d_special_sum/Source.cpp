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
			while(cnt)
			{
				val *= num;
				--cnt;
			}
			sum += val;
			copy++;
			cnt = copy;
		}
		std::cout << sum << std::endl;

	}


	std::cout << std::endl;




	return 0;
}