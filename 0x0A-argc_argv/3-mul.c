#include "main.h"

/**
 * main - Multiplies two numbers
 * @argc: Holds int
 * @argv: Holds string
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mul = 1;

	if (argc < 2 || argc == 0)
	{
		printf("Error\n");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", mul);
	return (0);
}
