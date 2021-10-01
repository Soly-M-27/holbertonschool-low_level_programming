#include <stdio.h>
/**
 * main - Prints numbers in ascending order with commas
 * Return: Returns 0
 */
int main(void)
{

	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');

		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}

		if (x == 9)
		{
			putchar('\n');
		}
	}
	return (0);
}
