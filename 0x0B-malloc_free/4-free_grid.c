#include "main.h"

/**
 * free_grid - Function that fress a 2 dimensional grid
 * previously created by your alloc_grid.
 * @grid: First int
 * @height: Seconf int
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int x;
	int y = height;

	for (x = 0; x < y; x++)
		free(grid[x]);

	free(grid);
}
