#include "main.h"

/**
 * more_numbers - Prints 10 times numbers 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int x = 0;
	int fd;
	int ld;

	while (x < 10)
	{
		for (i = 0; i < 15; i++)
		{
			fd = i / 10;
			ld = i % 10;

			if (fd != 0)
			{
				_putchar(fd + '0');
			}

			if (fd == 0 || fd > 0)
			{
				_putchar(ld + '0');
			}
		}
		x++;
		_putchar('\n');
	}
}
