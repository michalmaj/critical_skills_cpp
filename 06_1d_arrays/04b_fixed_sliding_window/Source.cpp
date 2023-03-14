#include <iostream>

int main()
{
	int arr[]{ 1, 0, 3, -4, 2, -6, 9 };
	int k{ 3 }; // Window size

	int sum{ 0 };

	// Calculate sum from first window
	for (int i{ 0 }; i < k; ++i)
		sum += arr[i];

	std::cout << sum << std::endl;

	// Then we have to add next number at k index and subtract value,
	// that wa at beginning of previous window
	for(int i{k}; i < std::size(arr); ++i)
	{
		sum += arr[i] - arr[i - k];
		std::cout << sum << std::endl;
	}

	return 0;
}