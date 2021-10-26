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
	int **array, x, y;

	if (width <= 0 && height <= 0)
		return (NULL);

	array = malloc(height * sizeof(int *));

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		array[x] = malloc(width * sizeof(int));

		if (array[x] == NULL)
		{
			while (x >= 0)
			{
				free(array[x]);
				x--;
			}
			free(array);
			return (NULL);
		}
		for (y = 0; y < height; y++)
			array[x][y] = 0;
	}
	return (array);
}
