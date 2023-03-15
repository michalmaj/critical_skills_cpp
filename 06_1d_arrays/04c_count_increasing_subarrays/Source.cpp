#include <iostream>

int main()
{
	int arr[]{ 1, 2, 3, 4 };
	int k{ 1 }; // Window size

	int n = std::size(arr);
	int result{ 0 };


	// Brute-force solution, for every possible array length
	// Try all possible sub-arrays
	for(int len{1}; len <= n; ++len)
	{
		for(int st{0}; st < n - len + 1; ++st)
		{
			bool is_ok = true;
			for(int k{1}; k < len && is_ok; ++k)
			{
				if (arr[st + k] <= arr[st + k - 1])
					is_ok = false;
			}
			result += is_ok;
		}
	}
	std::cout << "result: " << result << std::endl;

	std::cout << "=================================================\n\n";

	result = 0;

	// Two for loops
	// For  every index i in the array we consider it as the start of a sub-array
	for(int i{0}; i < n; ++i)
	{
		// Adding one to result because any array of size one is considered increasing
		// this sum-array will include the value in index i
		result++;

		// Trying to expanding a sub-array which starts with at index i and
		// if this sub-array still increasing then we add one to our result
		// otherwise we should stop expanding this sub-array
		for(int j{i+1}; j < n; ++j)
		{
			// if the current value is greater than or equal the previous one
			// then it's increasing
			if(arr[j] >= arr[j-1])
			{
				result++;
				
			}
			else
			{
				break;
			}
		}
	}
	std::cout << "result: " << result << std::endl;

	std::cout << "=================================================\n\n";

	result = 0;
	int len{ 1 };

	// One loop
	// Let say we have increasing sequence of length 4. It means we have 4*5/2 valid sub-arrays
	// So, find each maximal sub-sequence and add them using n*(n+1)/2
	// Or just increment with length each time we extend it

	// We will count sequence of length > 1. Later add +n
	for(int i{1}; i < n; ++i)
	{
		// Keep expand len as long as the sub-array is increasing
		if (arr[i - 1] <= arr[i])
		{
			result += len;
			++len;
		}
		else
			len = 1;
	}
	std::cout << "result: " << result + n << std::endl;

	return 0;
}