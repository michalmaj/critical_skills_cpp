#include <iostream>

int suffix_sum(int* arr, int len, int cnt)
{
	if (cnt == 0)
		return 0;

	return arr[len - 1] + suffix_sum(arr, len - 1, cnt - 1);
}

int main()
{
	int arr[]{ 1, 8, 2, 10, 3 };
	int len = std::size(arr);

	for (const auto& e : arr)
		std::cout << e << " ";
	std::cout << std::endl;

	std::cout << suffix_sum(arr, len, 3) << std::endl;

	return 0;
}