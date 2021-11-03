#ifndef DOG
#define DOG
#include <stdio.h>
#include <stdlib.h>

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

/**
 * struct - Dog description
 * @name: Holds dogs name
 * @age: Holds dogs age
 * @owner: Holds owners name
 */

typedef struct
{
	char *name;
	float age;
	char *owner;
} dog_t;

/*typedef struct dog dog_t;*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG */
