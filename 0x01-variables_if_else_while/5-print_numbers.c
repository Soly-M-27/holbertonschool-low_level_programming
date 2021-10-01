#include <stdio.h>
/**
 * main - Prints 0123456789
 * Return: Returns 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);

		if (x == 9)
		{
			putchar('\n');
		}
	}

	return (0);
}
