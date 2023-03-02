#include <iostream>


int main()
{
	int N;
	std::cout << "Enter number to reverse: ";
	std::cin >> N;

	int number{ 0 };

	while(N > 0)
	{
		int last_digit = N % 10; // get last digit
		N /= 10; // remove last digit

		number = number * 10 + last_digit;
	}

	std::cout << number << " " << number * 3 << std::endl;

	std::cout << std::endl;




	return 0;
}