#include "main.h"

/**
 * _strncpy - Appends src string to dest string
 * @dest: Holds first string
 * @src: Holds second string
 * @n: Holds number of bytes in src
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
