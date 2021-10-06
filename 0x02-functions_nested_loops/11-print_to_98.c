#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98 followed by \n
 * @n: holds number
 *
 * Return: void
 */

void print_to_98(int n)
{
	int x;

	if (n <= 0)
	{
		for (x = n; x < 99; x++)
		{
			if (x != 98)
			{
				printf("%d, ", x);
			}
			else if (x == 98)
			{
				printf("%d\n", x);
			}
		}
	}
	else if (n > 98)
	{
		for (x = n; x > 97; x--)
		{
			if (x != 98)
			{
				printf("%d, ", x);
			}
			else if (x == 98)
			{
				printf("%d\n", x);
			}
		}
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
}
