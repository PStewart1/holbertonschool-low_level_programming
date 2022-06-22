#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: struct dog to be printed
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: ");
	if (d->name == NULL)
		printf("(nill)\n");
	else
		printf("%s\n", d->name);

	printf("Age: ");

	if (d->age != d->age)
		printf("(nill)\n");
	else
		printf("%.6f\n", d->age);

	printf("Owner: ");
	if (d->owner == NULL)
		printf("(nill)\n");
	else
		printf("%s\n", d->owner);
}
