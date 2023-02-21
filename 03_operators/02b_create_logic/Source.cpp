#include <iostream>

int main()
{
	int nb, ng, nt;
	std::cout << "Enter number of boys, girls, and teachers: ";
	std::cin >> nb >> ng >> nt;

	std::cout << std::boolalpha;
	std::cout << "nb > 25: " << (nb > 25) << std::endl;
	std::cout << "ng <= 30: " << (ng <= 30) << std::endl;
	std::cout << "nb > 20 and nt > 2 or ng > 30 and nt > 4: " << (nb > 20 and nt > 2 or ng > 30 and nt > 4) << std::endl;
	std::cout << "nb < 60 or ng < 70: " << (nb < 60 or ng < 70) << std::endl;
	std::cout << "!(nb >= 60) and !(ng >= 70): " << (!(nb >= 60) and !(ng >= 70)) << std::endl;
	std::cout << "nb == ng + 10: " << (nb == ng + 10) << std::endl;
	std::cout << "nb - ng > 10 or nt > 5: " << (nb - ng > 10 or nt > 5) << std::endl;
	std::cout << "nb == ng + 10 or ng == nb + 15: " << (nb == ng + 10 or ng == nb + 15) << std::endl;




	return 0;
}