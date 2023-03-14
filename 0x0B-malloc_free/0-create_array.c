#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function that creates an array of chars, and
 * initializes it with a specific char
 * @size: size of array
 * @c: char to be inititalized
 * Return: null if ponter is equal to null or zile is == 0. If not return ptr
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
