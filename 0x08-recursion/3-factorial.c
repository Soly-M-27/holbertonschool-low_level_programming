#include "main.h"

/**
 * factorial - Function that returns the factorial of a given number
 * @n: Integer for factorial
 *
 * Return: Integer result of factorial number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}
