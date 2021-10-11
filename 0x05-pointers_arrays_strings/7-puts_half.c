#include "main.h"
#include <string.h>

/**
 * puts_half - Prints half of a string
 * @str: Holds string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = strlen(str), x, n;

	n = (len - 1) / 2;

	for (x = n; x < len; x++)
	{
		if (x != 4)
			printf("%c", *(str + x));
	}
	printf("\n");
}
