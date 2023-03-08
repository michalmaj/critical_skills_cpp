#include <iostream>

int main()
{
	int arr[]{ 1, 2, 3, 2, 1 };

	bool is_palindrome{ true };
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i{ 0 }; i < size / 2; ++i)
	{
		if(arr[i] != arr[size - 1 - i])
		{
			is_palindrome = false;
			break;
		}
	}

	std::cout << (is_palindrome ? "YES" : "NO") << std::endl;


	return 0;
}