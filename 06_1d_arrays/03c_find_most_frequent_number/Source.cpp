#include <iostream>

int main()
{
	int arr[]{ -1, 2, -1, 3, -1, 5, 5 };

	int shifted[270 + 500 + 1]{ 0 };

	for(int i{0}; i < std::size(arr); ++i)
	{
		shifted[arr[i] + 500]++;
	}

	int idx{};
	int max{ 0 };
	for(int i{0}; i < std::size(shifted); ++i)
	{
		if(shifted[i] > max)
		{
			max = shifted[i];
			idx = i - 500;
		}
	}

	std::cout << idx << " repeated " << max << " times\n";



	return 0;
}