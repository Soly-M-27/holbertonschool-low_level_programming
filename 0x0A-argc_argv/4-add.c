#include "main.h"

/**
 * main - Program that adds positive numbers
 * @argc: Holds integer value
 * @argv: Holds string
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, digit, sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (digit = 0; argv[x][digit]; digit++)
		{
			if (argv[x][digit] < '0' || argv[x][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[x]);
	}

	printf("%d\n", sum);
	return (0);
}
