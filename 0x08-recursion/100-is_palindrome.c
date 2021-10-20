#include "main.h"

/**
 * Palindrome_check - checks if string is palindrome
 * @str: Holds string
 * @s: To compare the legth of the string
 * @e: The length of the string
 *
 * Return: int 1 if true, 0 if false and recall itself if
 * len + 1 > c
 */

int Palindrome_check(char str[], int c, int len)
{
	if (c == len)
		return (1);

	if (str[c] != str[len])
		return (0);

	if (c < len + 1)
		return (Palindrome_check(str, c + 1, len - 1));

	return (1);
}

/**
 * is_palindrome - Function that returns 1 if a string is a
 * palindrome and 0 if not
 * @s: Holds the string
 *
 * Return: 1 if true, 0 if false
 */

int is_palindrome(char *s)
{
	int x, len;

	for (x = 0; s[x] != '\0'; x++)
		;

	len = x;

	if (len == 0)
		return (0);

	return (Palindrome_check(s, 0, len - 1));
}
