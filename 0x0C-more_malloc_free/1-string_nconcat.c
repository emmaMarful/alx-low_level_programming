#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - a function that adds two strings
 * @s1: destination of string to be added
 * @s2: string to be concatenated
 * @n: length of string
 * Return: if dest is equal to null return null or return pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dest;
	unsigned int i, s1Len = 0, dest_len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		s1Len++;

	dest = malloc(sizeof(char) * (s1Len + 1));

	if (string1 == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		dest[dest_len++] = s1[i];
	for (i = 0; i < n; i++)
		dest[dest_len++] = s2[i];
	dest[dest_len] = '\0';
	return (dest);
}

