#include <stdio.h>
/**
 * main - Prints hexadecimal value susing putchar
 * Return: Returns 0
 */
int main(void)
{

	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}

	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);

		if (x == 'f')
		{
			putchar('\n');
		}
	}

	return (0);
}
