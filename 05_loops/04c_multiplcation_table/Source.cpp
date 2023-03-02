#include <iostream>


int main()
{
	int N, M;
	std::cout << "Enter two value for multiplication table: ";
	std::cin >> N >> M;

	int cnt_n{ 1 };
	while(cnt_n <= N)
	{
		int cnt_m{ 1 };
		while(cnt_m <= M)
		{
			std::cout << cnt_n << " * " << cnt_m << " = " << cnt_n * cnt_m << std::endl;
			++cnt_m;
		}
		++cnt_n;
	}

	

	std::cout << std::endl;




	return 0;
}