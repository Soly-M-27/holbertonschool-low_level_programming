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
	int x;

	for (x = 0; s[x] != '\0'; x++)
		_putchar(s[x]);

	_putchar('\n');
}
