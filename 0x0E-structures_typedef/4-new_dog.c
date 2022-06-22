#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a struct dog with given parameters
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name2 = name;
	char *owner2 = owner;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);

	d->name = name2;
	d->age = age;
	d->owner = owner2;
	return (d);
}
