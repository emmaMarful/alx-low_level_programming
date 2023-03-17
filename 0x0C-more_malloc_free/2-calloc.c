#include <stdlib.h>
#include "main.h"

/**
 * _calloc - a function that allocates memory
 * @nmemb: allocated memory
 * @size: array size
 * Return: pointer to the allocated memory else NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i = 0;
	char *emp;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	emp = ptr;

	while (i < (size * nmemb))
	{
		emp[i] = '\0';
		i++;
	}
	return (ptr);
}
