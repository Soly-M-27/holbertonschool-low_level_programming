#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: first int
 * @b: second int
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int n, m;
	int *c, *d;

	c = &n;
	d = &m;

	*c = *a;
	*d = *b;

	*a = *d;
	*b = *c;
}
