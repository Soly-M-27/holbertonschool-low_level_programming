#include "main.h"

/**
 * main - Prints 1 to 100 but prints Fizz if # is a multiple of 3, Buzz if from 4, and FizzBuzz it belongs to both
 *
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("%s", "FizzBuzz");
			putchar(' ');
		}
		else if (x % 3 == 0)
		{
			printf("%s", "Fizz");
			putchar(' ');
		}
		else if (x % 5 == 0)
		{
			printf("%s", "Buzz");
			putchar(' ');
		}
		else
		{
			printf("%d", x);
			putchar(' ');
		}
	}
	printf("\n");

	return (0);
}
