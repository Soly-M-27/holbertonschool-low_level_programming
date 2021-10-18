#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: Memory area
 * @src: Memory area to be copied into dest
 * @n: Bytes from memory area src
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
