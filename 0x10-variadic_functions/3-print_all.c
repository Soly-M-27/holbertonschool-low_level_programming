#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Function that prints anything
 * @format: list of types of arguments passed to
 * the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int x = 0;
	char *new_format = "";
	char *s;

	va_list print;

	va_start(print, format);
	while (format[x] != '\0')
	{
		switch (format[x])
		{
			case 'c':
				printf("%s%c", new_format, va_arg(print, int));
				new_format = ", ";
				break;
			case 'i':
				printf("%s%d", new_format, va_arg(print, int));
				new_format = ", ";
				break;
			case 'f':
				printf("%s%f", new_format, va_arg(print, double));
				new_format = ", ";
				break;
			case 's':
				s = va_arg(print, char *);
				if (s == NULL)
					printf("(nil)");
				else
				{
					printf("%s%s", new_format, s);
					new_format = ", ";
				}
				break;
		}
		x++;
	}
	printf("\n");

	va_end(print);
}
