#include <iostream>


int main()
{
	int n;
	std::cout << "Enter how many rows do you want: ";
	std::cin >> n;

	int n_copy = n;
	int cnt{ 1 };
	while(n)
	{
		int tmp = n - 1;
		int cnt2 = cnt;
		while(tmp--)
		{
			std::cout << " ";
		}

		while(cnt--)
		{
			std::cout << "*";
		}

		cnt2 +=2 ;
		cnt = cnt2;
		--n;
		std::cout << std::endl;
	}

	n = n_copy;
	cnt = 2 * n - 1;
	while (n)
	{
		int tmp = n_copy - n;
		int cnt2 = cnt;
		while (tmp--)
		{
			std::cout << " ";
		}

		while(cnt--)
		{
			std::cout << "*";
		}

		cnt2 -= 2;
		cnt = cnt2;
		--n;
		std::cout << std::endl;

	}


	return 0;
}