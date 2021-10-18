#include "main.h"

/**
 * _strpbrk - Function that searches a string for any of a set
 * of bytes
 * @s: Holds array
 * @accept: Holds second array to be compared with first
 *
 * Return: Pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y, pos, flag = 0;

	for (x = 0; s[x] != '\0'; x++)
		;
	pos = x;
		
	for (x = 0; accept[x] != '\0'; x++)
	{
		for (y = 0; s[x] != '\0'; y++)
		{
			if (accept[x] == s[y])
			{
				if (y <= pos)
				{
					pos = y;
					flag = 1;
				}
			}
		}
	}
	if (flag == 1)
		return &s[pos];
	else
		return ('\0');
}
