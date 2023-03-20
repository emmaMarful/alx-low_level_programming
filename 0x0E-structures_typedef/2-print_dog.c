#include <stdio.h>
#include "main.h"

/**
 * print_dog - a function that prints a struct dog
 * @d: the struct dog to be printed
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((d->name == NULL)
			|| (d->age == NULL)
			|| (d->owner == NULL))
		printf("nil");
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	if (d->age != NULL)
		printf("Age: %f\n", d->age);
	if (d->owner != NULL)
		printf("Owner: %s\n"m d->owner);
}
