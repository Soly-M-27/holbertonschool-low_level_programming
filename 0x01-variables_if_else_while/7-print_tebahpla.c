#include <stdio.h>
/**
 * main - Prints the alphabet in reverse
 * Return: Returns 0
 */
int main(void)
{

	int x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);

		if (x == 'a')
		{
			putchar('\n');
		}
	}

	return (0);
}
