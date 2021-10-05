#include "main.h"

/**
 * jack_bauer - prints every hour and minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int i;
	int k;

	for (i = 0; i < 24; i++)
	{
		for (k = 0; k <= 59; k++)
		{
			if (i < 10 && k < 10)
			{
				printf("0%d:0%d\n", i, k);
			}
			else if (k < 10)
			{
				printf("%d:0%d\n", i, k);
			}
			else if (i < 10 && k == 10)
			{
				printf("0%d:%d\n", i, k);
			}
			else if (i > 10 && k == 10)
			{
				printf("%d:%d\n", i, k);
			}
			else if (i < 10 && k > 10)
			{
				printf("0%d:%d\n", i, k);
			}
			else if (i >= 10 && k < 10)
			{
				printf("%d:0%d\n", i, k);
			}
			else if (i >= 10 && k >= 10)
			{
				printf("%d:%d\n", i, k);
			}
		}
	}
}
