#include <stdio.h>
/**
 * main - Prints the sixe of various types
 * Return: Returns 0
 */
int main(void)
{
	char c; int i; long int l; long long int ll; float f;

	printf("Size of a char: %lu \n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu \n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu \n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu \n", (unsigned long)sizeof(ll));
	printf("Size of a float: %lu \n", (unsigned long)sizeof(f));

	return (0);
}
