#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - a function that concatenates two strings
 * @s1: destination string
 * @s2: source, string to be concatenated
 * @n: size of byte in s2
 * Return: return "" if s1 and s2 is equal to null or return
 * null if dest is equal to null or return the pointer dest
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dest;
	unsigned int i, dest_len, s1Len;

	i = 0;
	dest_len = 0;
	s1Len = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
	{
		s1Len++;
		i++;
	}

	dest = malloc((s1Len + 1) * sizeof(char));

	if (dest == NULL)
		return (NULL);
	for (i = 0; i < s1[i]; i++)
		dest[dest_len++] = s1[i];
	for (i = 0; i < n; i++)
		dest[dest_len++] = s2[i];
	return (dest);
}
