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
	int catch2;

	for (i ='0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			catch = i * j;
			catch2 = catch % 9;i

			
			

			if (catch != catch % 9)
			{
				_putchar(catch + '0');
			}
			else
			{
				printf("%d\n", catch);
			}
		}
	}
}
