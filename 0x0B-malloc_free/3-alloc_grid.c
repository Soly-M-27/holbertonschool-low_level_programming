#include "main.h"

/**
 * alloc_grid - Function that returns a pointer to a 2
 * dimensional array of integers
 * @width: width
 * @height: height
 *
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int **array, x;

	array = malloc(height * sizeof(int *));

	for (x = 0; x < height; x++)
		array[x] = malloc(width * sizeof(int));

	return (array);
}
