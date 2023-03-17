#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - this is a function that adds two strings
 * @s1: destination
 * @s2: string to be concatenated
 * @n: length of string 2
 * Return: dest
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dest;
	unsigned int len = n, i, dlen = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	dest = malloc(sizeof(char) * (len + 1));

	if (dest == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		dest[dlen++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		dest[dlen++] = s2[i];

	destt[dlen] = '\0';

	return (dest);
}
