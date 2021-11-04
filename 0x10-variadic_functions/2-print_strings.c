#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Function that prints strings,
 * followed by a new line
 * @separator: string holds the coma
 * @n: Holds number of elements
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *ch;
	va_list strings;

	va_start(strings, n);
	for (x = 0; x < n; x++)
	{
		ch = (char *)va_arg(strings, char *);
		if (ch != NULL)
			printf("%s", ch);
		if (ch == NULL)
			printf("nil");
		if ((x + 1) != n && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
