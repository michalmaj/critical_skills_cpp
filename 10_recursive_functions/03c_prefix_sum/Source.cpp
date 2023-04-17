#include <iostream>

int prefix_sum_v1(int arr[], int len, int cnt)
{
	if (cnt == 0)
		return 0;

	return arr[cnt - 1] + prefix_sum_v1(arr, len - 1, cnt - 1);
}

int prefix_sum_v2(int arr[], int cnt)
{
	if (cnt == 0)
		return 0;

	return arr[0] + prefix_sum_v2(arr + 1, cnt - 1);
}


int main()
{
	int arr[]{ 1, 8, 2, 10, 3 };
	int len = std::size(arr);

	for (const auto& e : arr)
		std::cout << e << " ";
	std::cout << std::endl;

	std::cout << prefix_sum_v1(arr, len, 3) << std::endl;
	std::cout << prefix_sum_v2(arr, 3) << std::endl;

	return 0;
}