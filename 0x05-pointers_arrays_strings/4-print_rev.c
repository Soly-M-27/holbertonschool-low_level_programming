#include "main.h"
#include <string.h>

/**
 * print_rev - function that prints a string, in reverse, followed by a new line
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
		printf("%c", *(s + x));
	}
	printf("\n");
}
