#include <iostream>

int main()
{
	bool is_increasing{ true };
	int arr[]{ 1, 2, 2, 5, 1};

	int size = sizeof(arr) / sizeof(arr[0]);
	for(int i{1}; i < size; ++i)
	{
		if (arr[i - 1] > arr[i])
		{
			is_increasing = false;
			break;
		}
	}

	std::cout << (is_increasing ? "YES" : "NO") << std::endl;

	return 0;
}