#include "main.h"

/**
 * _sqrt_recursion - Function that returns the natural square root
 * of a number
 * @n: Holds integer to convert to its natural square rool
 *
 * Return: int which is the natural square root of the entering n
 */

int find_sqrt(int c, int r)
{
	if (c * c == r)
		return (c);
	else if (c * c > r)
		return (-1);
	return (find_sqrt(c + 1, r));
}


int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	if (n == 1)
		return (1);

	return (find_sqrt(1, n));
}
