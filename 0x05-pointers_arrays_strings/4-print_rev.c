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
	int len = strlen(s), x, y;
	char r[1000];

	y = len - 1;

	for (x = 0; x < len; x++)
	{
		r[x] = s[y];
		y--;
	}
	puts(r);
}
