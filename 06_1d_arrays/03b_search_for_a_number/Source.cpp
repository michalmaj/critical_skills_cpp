#include <iostream>

int main()
{
	int arr[200+1]{0};

	int N;
	std::cout << "Enter how many values do you want to insert: ";
	std::cin >> N;

	for (int i{ 0 }; i < N; ++i)
		std::cin >> arr[i];

	int queries;
	std::cout << "Enter number of queries: ";
	std::cin >> queries;

	while(queries--)
	{
		int num;
		std::cin >> num;

		bool is_not_in{ true };
		for(int i{N-1}; i >= 0; --i)
		{
			if(arr[i] == num)
			{
				std::cout << i << " ";
				is_not_in = false;
				break;
			}
		}
		if (is_not_in)
			std::cout << -1 << " ";
	}


	return 0;
}