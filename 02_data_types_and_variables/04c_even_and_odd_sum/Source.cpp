/*
 * Give 8 space separated integers, find the sum of those in even places and the sum of those in odd places.
 * Example:
 * Input:
 *	11 2 7 9 12 -8 3 -1
 * Output
 *	2 33
 * Why?
 *	2 + 9 +(-8) + (-1) = 2 for even places
 *	11 + 7 + 12 + 3 = 33 for odd places
 */


#include <iostream>

int main()
{
	// Solution is a good naming variables and read them in right order.
	int  even1, even2, even3, even4;
	int odd1, odd2, odd3, odd4;

	std::cin >> odd1 >> even1;
	std::cin >> odd2 >> even2;
	std::cin >> odd3 >> even3;
	std::cin >> odd4 >> even4;

	int even_sum{ even1 + even2 + even3 + even4 };
	int odd_sum{ odd1 + odd2 + odd3 + odd4 };

	std::cout << even_sum << " " << odd_sum << std::endl;

	return 0;
}