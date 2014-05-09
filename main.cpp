#include <iostream>
#include "magic_square.h"

const int N = 3;

int main()
{
	bool result = false;
	int mtrx[N][N] =
	{
		{ 4, 9, 2 },
		{ 3, 5, 7 },
		{ 8, 1, 6 }
	};
	result = magic_square((int*)mtrx, N);
	if (result)
	{
		std::cout << "True.\n";
	}
	else
	{
		std::cout << "False.\n";
	}
	std::cin.get();
	std::cin.get();
	return 0;
}