#include <iostream>

int main()
{
	int arr[500 + 1]{ 0 };
	int if_present[900 + 1]{ 0 };

	int N;
	std::cout << "How many numbers do you want to enter: ";
	std::cin >> N;
	int it{ 0 };
	while(N--)
	{
		int num;
		std::cin >> num;
		if_present[num]++;

		if (if_present[num] == 1)
			arr[it++] = num;
	}

	for (int i{ 0 }; i < it; ++i)
		std::cout << arr[i] << " ";

	return 0;
}