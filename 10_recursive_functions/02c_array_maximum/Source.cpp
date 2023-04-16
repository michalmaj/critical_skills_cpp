#include <iostream>

int arr_max(int* arr, int n)
{
	// Base case
	if (n == 1)
		return arr[0];

	int sub_result = arr_max(arr, n - 1);
	return std::max(arr[n-1], sub_result);

}

int main()
{
	int arr[]{ 1, 8, 2, 10, 3 };
	int size = std::size(arr);

	std::cout << arr_max(arr, size) << std::endl;

	return 0;
}