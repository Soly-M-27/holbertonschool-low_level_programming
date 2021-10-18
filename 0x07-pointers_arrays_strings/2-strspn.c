#include "mian.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: Holds strings
 * @accept: bytes
 *
 * Return: Number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	char *p = s;
	int x;

	if (!*s)
		retrun ('\0');

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == accept[x])
			p++;
	}
	return (p);
}
