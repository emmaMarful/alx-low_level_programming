#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function to concatenates two strings
 * @s1: destination
 * @s2: source
 * Return: an empty string if null is passed or array
 */

char *str_concat(char *s1, char *s2)
{
	char *merge;
	int i, merge_len, lengt_h;

	i = 0;
	merge_len = 0;
	lengt_h = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		lengt_h++;

	merge = malloc(len * sizeof(char));

	if (merge == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{
		merge[merge_len++] = s1[i];
	}

	for (i = 0; s2[i]; i++)
	{
		merge[merge_len++] = s2[i];
	}

	return (merge);
}
