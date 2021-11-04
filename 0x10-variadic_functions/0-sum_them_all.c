#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns the sum of all its parameters
 * @n: First elements to enter
 *
 * Return: Integer with total
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int temp, total = 0;
	va_list args;

	va_start(args, n);
	for (x = 0; x < n; x++)
	{
		temp = va_arg(args, int);
		total += temp;
	}
	va_end(args);

	return (total);
}
