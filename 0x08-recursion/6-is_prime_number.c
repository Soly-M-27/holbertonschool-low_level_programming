#include "main.h"

/**
 * _prime - Function to check module of number entered from is_prime_number
 * @x: Holds number from n
 * @y: Holds 2++
 *
 * Return: 0 or 1
 */

int _prime(int x, int y)
{
	if (x <= 2)
		return (x == 2);
	if (x % y == 0)
		return (0);
	if (y * y > x)
		return (1);
	return (_prime(x, y + 1));
}

/**
 * is_prime_number - Function that returns 1 if the input integer
 * is Prime number, otherwise return 0
 * @n: Hold the number in question
 *
 * Return: int
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (_prime(n, 2));
}
