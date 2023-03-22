#include <iostream>
#include <string>

int main()
{
	std::string str{ "Cxxxxxxxx" };

	str += "$"; // a small trick to avoid special handling for last group

	int group_sz = 1;
	bool is_first_group{ true }; // easy ,ark to avoid early _

	for(int i{1}; i < str.size(); ++i) // start from 1
	{
		if(str[i - 1] != str[i]) // new group
		{
			if (!is_first_group) 
				std::cout << "_"; // split with previous group
			std::cout << str[i - 1] << group_sz;

			group_sz = 0;
			is_first_group = false;
		}
		++group_sz;
	}



	return 0;
}