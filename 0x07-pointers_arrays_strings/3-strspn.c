#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: Holds first string
 * @accept: Holds string with letters to be counted from first
 * string
 *
 * Return: Number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 1;
	int a, b;

	for (a = 0; accept[a] != '\0'; a++)
	{
		for (b = 0; s[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
				x++;
		}
	}
	return (x);
}
