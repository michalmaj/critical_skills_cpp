#include <iostream>

int main()
{
	int frequent[150+1]{ 0 }; // Set all to zeros
	int arr[]{ 5, 1, 1, 1, 2, 1 };

	for(int i{0}; i < std::size(arr); ++i)
	{
		frequent[arr[i]]++;
	}

	int max = frequent[0];
	int idx = 0;
	for (int i{ 0 }; i < std::size(frequent); ++i)
	{
		if(frequent[i] > max)
		{
			max = frequent[i];
			idx = i;
		}
	}

	std::cout << "Most frequent value is " << idx << " which repeated " << max << " times" << std::endl;




	return 0;
}