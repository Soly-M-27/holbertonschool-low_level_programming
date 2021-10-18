#include "main.h"

/**
 * print_chessboard - Function that prints the chessboard
 * @a: Holds array for chessboard
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
			printf("%c", a[x][y]);
		printf("\n");
	}
}
