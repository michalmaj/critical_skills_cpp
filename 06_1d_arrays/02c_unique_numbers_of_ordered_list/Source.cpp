#include <iostream>

int main()
{
	int arr[]{ 1, 1, 2, 2, 2, 5, 6, 6, 7, 8, 9, 9 };

	int current = arr[0];
	std::cout << current << " ";
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i{ 1 }; i < size; ++i)
	{
		int next = arr[i];
		if (next != current)
			std::cout << next << " ";
		current = next;
	}


	return 0;
}