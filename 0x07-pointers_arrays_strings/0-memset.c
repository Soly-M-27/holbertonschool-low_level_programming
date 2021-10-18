#include "main.h"

/**
 * _memset - Function that fills memory with a constant
 * @s: Holds array
 * @b: Holds constant byte
 * @n: Holds bytes of the memory area pointed to by s
 *
 * Return: A pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = (unsigned char) b;
		p++;
		n--;
	}
	return (s);
}
