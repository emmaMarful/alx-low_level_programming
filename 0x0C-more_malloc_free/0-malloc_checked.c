#include <stdlib>
#include "main.h"

/**
 * *malloc_checked - is a function that allocates memory using malloc
 * @b: unsigned int
 * Return: a pointer to the allocated memory or 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		return (98);
	return (ptr);
}
