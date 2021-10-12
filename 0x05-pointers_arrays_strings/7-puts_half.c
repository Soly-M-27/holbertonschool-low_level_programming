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
		_putchar(str[n + 1]);
	}
	_putchar('\n');
}
