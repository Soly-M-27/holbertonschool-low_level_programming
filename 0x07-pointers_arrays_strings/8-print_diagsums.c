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
	long int x, y, sum1 = 0, sum2 = 0;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			if (x == y)
				sum1 += a[x + y];

			if (x + y == size - 1)
				sum2 += a[x + y];
		}
	}
	printf("%ld, %ld", sum1, sum2);
	printf("\n");
}
