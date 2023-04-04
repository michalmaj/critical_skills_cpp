#include <iostream>

bool is_prime(int num)
{
	if (num <= 1)
		return false;
	if (num == 2 or num == 3)
		return true;

	for(int i{2}; i <= num / 2; ++i)
	{
		if (num % i == 0)
			return false;
	}

	return true;
}

int nth_prime(int n)
{
	int it{ 1 };
	while(n)
	{
		it++;

		if (is_prime(it))
			n--;
	}
	return it;
}


int main()
{
	std::cout << nth_prime(6) << std::endl;


	return 0;
}