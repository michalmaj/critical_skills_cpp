#include <iostream>

bool is_palindrome_v1(int arr[], int start, int end)
{
	if (start >= end)
		return true;

	if (arr[start] != arr[end])
		return false;

	return is_palindrome_v1(arr, start + 1, end - 1);
}

bool is_palindrome_v2(int arr[], int end)
{
	if (end <= 0)
		return true;

	if (arr[0] != arr[end])
		return false;

	return is_palindrome_v2(arr + 1, end - 2);
}


int main()
{
	int arr[]{ 1, 8, 2, 8, 1 };
	int len = std::size(arr);

	for (const auto& e : arr)
		std::cout << e << " ";
	std::cout << std::endl;

	std::cout << std::boolalpha;
	std::cout << is_palindrome_v1(arr, 0, len - 1) << std::endl;
	std::cout << is_palindrome_v2(arr, len - 1) << std::endl;

	return 0;
}