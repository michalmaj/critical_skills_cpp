#include <iostream>

int main()
{
	int x, max;
	std::cout << "Enter 10 values: ";
	std::cin >> x;
	max = x;

	std::cin >> x;
	if (x > max)
		max = x;

	std::cin >> x;
	if (x > max)
		max = x;

	std::cin >> x;
	if (x > max)
		max = x;

	std::cin >> x;
	if (x > max)
		max = x;

	std::cin >> x;
	if (x > max)
		max = x;

	std::cin >> x;
	if (x > max)
		max = x;

	std::cin >> x;
	if (x > max)
		max = x;

	std::cin >> x;
	if (x > max)
		max = x;

	std::cin >> x;
	if (x > max)
		max = x;

	std::cout << "Max: " << max << std::endl;

	return 0;
}