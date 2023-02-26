#include <iostream>

int main()
{
	int A, B;
	std::cout << "Enter two numbers: ";
	std::cin >> A >> B;

	bool is_A_even = (A % 2 == 0);
	bool is_B_even = (B % 2 == 0);

	if (!is_A_even && !is_B_even)
		std::cout << A * B << std::endl;
	else if(is_A_even && is_B_even)
		std::cout << A / B << std::endl;
	else if(!is_A_even && is_B_even)
		std::cout << A + B << std::endl;
	else
		std::cout << A - B << std::endl;



	return 0;
}