#include <iostream>

int main()
{
	int num, pow;
	std::cout << "Enter num and pow for calculate power: ";
	std::cin >> num >> pow;

	//// Without additional variable (hard to read because first iteration is already 2nd power)  
	//for (int i{ 2 }; i < pow; ++i)
	//	num *= num;
	//std::cout << "Operation: " << num << std::endl;

	// With additional variable
	int result{ 1 };
	while(pow >= 1)
	{
		result *= num;
		--pow;
	}

	std::cout << "Operation: " << result << std::endl;




	return 0;
}