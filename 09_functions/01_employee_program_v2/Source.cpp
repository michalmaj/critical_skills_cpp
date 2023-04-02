#include <iostream>

// Globals
int empty[1000]{ 0 };
std::string name[1000]{ "" };
int age[1000]{ -1 };
float salary[1000]{ 0.0f };
char gender[1000]{ '\0' };

int it{ 0 };
int max_it = it;
int size{ 0 };


// Functions
int menu()
{
	int choice;
	std::cout << "1) Add new employee\n";
	std::cout << "2) Print all employees\n";
	std::cout << "3) Delete by age\n";
	std::cout << "4) Update salary by name\n";
	std::cout << "5) Quit\n";
	std::cin >> choice;
	return choice;

}

void read_employee()
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
	it++;

	if (it > max_it)
	{
		max_it = it;
		size++;
	}
}

void print_employee()
{
	for (int i{ 0 }; i < size; ++i)
	{
		if (name[i].empty())
			continue;
		std::cout << name[i] << " " << age[i] << " " << salary[i] << " " << gender[i] << std::endl;
	}
}

void delete_by_age()
{
	int start, end;
	std::cout << "Enter start and end age: ";
	std::cin >> start >> end;
	for (int i{ 0 }; i < size; ++i)
	{
		if (age[i] >= start and age[i] <= end)
		{
			name[i] = "";
			age[i] = -1;
			salary[i] = 0.0f;
			gender[i] = '\0';
			it = 0;
		}
	}
}

void update_salary_by_name()
{
	std::string n;
	float s;
	std::cout << "Enter the name and salary: ";
	std::cin >> n >> s;
	for (int i{ 0 }; i < size; ++i)
	{
		if (name[i] == n)
			salary[i] = s;
	}
}


void employee_system()
{
	while(true)
	{
		int choice = menu();

		if (choice == 1)
			read_employee();
		else if (choice == 2)
			print_employee();
		else if (choice == 3)
			delete_by_age();
		else if (choice == 4)
			update_salary_by_name();
		else
			break;

	}
}

int main()
{
	employee_system();

	return 0;
}