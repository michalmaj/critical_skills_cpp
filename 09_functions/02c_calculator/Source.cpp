#include <iostream>

int menu()
{
	int choice;
	std::cout << "1: Add 2 numbers\n";
	std::cout << "2: Subtract 2 numbers\n";
	std::cout << "3: Multiply 2 numbers\n";
	std::cout << "4: Divide 2 numbers\n";
	std::cout << "5: End the program\n";
	std::cin >> choice;

	return choice;
}

void read_values(double& a, double& b)
{
	std::cout << "Enter two values to perform a math operation: ";
	std::cin >> a >> b;
}

void add()
{
	double a;
	double b;
	read_values(a, b);
	std::cout << a + b << std::endl;
}

void subtract()
{
	double a;
	double b;
	read_values(a, b);
	std::cout << a - b << std::endl;
}

void mul()
{
	double a;
	double b;
	read_values(a, b);
	std::cout << a * b << std::endl;
}

void div()
{
	double a;
	double b;
	read_values(a, b);
	if(b == 0)
	{
		std::cout << "Can't divide by 0\n";
		return;
	}
	std::cout << a / b << std::endl;
}

int calc()
{
	static int number_of_operations{ 0 };
	while(true)
	{
		int choice = menu();
		if (choice == 1)
			add();
		else if (choice == 2)
			subtract();
		else if (choice == 3)
			mul();
		else if (choice == 4)
			div();
		else
			break;
		number_of_operations++;
	}
	return number_of_operations;
}

int main()
{
	int res = calc();
	std::cout << "We have done " << res << " operations!\n";
	return 0;
}