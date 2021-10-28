#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _atoi - Changes a string to an int
 * @s: Holds strings to be turned
 *
 * Return: int
 */

int _atoi(char *s)
{
	int val, i = 0;

	if (s[i] == '-')
	{
		val = atoi(s);
		val *= -1;
	}
	else
		val = atoi(s);

	return (val);
}
