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
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (j = 0; j <= 9; j++)
		{
			catch = i * j;

			if ((catch / 10) > 0)
			{
				_putchar((catch / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((catch % 10) + '0');

			if (catch < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
