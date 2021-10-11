#include "main.h"
#include <string.h>

/**
 * print_array - prints n elements of an array of integers,
 * with commas and spaces.
 * @a: Holds the array adress
 * @n: Hold amount inside of array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != n - 1)
			printf("%d, ", *(a + x));
		else
			printf("%d", *(a + x));
	}
	printf("\n");
}
