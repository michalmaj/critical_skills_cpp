#include <iostream>

void set_powers(int arr[], int len = 5, int m = 2)
{
	arr[0] = 1;
	for(int i{1}; i < len; ++i)
	{
		arr[i] = arr[i - 1] * m;
	}
}


void print_arr(int* arr, int n)
{
	for (int i{ 0 }; i < n; ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

int main()
{
	int arr[1000];
	int len{ 4 };
	set_powers(arr, 4, 4);
	print_arr(arr, len);

	return 0;
}