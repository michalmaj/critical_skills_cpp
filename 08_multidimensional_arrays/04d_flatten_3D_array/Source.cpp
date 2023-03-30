#include <iostream>


int main()
{
	constexpr int dims{ 3 };
	constexpr int rows{ 4 };
	constexpr int cols{ 5 };
	int flatten[dims * rows * cols]{ 0 };

	int i{ 0 };
	int idx{ 0 };
	for(int d{0}; d < dims; ++d)
	{
		for(int r{0}; r < rows; ++r)
		{
			for(int c{0}; c < cols; ++c)
			{
				std::cout << d << " " << r << " " << c << " = " << idx << std::endl;
				idx++;
				flatten[i++] = idx;
			}
		}
	}

	int d, r, c, type;
	std::cout << "Enter type: ";
	std::cin >> type;

	if(type == 1)
	{
		std::cout << "Enter index of: dimension, row, column: ";
		std::cin >> d >> r >> c;
		std::cout << d * rows * cols + r * cols + c * 1 << std::endl;
	}
	else
	{
		int idx;
		std::cout << "Enter index in 1D to convert to 3D: ";
		std::cin >> idx;
		d = idx / (rows * cols); // Dimensions
		r = (idx % (rows * cols)) / cols; // Rows
		c = (idx % (rows * cols)) % cols; // Columns
		std::cout << d << " " << r << " " << c << std::endl;
	}




	return 0;
}