#include <iostream>

int main()
{
	int empty[1000]{ 0 };
	std::string name[1000]{ "" };
	int age[1000]{ -1 };
	float salary[1000]{ 0 };
	char gender[1000]{ '\0' };

	int it{ 0 };
	while(true)
	{
		int choice;
		std::cout << "1) Add new employee\n";
		std::cout << "2) Print all employees\n";
		std::cout << "3) Delete by age\n";
		std::cout << "4) Update salary by name\n";
		std::cout << "5) Quit\n";
		std::cin >> choice;

		if(choice == 1)
		{
			std::string n;
			int a;
			float s;
			char g;
			std::cout << "Enter name: ";
			std::cin >> n;
			std::cout << "Enter age: ";
			std::cin >> a;
			std::cout << "Enter salary: ";
			std::cin >> s;
			std::cout << "Enter gender: ";
			std::cin >> g;
			while (!name[it].empty())
				it++;
			name[it] = n;
			age[it] = a;
			salary[it] = s;
			gender[it] = g;
		}
		else
			break;

	}

	return 0;
}