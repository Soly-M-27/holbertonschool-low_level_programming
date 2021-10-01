#include <stdio.h>
/**
 * main - Prints hexadecimal value susing putchar
 * Return: Returns 0
 */
int main(void)
{

	int x;

	for (x = 0; x < 16; x++)
	{
		putchar((x % 16) + '0');

		if (x == 'f')
		{
			putchar('\n');
		}
	}

	return (0);
}
