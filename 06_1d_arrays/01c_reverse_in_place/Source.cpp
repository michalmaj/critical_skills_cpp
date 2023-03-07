#include <iostream>

int main()
{
	int arr[]{ 1, 2, 3, 4, 5, 6, 7, 8 };

	int size = std::size(arr);

	for(int i{0}; i < size / 2; ++i)
	{
		int temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}

	for (int i{ 0 }; i < size; ++i)
		std::cout << arr[i] << " ";

	std::cout << std::endl;



	return 0;
}