#include <iostream>

int main()
{
	//std::cout << (-1 % 4) << std::endl;
	int n{ 3 };
	int m{ 4 };

	int i{ 0 };
	int j{ 0 };
	while(true)
	{
		std::cout << "Your current position is: (" << i << " " << j << ")" << std::endl;
		int move;
		int steps;
		std::cout << "Enter 1 to 4 to move: up, right, down, left and enter number of steps: ";
		std::cin >> move >> steps;
		if(move == 1)
		{
			if (i - steps < 0)
				i = n + (i - steps) % n;
			else
				i -= steps;
		}
		if(move == 2)
		{
			if (j + steps >= m)
				j = (j + steps) % m;
			else
				j += steps;
		}
		if(move == 3)
		{
			if (i + steps >= n)
				i = (i + steps) % n;
			else
				i += steps;
			
		}
		if(move == 4)
		{
			if (j - steps < 0)
				j = m + (j - steps) % m;
			else
				j -= steps;
		}
	}


	return 0;
}