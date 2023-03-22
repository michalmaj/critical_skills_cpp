#include <iostream>
#include <string>


int main()
{
	std::string num{ "10001234" };

	int sz = num.size();

	int carry = 0;
	for(int i{0}; i < sz; ++i)
	{
		int digit = num[sz - 1 - i] - '0';

		if (i < 4)
			digit += 5; // Add 5 in first 4 times
		digit += carry; // add any carry

		if (digit >= 10)
			digit -= 10, carry = 1;
		else
			carry = 0;

		num[sz - 1 - i] = digit + '0';
	}

	if (carry)
		std::cout << 1;
	std::cout << num << std::endl;



	return 0;
}