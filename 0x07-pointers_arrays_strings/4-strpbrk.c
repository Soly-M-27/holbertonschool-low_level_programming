#include "main.h"

/**
 * _strpbrk - Function that searches a string for any of a set
 * of bytes
 * @s: Holds array
 * @accept: Holds second array to be compared with first
 *
 * Return: Pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
		return ('\0');

	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return ('\0');
}
