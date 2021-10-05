#include "main.h"
#include <ctype.h>

/**
 * _islower - Prints if letter is lower or upper case
 * @c: holds character in question
 *
 * Return: Returns 1 is letter is lower, 0 is letter is upper
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
