#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: is the name of array name
 * @size: is the size of array
 * @cmp: cmp is a pointer to a function
 * Return: if array and cmp is NULL return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int arr = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	while (size > 0)
	{
		if (cmp(array[arr]) != 0)
			return (arr);
		arr++;
		size--;
	}
	return (-1);
}
