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
	unsigned int x;

	s = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	if (s == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		s[x] = c;
	}
	return (s);
}
