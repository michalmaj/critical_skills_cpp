#include <iostream>


int main()
{
	int a[999]{ 0 };
	int n;
	std::cout << "How many 1 and 0 do you want to enter: ";
	std::cin >> n;

	for (int i{ 0 }; i < n; ++i)
		std::cin >> a[i];

	int maxSubarrayLength{ 0 };
	int maxSubarrayStartIndex{ -1 };
	int maxSubarrayEndIndex{ -1 };


	// Brute force
	for(int start{0}; start < n; ++start)
	{
		for(int end{start}; end < n; ++end)
		{
			int zerosCount{ 0 };
			int onesCount{ 0 };

			for(int i{start}; i <= end; ++i)
			{
				if (a[i] == 1)
					onesCount++;
				else if (a[i] == 0)
					zerosCount++;
			}
			if(zerosCount == onesCount)
			{
				int subarrayLength = end - start + 1;

				if(subarrayLength > maxSubarrayLength)
				{
					maxSubarrayLength = subarrayLength;
					maxSubarrayStartIndex = start;
					maxSubarrayEndIndex = end;
				}
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