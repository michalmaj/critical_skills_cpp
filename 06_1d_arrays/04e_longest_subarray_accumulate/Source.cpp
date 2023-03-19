#include <iostream>

/*
 * input:			1  0  0  0  0  0  1  0  1  1  0  1  0  0   0   0   0   0   1
 * # of zeros		0  1  2  3  4  5  5  6  6  6  7  7  8  9  10  11  12  13  13
 * # of ones		1  1  1  1  1  1  2  2  3  4  4  5  5  5   5   5   5   5   6
 * zeros - ones		-1 0  1  2  3  4  3  4  3  2  3  2  3  4   5   6   7   8   7
 * first time		x  x  x  x  x  x                           x   x   x   x
 *
 * Observation:
 * Whenever the same difference appear, it means the sub-sequence
 * between these 2 positions must have the same #zeros = #ones
 *
 * It has a sense close to accumulation array difference
 */

int main()
{
	int a[1000]{ 0 }; // Actually 999
	int difference[1000 * 2 + 1]; // Maximum 2000 values with shift 1000

	// Mark the difference as never appeared
	for (int i{ 0 }; i < 2001; ++i)
		difference[i] = INT_MAX;

	int n;
	std::cout << "How many 1 and 0 do you want to enter: ";
	std::cin >> n;

	for (int i{ 0 }; i < n; ++i)
		std::cin >> a[i];

	int maxSubarrayLength{ 0 };
	int maxSubarrayStartIndex{ -1 };
	int maxSubarrayEndIndex{ -1 };

	int added{ 0 };
	difference[0 + 1000] = -1; // difference 0 appears before the array (-1)

	for(int i{0}; i < n; ++i)
	{
		if (a[i] == 1)
			added += 1;
		else
			added -= 1;

		int shift = added + 1000; // shift to make sure positive

		if (difference[shift] == INT_MAX)
			difference[shift] = i; // First time for such accumulated difference to appear
		else
		{
			int subarayLength = i - difference[shift];

			if(subarayLength > maxSubarrayLength)
			{
				maxSubarrayLength = subarayLength;
				maxSubarrayStartIndex = difference[shift] + 1;
				maxSubarrayEndIndex = i;
			}
		}
	}

	if (maxSubarrayLength == 0)
		std::cout << "NOT FOUND" << std::endl;
	else
	{
		std::cout << maxSubarrayLength << std::endl;
		for (int i{ maxSubarrayStartIndex }; i <= maxSubarrayEndIndex; ++i)
			std::cout << a[i] << " ";
		std::cout << std::endl;
	}


	return 0;
}