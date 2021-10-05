#include "_putchar.c"
#include <stdio.h>

void print_alphabet(void);

/*int main(void)
{
	print_alphabet();
	return (0);
}*/

/**
 * print_alphabet - Prints the alphabet
 *
 * Return: x
 */

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}

	_putchar('\n');
}
