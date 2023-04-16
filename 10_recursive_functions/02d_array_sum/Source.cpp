#include <iostream>

int arr_sum(int* arr, int len)
{
	// Base case
	if (len == 1)
		return arr[0];

	int sub_result = arr_sum(arr, len - 1);
	return sub_result + arr[len - 1];

}

int main()
{
	int arr[]{ 1, 8, 2, 10, 3 };
	int size = std::size(arr);

	std::cout << arr_sum(arr, size) << std::endl;

	return 0;
}