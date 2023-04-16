#include <iostream>

void left_max(int arr[], int len)
{
	// Base case
	if(len == 1)
		return;

	left_max(arr, len - 1);
	arr[len - 1] = std::max(arr[len - 1], arr[len - 2]);
}

int main()
{
	int arr[]{ 1, 8, 2, 10, 3 };
	int size = std::size(arr);

	for (const auto& e : arr)
		std::cout << e << " ";
	std::cout << std::endl;

	left_max(arr, size);

	for (const auto& e : arr)
		std::cout << e << " ";
	std::cout << std::endl;
	return 0;
}