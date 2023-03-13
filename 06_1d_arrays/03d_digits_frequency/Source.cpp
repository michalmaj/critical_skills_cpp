#include <iostream>

int main()
{
	int frequency[10]{ 0 };
	int N;
	std::cout << "Enter how many numbers do you want to enter: ";
	std::cin >> N;
	
	while(N--)
	{
		int num;
		std::cin >> num;

		// 0 will be a special case
		if (num == 0) 
			frequency[0]++;

		while(num != 0)
		{
			frequency[num % 10]++;
			num /= 10;
		}
	}

	for (int i{ 0 }; i < std::size(frequency); ++i)
		std::cout << i << " " << frequency[i] << std::endl;

	return 0;
}