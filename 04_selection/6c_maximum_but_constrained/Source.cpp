#include <iostream>

int main()
{
	int a, b, c;
	int max_value{ -1 };

	std::cout << "Enter three values: ";
	std::cin >> a;
	if (a < 100)
		max_value = a;
	std::cin >> b;
	if (b < 100 && b > max_value)
		max_value = b;
	std::cin >> c;
	if (c < 100 && c > max_value)
		max_value = c;

	std::cout << max_value << std::endl;


	return 0;
}