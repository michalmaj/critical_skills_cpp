#include <iostream>
#include <string>

int main()
{
	std::string str{ "Cxxxxxxxx" };

	std::string output;

	char current{ str.at(0) };
	int count{ 1 };

	for(int i{1}; i < str.size(); ++i)
	{
		if(current == str.at(i))
		{
			count++;
			continue;
		}

		
		output += current;
		output += count + '0';
		output += '_';
		

		current = str.at(i);
		count = 1;

	}
	output += current;
	output += count + '0';

	std::cout << output << std::endl;



	return 0;
}