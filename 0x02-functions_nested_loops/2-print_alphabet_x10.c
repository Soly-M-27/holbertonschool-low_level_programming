#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times
 *
 * Return: x
 */

void print_alphabet_x10(void)
{
	int x;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
