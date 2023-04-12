#include <iostream>

int arr_max(int* arr, int n)
{
	if (n == 1)
		return arr[0];

	return std::max(arr[n-1], arr_max(arr, n-1));

}

int main()
{
	int arr[]{ 1, 8, 2, 10, 3 };
	int size = std::size(arr);

	std::cout << arr_max(arr, size) << std::endl;

	return 0;
}