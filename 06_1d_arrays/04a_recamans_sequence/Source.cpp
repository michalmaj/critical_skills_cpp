#include <iostream>

int main()
{
	int occurences[200]{ 0 };
	int idx;
	std::cout << "Enter index to check: ";
	std::cin >> idx;

	int last_val{ 0 };
	int last_idx{ 0 };
	occurences[0]++;
	for(int i{1}; i <= idx+1; ++i)
	{
		std::cout << last_val << " ";
		int new_val = last_val - last_idx - 1;
		if(new_val > 0 and occurences[new_val] == 0)
		{
			occurences[new_val]++;

		}
		else
		{
			new_val = last_val + last_idx + 1;
			occurences[new_val]++;
		}

		last_val = new_val;
		last_idx = i;
	}

	return 0;
}