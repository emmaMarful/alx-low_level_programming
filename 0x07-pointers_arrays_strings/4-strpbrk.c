#include "main.h"

/**
 * *_strpbrk - a function that searches a string for any of
 * a set of byte
 * @s: strings to be searched
 * @accept: strings to be checked
 * Return: \0
 */

char *_strpbrk(char *s, char *accept)
{
	int i,j;

	j = 0;
	while (s[j])
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		j++;
	}
	return ('\0');
}
