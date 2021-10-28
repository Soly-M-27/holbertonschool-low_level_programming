#include "main.h"

/**
 * malloc_checked - Function that allocates memoery using malloc
 * @b: unsigned int
 *
 * Return: Pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}

	return (s);
}
