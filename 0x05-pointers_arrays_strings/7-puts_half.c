#include "main.h"
#include <string.h>

/**
 * puts_half - Prints half of a string
 * @str: Holds string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = strlen(str), n;

	n = (len - 1) / 2;

	for (; n < len; n++)
	{
		if (n != 4)
			_putchar(str[n]);
	}
	_putchar('\n');
}
