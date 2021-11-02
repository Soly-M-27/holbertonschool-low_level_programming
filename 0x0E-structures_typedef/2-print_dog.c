#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Function that prints a struct dog
 * @d: Pointer to struct
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
	{
		printf("Name: %s", d->name);
		putchar('\n');
	}

	if (d->age == '\0')
		printf("Age: (nil)\n");
	else
	{
		printf("Age: %f", d->age);
		putchar('\n');
	}

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
	{
		printf("Owner: %s", d->owner);
		putchar('\n');
	}
}
