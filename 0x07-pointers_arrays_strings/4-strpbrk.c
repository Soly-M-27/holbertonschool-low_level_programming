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
	int a, b, pos, flag = 0;

	for (a = 0; s[a] != '\0'; a++)
		;
	pos = a;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				if (b <= pos)
				{
					pos = b;
					flag = 1;
				}
			}
		}
	}
	if (flag == 1)
		return (&s[pos]);
	else
		return ('\0');
}
