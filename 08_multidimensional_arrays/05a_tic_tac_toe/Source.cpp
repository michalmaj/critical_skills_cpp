#include <iostream>

int main()
{
	constexpr int N{ 3 };
	char grid[N][N];

	for (int i{ 0 }; i < N; ++i)
	{
		for (int j{ 0 }; j < N; ++j)
			grid[i][j] = '.';
	}

	/*
	 * We can write a length code to verify N rows, N columns and 2 diagonals
	 *
	 * Notice: the behavior of all them is SAME
	 *	E.g. We have some starting point (e.g. 0 0) and we need to verify its row
	 *
	 * We can use a direction-array style to write an elegant code
	 *
	 * We will create a few arrays with the 2N+2 needed verifications
	 * For every verification we need 4 values:
	 *	The starting point (r, c): we need the starting of each row (N), col (N), 2 diagonals
	 *	The direction to move in it for N steps
	 *
	 *
	 * For example, for starting (0, 0)
	 *	To verify its row, we need direction (1, 0)
	 *	To verify its col, we need direction (0, 1)
	 *	To verify its left diagonal, we need direction (1, 1)
	 *	To verify its right diagonal we start from the last cell in first row (0, n-1) and moves (1, -1)
	 *
	 * Once done we iterate over all such start/direction
	 *	Loop n times to verify they all same play symbol
	 */

	int rs[N], cs[N], dr[N], dc[N];
	int verify{ 0 };

	// Add row n positions to verify
	for (int r{ 0 }; r < N; ++r)
		rs[verify] = r, cs[verify] = 0, dr[verify] = 0, dc[verify++] = 1;

	// Add col n positions to verify
	for (int c{ 0 }; c < N; ++c)
		rs[verify] = 0, cs[verify] = c, dr[verify] = 1, dc[verify++] = 0;

	// Add diagonal left
	rs[verify] = 0, cs[verify] = 0, dr[verify] = 1, dc[verify++] = 1;

	// Add diagonal right
	rs[verify] = 0, cs[verify] = N - 1, dr[verify] = 1, dc[verify++] = -1;

	int turn = 0; // 0 for x, 1 for o.
	int steps{ 0 };
	while (true)
	{
		if(steps == N*N)
		{
			std::cout << "Tie\n";
			break;
		}
		for(int i{0}; i < N; ++i)
		{
			for (int j{ 0 }; j < N; ++j)
				std::cout << grid[i][j] << " ";
			std::cout << std::endl;
		}

		char symbol{ 'x' };
		if (turn % 2 == 0)
			symbol = 'o';

		std::cout << "Player " << symbol << " turn. Enter empty location(r, c) : ";
		int r, c;
		std::cin >> r >> c;
		if (r < 0 or r >= N or c < 0 or c >= N or grid[r][c] != '.')
		{
			std::cout << "Invalid output. Try again\n";
			continue;
		}
		grid[r][c] = symbol;

		// Check win status
		for(int check{0}; check < verify; ++check)
		{
			int r = rs[check], c = cs[check], rd = dr[check], cd = dc[check];
			int cnt{ 0 };
			char first = grid[r][c];

			if(first == '.')
				continue;

			for (int step{ 0 }; step < N; ++step, r += rd, c += cd)
				cnt += grid[r][c] == first;

			if(cnt == N)
			{
				std::cout << "Player " << symbol << " won\n";
				break;
			}
		}


		turn++;
		steps++;
	}


	return 0;
}