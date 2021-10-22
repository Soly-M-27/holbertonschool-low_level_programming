#include <stdio.h>

/**
 * main - Main
 * @argc: Holds an int
 * @argv: Pointer to array where argc is it's total arguments
 *
 * Return: 0
 */

int main (int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++); 
	return (0);
}
