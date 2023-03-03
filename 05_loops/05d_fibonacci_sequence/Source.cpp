#include <iostream>

int main()
{
	int n;
	std::cout << "Enter how many elements do you want from fibonacci sequence: ";
	std::cin >> n;

	int a{ 0 };
	int b{ 1 };

	std::cout << a << " " << b << " ";

	for(int i{2}; i < n; ++i)
	{
		int c = a + b;
		std::cout << c << " ";

		a = b;
		b = c;
	}

	std::cout << std::endl;
	return 0;
}