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
	int *arr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
