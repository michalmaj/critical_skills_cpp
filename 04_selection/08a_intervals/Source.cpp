#include <iostream>

int main()
{
	int x, s1, e1, s2, e2, s3, e3;
	int how_many_intervals{ 0 };
	std::cout << "Enter value to check: ";
	std::cin >> x;

	std::cout << "Enter first interval: ";
	std::cin >> s1 >> e1;

	std::cout << "Enter second interval: ";
	std::cin >> s2 >> e2;

	std::cout << "Enter third interval: ";
	std::cin >> s3 >> e3;

	how_many_intervals += (x >= s1 and x <= e1);
	how_many_intervals += (x >= s2 and x <= e2);
	how_many_intervals += (x >= s3 and x <= e3);

	std::cout << x << " is part of " << how_many_intervals << " intervals" << std::endl;


	

	return 0;
}