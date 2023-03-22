#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::string fives{ "5555" };
	std::string num{ "10001234" };
	std::string output;
	int size = static_cast<int>(num.size());
	int it = static_cast<int>(fives.size());

	int r{ 0 };
	while(size--)
	{
		if(it != 0)
		{
			int val = (num.at(size) - '0') + (fives.at(--it) - '0') + r;
			int num = val % 10;
			output += num + '0';
			r = val / 10;
		}
		else
		{
			int val = (num.at(size) - '0') + r;
			int num = val % 10;
			output += num + '0';
			r = val / 10;
		}

	}
	std::reverse(output.begin(), output.end());
	std::cout << output << std::endl;

	 
	return 0;
}