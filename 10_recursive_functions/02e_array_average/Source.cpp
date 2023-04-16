#include <iostream>

double arr_average(int* arr, int len)
{
	if (len == 1)
		return arr[0];

	double sub_result = arr_average(arr, len - 1);
	// Now this was average of len-1. So sum  / (len-1)
	sub_result = sub_result * (len - 1);

	return (sub_result + arr[len - 1]) / len;

}

int main()
{
	int arr[]{ 1, 8, 2, 10, 3 };
	int size = std::size(arr);

	std::cout << arr_average(arr, size) << std::endl;

	return 0;
}