#include <iostream>

void accumulate_arr(int* arr, int len)
{
	// Base case
	if(len == 1)
		return;

	accumulate_arr(arr, len - 1);
	arr[len - 1] += arr[len - 2];
	
}

int main()
{
	int arr[]{ 1, 8, 2, 10, 3 };
	int size = std::size(arr);

	for (const auto& e : arr)
		std::cout << e << " ";
	std::cout << std::endl;

	accumulate_arr(arr, size);

	for (const auto& e : arr)
		std::cout << e << " ";
	std::cout << std::endl;

	return 0;
}