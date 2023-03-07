#include <iostream>

int main()
{
	int arr[]{ 5, 10, 20, 3, 30, 7 };

	int f = arr[0];
	int s = arr[1];

	if(f < s)
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

	std::cout << f << " " << s << std::endl;


	return 0;
}