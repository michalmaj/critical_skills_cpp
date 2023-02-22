#include <iostream>

int main()
{
	int age;
	std::cout << "Enter age in days: ";
	std::cin >> age;

	int years = age / (12 * 30);
	int months = (age - years * 12 * 30) / 30;
	int days = age % 30;

	std::cout << "years: " << years << ", months: " << months << ", remaining days: " << days << std::endl;



	return 0;
}