#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Gives name, age and owner of pet
 * @name: Name of pet
 * @age: Age of pet
 * @owner: Owner of pet
 *
 * Description: Gives name, age and owner of pet info
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
