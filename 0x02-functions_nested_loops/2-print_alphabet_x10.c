#include <stdio.h>
#include "_putchar.c"

/**
 * print_alphabet_x10 - print alphabet 10 times in a row
 * Return: void
 */

void print_alphabet_x10(void);

void print_alphabet_x10(void)
{
	int x;

	for (int a = 0; a < 10; a++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
	}
	_putchar('\n');
}
