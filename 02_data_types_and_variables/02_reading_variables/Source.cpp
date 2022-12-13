/*
 * In C++ we have operator for printing data: insertion operator<<
 * and reading data: extraction operator>>  
 */
#include <iostream>

int main()
{

	int num{}; // Declare variable in memory

	std::cout << "Enter your lucky number: ";
	std::cin >> num; // Trying to read number, compiler here freezes and waits we enter a number

	std::cout << "*****************\n";
	std::cout << 2 * num + 1 << std::endl;

	// Read more than one value:
	int a{}, b{};

	std::cout << "Enter two numbers: ";
	std::cin >> a >> b; // We can read multiple things using a single std::cin

	std::cout << a * b << " " << a + b << std::endl;

	// We can also read different data types
	int age{};
	std::cout << "Enter age: ";
	std::cin >> age;

	double weight{};
	std::cout << "Enter weight: ";
	std::cin >> weight;

	char group{};
	std::cout << "Enter group: ";
	std::cin >> group;

	std::string name{};
	std::cout << "Enter name: ";
	std::cin >> name;
	std::cout << "I am " << name << " belongs to group: " << group << std::endl;
	std::cout << "My weight is: " << weight << " and age: " << age << std::endl;
 
	return 0;
}