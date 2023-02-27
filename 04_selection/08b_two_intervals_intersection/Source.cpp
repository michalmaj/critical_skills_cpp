#include <iostream>

int main()
{
	int s1, e1, s2, e2;


	std::cout << "Enter first interval: ";
	std::cin >> s1 >> e1;

	std::cout << "Enter second interval: ";
	std::cin >> s2 >> e2;

	if (s1 > s2)
	{
		int temp = s2;
		s2 = s1;
		s1 = temp;

		temp = e2;
		e2 = e1;
		e1 = temp;
	}

	if (s2 > e1)
		std::cout << -1 << std::endl;
	else
		std::cout << s2 << " " << e1 << std::endl;

	return 0;
}