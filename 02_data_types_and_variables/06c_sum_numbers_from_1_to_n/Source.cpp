/*
 * Write a program that reads integer N and print sum from 1 to N.
 * E.g. if input N=5, then output=15, why? As 1+2+3+4+5=15.
 */

#include <iostream>

int main()
{
	std::cout << "Enter integer N to print out sum from 1 to N: ";
	int N;
	std::cin >> N;

	int formula = N * (N + 1) / 2;

	/*
	 * Why this formula?
	 * Let's do some example for N = 8:
	 * 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8
	 * Let's arrange as following
	 * 1 8		2 7		3 6		4 5		[first number and last number] [second number and second from back]
	 * What is value of each pair? 9 = N + 1, where N in our case is 8
	 * How many pairs do we have? 4 = N / 2, where N in our case is 8
	 *
	 * So N/2 pair, each has value N+1
	 * So total sum is (N * (N + 1)) / 2
	 */

	std::cout << "Result: " << formula << std::endl;

	return 0;
}