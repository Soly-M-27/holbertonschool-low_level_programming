#include "main.h"

/**
 * times_table - Prins the tables from 0 to 9
 *
 * Return: void
 */

void times_table(void)
{
	int i;
	int j;
	int catch;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			catch = i * j;

			if (catch == 0 || catch <= 9)
			{
				_putchar(catch + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			else if (catch > 9)
			{
				_putchar((catch/10) + '0');
				_putchar((catch % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		_putchar('\n');
		}
	}
}
