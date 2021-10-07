#include "main.h"

/**
 * _isupper - Prints if the character is upper case or not
 * @c: Holds the character in question
 *
 * Return: 1 if  it's upper case, 0 if lower
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
