#include "main.h"

/**
 * *_strchr - a function that locates a character in a string
 * @s: is a pointer to the string to be searche
 * @c: the variable to be located
 * Return: s + i
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
