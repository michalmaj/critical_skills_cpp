#include <iostream>
#include <string>

std::string reverse_str(const std::string& str)
{
	std::string output = str;
	int st{ 0 };
	int en{ static_cast<int>(str.size() - 1) };

	while(st < en)
	{
		// swap
		char tmp = output.at(en);
		output[en] = output[st];
		output[st] = tmp;

		st++;
		en--;
	}

	return output;
}


int main()
{
	std::string str{ "Hello World!" };

	std::cout << reverse_str(str) << std::endl;

	return 0;
}