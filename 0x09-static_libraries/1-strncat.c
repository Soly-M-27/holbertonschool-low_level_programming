#include "main.h"

/**
 * _strncat - Appends src string to dest string
 * @dest: Holds first string
 * @src: Holds second string
 * @n: Holds number of bytes in src
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, z;

	for (x = 0; dest[x] != '\0'; x++)
		;

	for (z = 0; src[z] != src[n]; z++)
		dest[x + z] = src[z];

	dest[x + z] = '\0';

	return (dest);
}
