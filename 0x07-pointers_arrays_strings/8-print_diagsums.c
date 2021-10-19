#include "main.h"

/**
 * print_diagsums - Function that prints the sum of the two
 * diagonal of a square matric of integers
 * @a: Holds array
 * @size: Holds size of array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int x, sum1 = 0, sum2 = 0, matrix = size * size;

	for (x = 0; x < matrix; x += (size + 1))
	{
		sum1 += a[x];
	}

	for (x = (size - 1); x < matrix; x += (size - 1))
	{
		sum2 += a[x];
		matrix--;
	}
	printf("%d, %d\n", sum1, sum2);
}
