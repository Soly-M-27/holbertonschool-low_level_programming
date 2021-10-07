#include "main.h"

/**
 * print_square - Prints a square followed by a new line
 * @size: Hold number of times the square will print
 *
 * Return: void
 */

void print_square(int size)
{
	int x;
	int y;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
