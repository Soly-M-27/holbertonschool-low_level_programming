#include "main.h"
#include <string.h>

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character
 * @str: Holds string
 *
 * Return: void
 */

void puts2(char *str)
{
	int len = strlen(str), x;

	for (x = 0; x < len; x++)
	{
		if (x % 2 == 0)
		{
			printf("%c", *(str + x));
		}
	}
	printf("\n");
}
