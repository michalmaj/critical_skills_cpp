#include <iostream>

int main()
{
	int cnt{ 0 };

	for(int a{1}; a <= 200; ++a)
	{
		for(int b{1}; b <= 200; ++b)
		{
			for(int c{1}; c <= 200; ++c)
			{
				int d = a + b - c;
				if (d >= 1 and d <= 200)
					++cnt;
			}
		}
	}

	std::cout << cnt << std::endl;

	std::cout << std::endl;
	return 0;
}