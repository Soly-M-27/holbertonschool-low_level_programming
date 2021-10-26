#include "main.h"

/**
 * create_array - Function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: Holds unsigned size of array
 * @c: Array
 *
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *s;

	s = malloc(sizeof(*s) * size);

	if (s == NULL)
		return (NULL);

	free(s);

	s[0] = c;

	return (s);
}
