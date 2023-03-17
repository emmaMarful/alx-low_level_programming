#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integer
 * @min: starting point of the array.
 * @max: end of the array.
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *a, i = 0, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	a = malloc(sizeof(int) * size);

	if (a == NULL)
		return (NULL);

	while (i < size)
	{
		a[i] = min++;
		i++;
	}

	return (arr);
}
