#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Function that frees dogs
 * @d: Pointer to struct
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d);
}
