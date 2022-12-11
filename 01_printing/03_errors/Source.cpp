#include <iostream>

int main()
{
	//std::cout << "Hello World" // Compiler Error: missing semicolon

	//std::cout <<<< "Hello " < < " World\n"; // Compiler Error: too many 4 instead of 2 and space between < <

	//std::cout << "Hello World; // Compiler error: missing " character

	std::cout << 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 << std::endl; // 1000000000 - everything is ok
	std::cout << 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 << std::endl; // 1410065408 - it's a overflow: Warning

	std::cout << 2147483647 + 0 << std::endl; // Ok - it's max value for integer type
	std::cout << 2147483647 + 1 << std::endl; // Overflow


	return 0;
}