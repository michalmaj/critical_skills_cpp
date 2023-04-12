#include <iostream>

int sum(int* arr, int len)
{
	if (len <= 0)
		return 0;

	return (sum(arr, len - 1) + arr[len - 1]);

}

int main()
{
	int arr[]{ 1, 8, 2, 10, 3 };
	int size = std::size(arr);

	std::cout << sum(arr, size) << std::endl;

	return 0;
}