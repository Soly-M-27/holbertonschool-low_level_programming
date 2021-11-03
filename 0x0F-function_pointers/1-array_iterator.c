#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function given as
 * a parameter on each element of an array
 * @array: Holds array of integers
 * @size: Holds the size of the array
 * @action: function pointer to iterate array
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && action)
	{
		for (x = 0; x < size; x++)
		{
			action(array[x]);
		}
	}
}
