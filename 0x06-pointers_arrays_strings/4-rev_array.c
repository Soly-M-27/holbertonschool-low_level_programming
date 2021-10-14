#include "main.h"

/**
 * reverse_array - Function that reverses the content of an array of ints
 * @a: Holds array
 * @n: Number of elements in array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x, temp;

	for (x = 0; x < n / 2; x++)
	{
		temp = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x] = temp;
	}
}
