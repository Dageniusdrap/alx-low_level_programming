#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */

void print_diagsums(int *a, int size)
{
	int index, intger1 = 0, integer2 = 0;

	for (index = 0; index < size; index++)
	{
	integer1 += a[index];
	a += size;
	}
	a -= size;
	for (index = 0; index < size; index++)
	{
	integer2 += a[index];
	a -= size;
	}
	print("%d, %d\n", integer1, integer2);
}
