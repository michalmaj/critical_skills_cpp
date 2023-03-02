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

		if(str.size() > 2)
			continue;
		if(tolower(str[0]) == 'n' and tolower(str[1]) == 'o' or
			tolower(str[0]) == 'o' and tolower(str[1]) == 'n')
		{
			std::cout << str << " ";
		}
	}


	std::cout << std::endl;




	return 0;
}