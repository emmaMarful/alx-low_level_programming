#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a
 * parameter on each element of an array
 * @size: is the size of the array
 * @array: name of array
 * @action: is a pointer to the function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if ((array == NULL) || (action == NULL))
		return;
	while (i < size)
	{
		action(*array);
		array++;
		i++;
	}
}
