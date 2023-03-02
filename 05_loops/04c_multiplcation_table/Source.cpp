#include <iostream>


int main()
{
	int N, M;
	std::cout << "Enter two value for multiplication table: ";
	std::cin >> N >> M;

	int first{ 1 };
	while(first <= N)
	{
		int second{ 1 };
		while(second <= M)
		{
			std::cout << first << " * " << second << " = " << first * second << std::endl;
			++second;
		}
		++first;
	}

	

	std::cout << std::endl;




	return 0;
}