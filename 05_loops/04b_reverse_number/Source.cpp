#include <iostream>


int main()
{
	int N;
	std::cout << "Enter number to reverse: ";
	std::cin >> N;

	int R{ 0 };
	while(N > 0)
	{
		R += N % 10;
		if (N > 10)
			R *= 10;
		N /= 10;

	}

	std::cout << R << " " << R * 3 << std::endl;

	std::cout << std::endl;




	return 0;
}