#include <iostream>

void array_increment(int arr[], int len)
{
	// Base case
	if(len == 0)
		return;

	array_increment(arr, len - 1);
	arr[len - 1] += len - 1;
}

int main()
{
	int arr[]{ 1, 8, 2, 10, 3 };
	int size = std::size(arr);

	for (const auto& e : arr)
		std::cout << e << " ";
	std::cout << std::endl;

	array_increment(arr, size);

	for (const auto& e : arr)
		std::cout << e << " ";
	std::cout << std::endl;

	return 0;
}