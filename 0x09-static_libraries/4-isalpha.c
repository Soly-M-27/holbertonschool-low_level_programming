#include "main.h"

/**
 * _isalpha - Prints 1 if c is a letter, lowercase or uppercase
 * @c: Holds character in question
 *
 * Return: 1 if c is letter, 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
