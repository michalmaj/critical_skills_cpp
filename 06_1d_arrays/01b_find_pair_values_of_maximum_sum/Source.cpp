#include <iostream>

int main()
{
	int arr[]{ 2, 10, 3, 50, 15 };

	int f = arr[0];
	int s = arr[1];

	if (f < s)
	{
		f = arr[1];
		s = arr[0];
	}

	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i{ 2 }; i < size; ++i)
	{
		if (arr[i] > f)
		{
			s = f;
			f = arr[i];
		}
		if (arr[i] > s and arr[i] < f)
			s = arr[i];
	}

	std::cout << f << " + " << s << " = " << f + s << std::endl;


	return 0;
}