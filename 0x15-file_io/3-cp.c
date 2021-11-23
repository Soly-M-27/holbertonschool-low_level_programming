#include "main.h"

int cp(char *f_from, char *f_to);

/**
 * main - Program that copies the content of a file
 * to another file
 * @ac: Number of arguments
 * @av: strings
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int x;

	if (ac != 3)
	{
		exit(97);
		dprintf(2, "Usage: cp file_from file_to\n");
	}

	x = cp(av[1], av[2]);

	if (x == -1)
	{
		exit(98);
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
	}
	else if (x == -2)
	{
		exit(99);
		dprintf(2, "Error: Can't write to %s\n", av[2]);
	}

	return (0);
}

/**
 * cp - Function that copies contents of file
 * into another file
 * @f_from: First File
 * @f_to: Second File
 *
 * Return: 1 if successful, -1 or -2 depending
 * on the error code
 */

int cp(char *f_from, char *f_to)
{
	int from_NO, to_NO, x, z, c1, c2;
	char tmp[BUFSIZ];

	if (f_from == NULL || f_to == NULL)
		return (0);

	from_NO = open(f_from, O_RDWR);
	x = read(from_NO, tmp, BUFSIZ);

	if (from_NO == -1 || x < 0)
		return (-1);

	to_NO = open(f_to, O_CREAT | O_TRUNC | O_RDWR, 00664);
	z = write(to_NO, tmp, x);

	if (to_NO == -1 || x != z)
		return (-2);

	c1 = close(from_NO);
	if (c1 < 0)
	{
		exit(100);
		dprintf(2, "Error: Can't close fd %d\n", from_NO);
	}

	c2 = close(to_NO);
	if (c2 < 0)
	{
		exit(100);
		dprintf(2, "Error: Can't close fd %d\n", to_NO);
	}

	return (1);
}
