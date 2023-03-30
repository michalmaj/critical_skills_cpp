#include <iostream>

int main()
{
	int n{ 3 };
	int m{ 4 };
	int k{ 10 };
	// Direction from 1 to 4: up, right, down, left
	int rd[]{ -1, 0, 1, 0 };
	int cd[]{ 0, 1, 0, -1 };

	int r{ 0 };
	int c{ 0 };
	while(k--)
	{
		int dir, steps;
		std::cout << "Enter direction and number of steps: ";
		std::cin >> dir >> steps;
		--dir;
		r = (r + rd[dir] * steps) % n;
		c = (c + cd[dir] * steps) % m;

		if (r < 0)
			r += n;
		if (c < 0)
			c += m;

		std::cout << r << " " << c << std::endl;
	}



	return 0;
}