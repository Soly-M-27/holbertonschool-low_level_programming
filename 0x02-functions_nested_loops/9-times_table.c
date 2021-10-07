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
	int fd;
	int ld;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			catch = i * j;
			fd = catch / 10;
			ld = catch % 10;

			if (catch < 10)
				_putchar(' ');

			if (fd == 0 && j < 9)
				_putchar(catch + '0');
			else if (fd > 0 && j < 9)
			{
				_putchar(fd + '0');
				_putchar(ld + '0');
			}
			else
			{
				if (fd == 0)
					_putchar(catch + '0');
				else
				{
					_putchar(fd + '0');
					_putchar(ld + '0');
				}
			}
		}
		_putchar('\n');
	}
}
