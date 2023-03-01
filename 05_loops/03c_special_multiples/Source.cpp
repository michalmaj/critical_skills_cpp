#include <iostream>


int main()
{
	int n;
	std::cout << "Enter how many number do you want to find that is divisible by 3 but not by 4: ";
	std::cin >> n;

	//// First attempt: 
	//int num{ -1 };
	//while (n)
	//{
	//	++num;
	//	if(num % 3 == 0 and num % 4 != 0)
	//	{
	//		std::cout << num << " ";
	//		n--;
	//	}
	//}

	// Second attempt
	int start{ 3 };
	while(n)
	{
		if(start % 4 != 0)
		{
			--n;
			std::cout << start << " ";
		}
		start += 3;
	}

	std::cout << std::endl;




	return 0;
}