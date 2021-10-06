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
		for (j = 0; j <= 9; j++)
		{
			catch = i * j;
			fd = catch / 10;
			ld = catch % 10;

			if (fd == 0 && j < 9)
			{
				_putchar(catch + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (fd > 0 && j < 9)
			{
				_putchar(fd + '0');
				_putchar(ld + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				if (fd == 0)
				{
					_putchar(catch + '0');
				}
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
