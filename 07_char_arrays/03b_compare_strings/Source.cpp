#include <iostream>
#include <string>

int main()
{
	std::string a{ "abc" };
	std::string b{ "d" };

	int size = a.size();
	if (size < b.size())
		size = b.size();

	int smaller = -1;

	for(int i{0}; smaller == -1 && i < size; ++i)
	{
		if(a[i] != b[i])
		{
			if (a[i] < b[i])
				smaller = 0;
			else
				smaller = 1;
		}
	}

	if(smaller == -1) // Then the first letters are common. Small in length is smaller
	{
		if (a.size() < b.size())
			smaller = 0;
		else
			smaller = 1;
	}

	if (smaller == 0)
		std::cout << "YES\n";
	else
		std::cout << "NO\n";


	return 0;
}