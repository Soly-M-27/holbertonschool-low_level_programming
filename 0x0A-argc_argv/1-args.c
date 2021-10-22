#include "main.h"

/**
 * main - main which returns the total number
 * of arguments.
 * @argc: Holds in for array ellents of argv
 * @argv: Holds array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char **p;

	for (p = argv; *p != NULL; p++)
		;
	printf("%d\n", argc - 1);

	return (0);
}
