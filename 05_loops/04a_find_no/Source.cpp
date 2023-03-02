#include <iostream>
#include <string>


int main()
{
	int N;
	std::cout << "Enter number of strings do you want to check: ";
	std::cin >> N;

	while(N--)
	{
		std::string str;
		std::cin >> str;

		if(str == "no" || str == "No" || str == "nO" || str == "NO" ||
			str == "on" || str == "oN" || str == "On" || str == "ON")
		{
			std::cout << str << " ";
		}
	}


	std::cout << std::endl;




	return 0;
}