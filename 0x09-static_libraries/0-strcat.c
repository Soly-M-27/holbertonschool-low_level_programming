#include "main.h"

/**
 * _strcat -function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 *@dest: Holds first string
 *@src: Holds second string
 *
 * Return: Pointer to string dest
 */

char *_strcat(char *dest, char *src)
{
	int x, z;

	for (x = 0; dest[x] != '\0'; x++)
		;

	for (z = 0; src[z] != '\0'; z++)
		dest[x + z] = src[z];

	dest[x + z] = '\0';

	return (dest);
}
