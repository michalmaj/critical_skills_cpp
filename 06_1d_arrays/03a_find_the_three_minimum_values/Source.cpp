#include <iostream>

int main()
{
	int arr[]{ 4, 1, 3, 10, 8 };

	int f = INT_MAX;
	int s = INT_MAX;
	int t = INT_MAX;

	for(int i{0}; i < std::size(arr); ++i)
	{
		if (arr[i] < f)
		{
			t = s;
			s = f;
			f = arr[i];
		}
		else if (arr[i] < s)
		{
			t = s;
			s = arr[i];
		}
		else if (arr[i] < t)
			t = arr[i];
	}

	std::cout << f << " " << s << " " << t << std::endl;


	return 0;
}