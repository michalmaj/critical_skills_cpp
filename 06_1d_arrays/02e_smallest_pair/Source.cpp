#include <iostream>

int main()
{
	int arr[]{ 10, 12, 13, 14, 15, 16, 17, 11 };

	int j{ 1 };
	int smallest = arr[0] + arr[j] + j - 0;
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i{ 1 }; i < size; ++i)
	{
		j++;
		if(j >= size)
			break;
		if (smallest > arr[i] + arr[j] + j - i)
			smallest = arr[i] + arr[j] + j - i;
	}

	std::cout << smallest << std::endl;


	return 0;
}