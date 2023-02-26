#include <iostream>

int main()
{
	int x, n1, n2, n3, n4, n5;
	int cnt{ 0 };
	std::cout << "Read number X, then other 5 numbers: ";
	std::cin >> x >> n1 >> n2 >> n3 >> n4 >> n5;

	cnt += (n1 <= x);
	cnt += (n2 <= x);
	cnt += (n3 <= x);
	cnt += (n4 <= x);
	cnt += (n5 <= x);

	std::cout << cnt << " " << 5 - cnt;


	return 0;
}