#include <iostream>

int main()
{
	int n, k;
	std::cout << "Enter number of players and how big is k: ";
	std::cin >> n >> k;

	// Let's mark them in 0-based array
	int is_removed[199]{ 0 };

	int last_pos{ 0 }; // The first person to simulate from it

	// We will jus simulate the running
	// Start from last killed position
	// Count K times, but skip these killed positions already
	for(int t{0}; t < n; ++t)
	{
		int remaining_alive = n - t;

		int current_k = k;
		if (k % remaining_alive == 0)
			current_k = remaining_alive;
		else
			current_k = k % remaining_alive;

		int step{ 0 };
		int last_person{ -1 };
		while(step < current_k)
		{
			if (is_removed[last_pos] == 0) // not removed, consider it and increment the step
			{
				last_person = last_pos;
				step++;
			}
			last_pos = (last_pos + 1) % n; // Loop back to the array if needed
		}
		is_removed[last_person] = 1;
		std::cout << last_person + 1 << std::endl;
	}



	return 0;
}