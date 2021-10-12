#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line
 * @s: Holds strings adress
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len = strlen(s), len2 = strlen(s);
	char *empty;

	empty = "";

	if (*s == *empty)
		break;

	for (; len >= 0; len--)
	{
		if (len == len2)
			len--;
		_putchar(s[len]);
	}
	_putchar('\n');
}
