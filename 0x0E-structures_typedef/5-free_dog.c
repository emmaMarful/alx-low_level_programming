#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function that free memory allocated to dogs
 * @d: free dog
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
