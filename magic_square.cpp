#include "magic_square.h"

#include <iostream>

bool magic_square(int* matrix, int size)
{
	int* work = matrix;
	int sum = 0;
	int sumPrev = 0;
	int fDiag = 0;
	int bDiag = 0;
	for (int i = 0; i < size; i++)
	{
		sum = 0;
		for (int j = 0; j < size; j++)
		{
			sum = sum + matrix[j];
		}
		if (i != 0 && sum != sumPrev)
		{
			return 0;
		}
		sumPrev = sum;
		fDiag = fDiag + work[0];
		bDiag = bDiag + work[size-1];
		work = work + size;
	}
	if (bDiag != sum && fDiag != sum)
	{
		return 0;
	}
	return 1;
}