#include <stdlib.h>
#include "main.h"

/**
 * _strdup - is a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: string to be copied.
 * Return: if str_cpy or str is equal to 0, return NULL, else return str_cpy
 */

char *_strdup(char *str)
{
	char *str_cpy;
	int len = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (*str)
	{
		len++;
	}

	str_cpy = malloc(len * sizeof(char));
	if (str_cpy == NULL)
		return (NULL);

	while (*str)
	{
		str_cpy[i] = str[i];
		i++;
	}
	return (str_cpy);
}
