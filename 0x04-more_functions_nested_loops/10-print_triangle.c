#include "main.h"

/**
 * print_triangle - Prints a triangle according to the size inputed by main
 * @size: size to be dealt with
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{

			for (j = 0; j < size; j++)
			{
				if (j < size - i -1)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
