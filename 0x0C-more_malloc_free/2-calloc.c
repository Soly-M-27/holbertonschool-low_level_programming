#include "main.h"

/**
 * _calloc - Function that allocates memory for an
 * array, using malloc
 * @nmemb: memory for an array of nmemb
 * @size: elements of size bytes
 *
 * Return: Pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int x = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);

	if (s == NULL)
		return (NULL);

	while (x < nmemb * size)
		s[x++] = 0;

	return (s);
}
