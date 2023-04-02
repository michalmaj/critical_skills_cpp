#include <iostream>
#include <string>

std::string reverse_str(const std::string& str)
{
	//std::string output(str.rbegin(), str.rend()); // Using iterators :)
	std::string output("", str.size());

	size_t it{ 0 };
	for (size_t i{ str.size() - 1 }; i != std::string::npos; --i)
		output.at(i) = str.at(it++);

	return output;
}


int main()
{
	std::string str{ "Hello World!" };

	std::cout << reverse_str(str) << std::endl;

	return 0;
}