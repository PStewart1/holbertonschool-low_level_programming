#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	char *name2;
	char *owner2;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		free (d);
		return (NULL);
	}
	name2 = malloc(sizeof(name) + 1);
	if (name2 == NULL)
	{
		free (d);
		free (name2);
		return (NULL);
	}
	owner2 = malloc(sizeof(owner) + 1);
	if (owner2 == NULL)
	{
		free (d);
		free (name2);
		free (owner2);
		return (NULL);
	}
	strcpy(name2, name);
	strcpy(owner2, owner);
	d->name = name2;
	d->age = age;
	d->owner = owner2;
	return (d);
}
