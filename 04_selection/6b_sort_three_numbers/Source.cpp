#include <iostream>

int main()
{
	int a, b, c;
	int f, s, t;
	std::cout << "Enter three numbers: ";
	std::cin >> a;
	f = a;
	std::cin >> b;
	s = b;
	if(b < f)
	{
		f = b;
		s = a;
	}
	std::cin >> c;
	t = c;
	if(c < f)
	{
		t = s;
		s = f;
		f = c;
	}
	else if(c < s)
	{
		t = s;
		s = c;
	}

	std::cout << f << " " << s << " " << t << std::endl;



	return 0;
}