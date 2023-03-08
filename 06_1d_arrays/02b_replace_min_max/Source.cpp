#include <iostream>

int main()
{
	int arr[]{ 4, 1, 3, 10, 8, 10, 10 };

	int max = arr[0];
	int min = arr[0];
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i{ 1 }; i < size; ++i)
	{
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}

	for(int i{0}; i < size; ++i)
	{
		if (arr[i] == max)
		{
			arr[i] = min;
			continue;
		}

		if (arr[i] == min)
			arr[i] = max;
	}

	for (const auto& e : arr)
		std::cout << e << " ";
	std::cout << std::endl;



	return 0;
}