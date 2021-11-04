#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Function that prints numbers,
 * followed by a new line
 * @separator: passes coma as string
 * @n: Holds the amount of elements being passed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x = 0, z;

	va_start(args, n);
	for (z = 0; z < n; z++)
	{
		x = va_arg(args, unsigned int);
		printf("%d", x);
		if ((z + 1) != n && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
