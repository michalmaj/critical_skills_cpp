#include <iostream>

int main()
{
	int num1, num2, num3;
	std::cout << "Enter 3 numbers: ";
	std::cin >> num1 >> num2 >> num3;

	//// 1st version
	//if (num1 < num2 && num1 < num3)
	//	std::cout << num1 << std::endl;
	//else if(num2 < num1 && num2 < num3)
	//	std::cout << num2 << std::endl;
	//else
	//	std::cout << num3 << std::endl;

	// 2nd version (better)
	int answer = num1;
	if (answer > num2)
		answer = num2;
	if (answer > num3)
		answer = num3;

	std::cout << "Answer: " << answer << std::endl;




	return 0;
}