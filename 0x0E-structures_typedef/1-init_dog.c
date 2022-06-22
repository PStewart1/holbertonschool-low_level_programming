#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a struct dog with given parameters
 * @d: struct dog to be initialized
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
