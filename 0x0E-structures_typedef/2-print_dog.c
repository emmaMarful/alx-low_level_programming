#include <stdio.h>
#include "main.h"

/**
 * print_dog - a function that prints a struct dog
 * @d: the struct dog to be printed
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("");

	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	if (d->age > 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
