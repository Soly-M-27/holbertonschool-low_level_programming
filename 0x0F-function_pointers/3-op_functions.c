#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Returns the sum of a and b
 * @a: Fist num
 * @b: Second num
 *
 * Return: The sum of int a with int b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of a and b
 * @a: First num
 * @b: Second num
 *
 * Return: The difference of int a with int b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of a and b
 * @a: First num
 * @b: Second num
 *
 * Return: The product of int a with int b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the result of the division
 * of a and b
 * @a: First num
 * @b: Second num
 *
 * Return: The division of int a by int b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division
 * of int a by int b
 * @a: First Num
 * @b: Second num
 *
 * Return: The remainder of the division of int a by
 * int b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		exit(100);
	}
	return (a % b);
}
