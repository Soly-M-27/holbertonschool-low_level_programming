#include "main.h"

/**
 * _pow_recursion - Function that returns the value of x
 * raised to the power of y
 * @x: First int
 * @y: Second int which will be used to raise the powers
 *
 * Return: Integer equaling x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (x == 0)
		return (0);

	if (y == 0)
		return (1);

	if (y < 0)
		return (-1);

	return(x * _pow_recursion(x, y -1));
}
