#include <iostream>

double average(int* arr, int len)
{
	double sum, avg;
	if (len == 1)
		sum = arr[0];
	else
		sum = arr[len - 1] + (len - 1) * average(arr, len - 1);

	avg = sum / len;
	return avg;

}

int main()
{
	int arr[]{ 1, 8, 2, 10, 3 };
	int size = std::size(arr);

	std::cout << average(arr, size) << std::endl;

	return 0;
}