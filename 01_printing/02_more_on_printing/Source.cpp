#include <iostream>

int main()
{
	//std::cout << "Hello world!";
	//return 0; // Tells compiler our program is done!

	//// Lines after return statement will be ignored
	//std::cout << "If we don't add either std::endl or \\n";
	//std::cout << "We will print everything as a single line on the console!";

	std::cout << "\n======================================\n\n";

	std::cout << "Hello world!";
	std::cout << std::endl;
	// std::cout << "If we don't add either std::endl or \\n"; // Line commented out, will not be executed
	std::cout << "We will print everything as a single line on the console!";
	std::cout << std::endl;

	std::cout << "\n======================================\n\n";

	std::cout << "Hello world!";
	std::cout << std::endl;
	// Multi-comment using /**/
	/*
	std::cout << "If we don't add either std::endl or \\n"; // Line commented out, will not be executed
	std::cout << "We will print everything as a single line on the console!";
	std::cout << std::endl;
	*/

	// Number vs Text
	std::cout << 1 << std::endl; // integer
	std::cout << 12 << std::endl; // integer
	std::cout << 123 << " is a number" << std::endl; // integer
	std::cout << "123" << " is NOT a number" << std::endl; // string
	std::cout << std::endl;

	std::cout << 15.7 << std::endl; // decimal
	std::cout << -12.52 << std::endl; // negative decimal
	std::cout << std::endl;

	std::cout << 1234 << std::endl; // integer
	std::cout << 4321 << std::endl; // integer
	std::cout << std::endl;

	std::cout << 43211234 << std::endl; // big number
	std::cout << 4321 << 1234 << std::endl; // two smaller numbers

	std::cout << "My lucky number is: " << 17 << std::endl;

	//Simple calculations
	std::cout << 1 << std::endl; // 1
	std::cout << 1+2 << std::endl; // 3
	std::cout << 1+2+3 << std::endl; // 6
	std::cout << 1+2+3+4 << std::endl; // 10
	std::cout << "1+2+3+4" << std::endl; // 1+2+3+4
	std::cout << "1+2+3+4=" << 1+2+3+4 << std::endl; // 10
	std::cout << std::endl;

	std::cout << 1+2+3+4-10 << std::endl; // 0
	std::cout << 17-10 << std::endl; // 7

	std::cout << "2*3*4=" << 2*3*4 << std::endl; // 24
	std::cout << "12/2=" << 12/2 << std::endl; // 6
	std::cout << "12/2/3=" << 12/2/3 << std::endl; // 2
	std::cout << std::endl;

	std::cout << "6/2=" << 6/2 << std::endl; // 3 
	std::cout << "7/2=" << 7/2 << std::endl; // 3 - it's a integer divide
	std::cout << "7.0/2.0=" << 7.0/2.0 << std::endl; // 3.5
	std::cout<< std::endl;

	std::cout << 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 << std::endl; // 1000000000
	std::cout << 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 *10 << std::endl; // 1410065408 - it's a overflow

	std::cout << "\n======================================\n\n";

	// Follow the code below line by line
	std::cout << "If your dream only includes you, it's too small\n\n";

	std::cout << 30 + 20 + 10 - 10 - 20 - 30 << std::endl;
	std::cout << "70/10" << "\n";
	std::cout << 80 / 10 / 2 << "\n";

	std::cout << "\nOpportunities don't happen. "
		<< "you create them"
		<< std::endl;

	// All progress takes place outside the comfort zone

	/*
	 * Character cannot be developed in ease and quiet. Only through
	 *		experience of trial and suffering can the soul be strengthened,
	 *				ambition inspired, and success achieved.
	 */


	return 0;

	std::cout << "\n\nDo one thing every day that scares you.";
}