#include <iostream>

int main()
{
	// Without adding new lines
	std::cout << "Hello world!";
	std::cout << "If we don't add either std::endl or \\n";
	std::cout << "We will print everything as a single line on the console!";

	std::cout << "\n==========================================\n\n";

	// With new lines
	std::cout << "Hello world!\n"; // New line using \n
	std::cout << "If we don't add either std::endl or \\n";
	std::cout << std::endl; // New line using std::endl
	std::cout << "We will print everything as a single line on the console!\n"; // Again new line using \n

	std::cout << "\n==========================================\n\n";

	// We can also type it as:
	std::cout << "Hello world!\n" << "If we don't add either std::endl or \\n" << std::endl << "We will print everything as a single line on the console!\n"; // same output as above

	std::cout << "\n==========================================\n\n";

	// We can separate code on several lines
	std::cout << "Hello world!"
		<< std::endl << "If we don't add either std::endl or \\n"
		<< std::endl << "We will print everything as a single line on the console!"
		<< std::endl; // same output as above

	std::cout << "\n==========================================\n\n";

	// Or we can even write a whole sentence as a one string
	std::cout << "Hello world!\nIf we don't add either std::endl or \\n\nWe will print everything as a single line on the console!\n";


	return 0;
}