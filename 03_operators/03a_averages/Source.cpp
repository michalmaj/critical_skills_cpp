#include <iostream>

int main()
{
	int i1, i2, i3, i4, i5;
	std::cout << "Enter 5 numbers: ";
	std::cin >> i1 >> i2 >> i3 >> i4 >> i5;

	double average = (i1 + i2 + i3 + i4 + i5) / 5.0;
	std::cout << "Average: " << average << std::endl;

	int sum_3_first = i1 + i2 + i3;
	int sum_2_last = i4 + i5;
	double divided = sum_3_first / (sum_2_last * 1.0);
	std::cout << "Sum of the first 3 numbers divided by sum of the last 2 numbers: " << divided << std::endl;

	double average_3_first = sum_3_first / 3.0;
	double average_2_last = sum_2_last / 2.0;
	std::cout << "Sum of the first 3 numbers divided by average of the last 2 numbers: " << divided << std::endl;

	return 0;
}