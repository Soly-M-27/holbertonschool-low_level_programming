#include "main.h"

/**
 * _strstr - Function that locates substring
 * @haystack: Holds first string
 * @needle: Holds second string that will be used to
 * find first occurrence of the substring needle in the
 * string haystack. The terminating null bytes (\0) are not
 * compared
 *
 * Return: Pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int x;

	if (!*haystack)
		return ('\0');

	while (*haystack)
	{
		for (x = 0; needle[x]; x++)
		{
			if (haystack[x] != needle[x])
				break;
		}

		if (!needle[x])
			return ((char *)haystack);
		haystack++;
	}
	return ((char *)0);
}
