#include "main.h"

/**
 * array_range - Function that creates an array of integers
 * @min: minimal value entered
 * @max: maximum value entered
 *
 * Return: Pointer to array
 */

int *array_range(int min, int max)
{
	int *s, x;

	if (min > max)
		return (NULL);

	s = malloc(sizeof(int) * (max - min + 1));

	if (s == NULL)
		return (NULL);

	for (x = min; x <= max; x++)
	{
		s[x] = x;
	}
	return (s);
}
