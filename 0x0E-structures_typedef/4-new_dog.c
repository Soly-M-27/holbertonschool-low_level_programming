#include "dog.h"

char *_strcpy(char *dest, char *src);
int _strlen(char *s);

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: a new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *newdog;
	char *copy_of_name;
	char *copy_of_owner;

	if (name == NULL)
		return (NULL);
	if (owner == NULL)
		return (NULL);

	copy_of_name = malloc(_strlen(name) + 1);
	if (copy_of_name == NULL)
	{
		free(copy_of_name);
		return (NULL);
	}

	copy_of_owner = malloc(_strlen(owner) + 1);
	if (copy_of_owner == NULL)
	{
		free(copy_of_name);
		free(copy_of_owner);
		return (NULL);
	}

	newdog = malloc(sizeof(struct dog));
	if (newdog == NULL)
	{
		free(copy_of_name);
		free(copy_of_owner);
		free(newdog);
		return (NULL);
	}
	newdog->name = _strcpy(copy_of_name, name);
	newdog->age = age;
	newdog->owner = _strcpy(copy_of_owner, owner);

	return (newdog);
}

/**
 * _strcpy - copies a string
 * @dest: Holds pointer to first string
 * @src: Holds pointer to second string
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

/**
 * _strlen - Gives the lenght of a string
 * @s: pointer to a char
 *
 * Return: total characters in the string
 */

int _strlen(char *s)
{
	int x;

	for (x = 0; *s != '\0'; x++)
		x++;
	return (x);
}
