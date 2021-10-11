#include "main.h"
#include <string.h>

/**
 * rev_string - Function that reverses a string
 * @s: Holds string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len = strlen(s), x;

	for (x = 0; x < len / 2; x++)
	{
		char ch = s[x];

		s[x] = s[len - x - 1];
		s[len - x - 1] = ch;
	}
}
