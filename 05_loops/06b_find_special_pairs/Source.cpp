#include <iostream>

int main()
{
	int cnt{ 0 };

	for(int x{50}; x <= 300; ++x)
	{
		for(int y{70}; y <= 400; ++y)
		{
			if (x < y and ((x + y) % 7 == 0))
				cnt++;
		}
	}

	std::cout << cnt << std::endl;

	std::cout << std::endl;
	return 0;
}