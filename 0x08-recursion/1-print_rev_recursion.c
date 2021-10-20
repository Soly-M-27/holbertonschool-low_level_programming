#include "main.h"

/**
 * _print_rev_recursion - Function that prints a string in reverse
 * @s: Holds string to reverse
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
