#include "main.h"

/**
 * main - Prints all arguments it receives
 * @argc: Holds int
 * @argv: Holds string and uses argc as elements
 *
 * Return: 0
 */

int main (int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);

	return (0);
}
