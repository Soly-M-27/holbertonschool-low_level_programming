#include "main.h"

/**
 * _puts_recursion - Function that prints a string,
 * followed by a new line.
 * @s: Holds string.
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
