#include <stdlib>
#include "main.h"

/**
 * array_range - this is  a function that creates an array of integers.
 * @min: starting point of the array
 * @max: end of the array
 * Return: null if min is greater than max and Null if arr fails.
 */

int *array_range(int min, int max)
{
	int *a;
	int i, a_size;

	if (min > max)
		return (NULL);

	a_size = max - min + 1;

	a = malloc(sizeof(int) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < a_size; i++)
		a[i] = min++;

	return (a);
}
