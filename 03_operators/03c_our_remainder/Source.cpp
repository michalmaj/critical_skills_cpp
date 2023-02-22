#include <iostream>

int main()
{
	int a{ 27 }, b{ 12 };

	int division = a / b;
	int remainder = a - b * division;
	std::cout << "Our remainder: " << remainder << std::endl;


	return 0;
}