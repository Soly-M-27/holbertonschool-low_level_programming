#include "main.h"
#include <string.h>

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to
 * the buffer pointed to by dest.
 * @dest: One Array
 * @src: New Array which holds dest
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
