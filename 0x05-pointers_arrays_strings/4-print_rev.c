#include "main.h"
#include <string.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line
 * @s: Holds strings adress
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len, x;

	len = strlen(s);

	for (x = len; x >= 0; x--)
	{
		if (x > 0)
		{
			printf("%c", *(s + x));
		}
		else if (x == 0)
		{
			printf("%c\n", *(s + x));
		}
	}
}
