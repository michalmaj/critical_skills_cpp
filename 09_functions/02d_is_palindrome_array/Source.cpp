#include <iostream>

void fill_array(int* arr, int n)
{
	std::cout << "Enter numbers: ";
	for (int i{ 0 }; i < n; ++i)
		std::cin >> arr[i];
}

bool is_palindrome(const int* arr, int n)
{
	for(int i{0}; i < n / 2; ++i)
	{
		if (arr[i] != arr[n - 1 - i])
			return false;
	}
	return true;
}

int main()
{
	int n;
	int arr[1000]{ 0 };

	std::cout << "Enter how big array do you need: ";
	std::cin >> n;

	fill_array(arr, n);
	std::cout << std::boolalpha << is_palindrome(arr, n) << std::endl;

	return 0;
}