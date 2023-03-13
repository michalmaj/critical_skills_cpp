#include <iostream>

int main()
{
	// As values are 0-500, we can make array of 501 mark the last value in it
	// Then we answer the queries directly
	const int N{ 500 + 1 };
	int n, q, x;
	int ans[N]{ -1 };

	std::cout << "Enter how many numbers do you want in your array: ";
	std::cin >> n;
	for(int i{0}; i < n; ++i)
	{
		std::cin >> x;
		ans[x] = i; // update the answer dor x to be i (i will be threaten as index of number) 
	}

	int num;
	std::cout << "Enter how many times do you want to find a number: ";
	std::cin >> q;

	while (q--)
	{
		std::cin >> num;
		std::cout << ans[num] << std::endl;
	}


	return 0;
}