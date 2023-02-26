#include <iostream>

int main()
{
	int a, b, c, temp;
	std::cout << "Enter three numbers: ";
	std::cin >> a >> b >> c;

	if(b < a) // Swap them
	{
		temp = a;
		a = b;
		b = temp;
	}

	// Now a and b are correct
	if(c < b) // Swap them
	{
		temp = b;
		b = c;
		c = temp;

		// Now b, c are correct
		// But a, b may not be again
		if(b < a)
		{
			temp = a;
			a = b;
			b = temp;
		}
	}

	std::cout << a << " " << b << " " << c << std::endl;




	return 0;
}