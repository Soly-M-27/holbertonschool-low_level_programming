#include "main.h"

/**
 * _isdigit - Tells if character in question is a digit
 * @c: Holds character in question
 *
 * Return: 1 if c is a digit or 0 if c is not a digit
 */

int _isdigit(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 48 && c <= 57))
	{
		return (1);
	}
	else
		return (0);
}
