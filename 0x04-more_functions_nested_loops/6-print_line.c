#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: Holds _ to be printed
 *
 * Return: n
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
}
