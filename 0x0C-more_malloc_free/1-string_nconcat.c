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
	unsigned int len = n, i, dest_len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	dest = malloc((len + 1) * sizeof(char));

	if (dest == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		dest[dest_len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		des[dest_len++] = s2[i];

	dest[des_len] = '\0';

	return (dest);
}
