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
	int len = 0, i = 0, j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		len++;
		i++;
	}

	str_cpy = malloc((len + 1) * sizeof(char));
	if (str_cpy == NULL)
		return (NULL);

	while (str[j])
	{
		str_cpy[j] = str[j];
		j++;
	}
	str_cpy[len] = '\0';
	return (str_cpy);
}
