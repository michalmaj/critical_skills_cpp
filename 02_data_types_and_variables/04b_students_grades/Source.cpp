/*
 * Write a program that read 2 students information about math exam:
 *	- read per student: name, id, grade;
 *	- then print them.
 */

#include <iostream>

int main()
{
	std::string nameStudent1{};
	std::string nameStudent2{};
	int idStudent1{};
	int idStudent2{};
	int gradeStudent1{};
	int gradeStudent2{};

	std::cout << "What is student 1 name: ";
	std::cin >> nameStudent1;

	std::cout << "His id: ";
	std::cin >> idStudent1;

	std::cout << "His math exam grade: ";
	std::cin >> gradeStudent1;

	std::cout << "What is student 2 name: ";
	std::cin >> nameStudent2;

	std::cout << "His id: ";
	std::cin >> idStudent2;

	std::cout << "His math exam grade: ";
	std::cin >> gradeStudent2;

	std::cout << "Students grades in math:\n";
	std::cout << nameStudent1 << "(with id " << idStudent1 << ") got grade: " << gradeStudent1 << std::endl;
	std::cout << nameStudent2 << "(with id " << idStudent2 << ") got grade: " << gradeStudent2 << std::endl;
	std::cout << "Average grade is: " << (gradeStudent1 + gradeStudent2) / 2.0 << std::endl;

	return 0;
}