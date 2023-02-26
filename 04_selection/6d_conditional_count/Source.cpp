#include <iostream>

int main()
{
	int x, n1, n2, n3, n4, n5;
	int less_than_X{ 0 };
	int greater_than_X{ 0 };
	std::cout << "Read number X, then other 5 numbers: ";
	std::cin >> x;

	std::cin >> n1;
	if (n1 <= x)
		less_than_X++;
	else
		greater_than_X++;

	std::cin >> n2;
	if (n2 <= x)
		less_than_X++;
	else
		greater_than_X++;

	std::cin >> n3;
	if (n3 <= x)
		less_than_X++;
	else
		greater_than_X++;

	std::cin >> n4;
	if (n4 <= x)
		less_than_X++;
	else
		greater_than_X++;

	std::cin >> n5;
	if (n5 <= x)
		less_than_X++;
	else
		greater_than_X++;

	std::cout << less_than_X << " " << greater_than_X << std::endl;

	return 0;
}