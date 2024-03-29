#include <iostream>

int main()
{
	int s1, e1, s2, e2;


	std::cout << "Enter first interval: ";
	std::cin >> s1 >> e1;

	std::cout << "Enter second interval: ";
	std::cin >> s2 >> e2;

	if (e1 < s2 or e2 < s1)
		std::cout << -1 << std::endl; // One of the ends before start of the another
	else
	{
		// This is tricky. Trying to list all cases will be hard and buggy.
		// You need to notice which ones came first.
		// Then consider the possible cases (e.g. one of them completely inside the second)

		// However, more thinking makes it easier.
		// The intersection stars at the maximum of the starts.
		// The intersection ends at the minimum of the ends.
		// Draw some examples.
		if (s1 < s2) s1 = s2; // maximum of(s1, s2)
		if (e1 > e2) e1 = e2; // minimum of(e1, e2)

		std::cout << s1 << " " << e1 << std::endl;
	}

	/*
	 * Test cases:
	 * 1 15		20 30		=> -1
	 * 20 30	1 15		=> -1
	 * 1 6		1 6			=> 1 6
	 * 1 6		1 3			=> 1 3
	 * 1 6		2 3			=> 2 3
	 * 1 6		3 8			=> 3 6
	 * 3 8		1 6			=> 3 6
	 */

	return 0;
}