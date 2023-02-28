#include <iostream>

int main()
{
	int num;
	int cnt{ 0 };
	std::cout << "Enter a number: ";
	std::cin >> num;

	int num_copy = num;

	// Check to see if a number is equal to zero, is so add +1 to cnt variable
	if (num == 0)
		cnt = 1;
	// Check to see if a number won't overflow after -num operation is next else block
	else if (num == INT_MIN)
		cnt = 10;
	// Check to see if a number is negative, if so convert it to positive
	else
	{
		if (num < 0)
			num = -num; // Before this check if num is not a INT_MIN


		while(num > 0)
		{
			cnt++;
			num /= 10;
		}
	}

	std::cout << "Number " << num_copy << " contains " << cnt << " digits\n";




	return 0;
}