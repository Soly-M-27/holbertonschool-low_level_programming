#include "main.h"

/**
 * find_sqrt - Function that compares multiplication with total
 * to check for square root
 * @c: Holds first int + 1
 * @r: Holds second int with total to compare
 *
 * Return: int with result
 */

int find_sqrt(int c, int r)
{
	if (c * c == r)
		return (c);
	else if (c * c > r)
		return (-1);
	return (find_sqrt(c + 1, r));
}

/**
 * _sqrt_recursion - Function that returns the natural square root
 * of a number
 * @n: Holds intger to convert to its natural square root
 *
 * Return: int which is the natural square root of the entering n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	if (n == 1)
		return (1);

	return (find_sqrt(1, n));
}
