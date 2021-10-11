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
	int len = strlen(s), x;

	for (x = 0; x < len / 2; x++)
	{
		char ch = s[x];

		s[x] = s[len - x - 1];
		s[len - x - 1] = ch;
		puts(s);
	}
}
