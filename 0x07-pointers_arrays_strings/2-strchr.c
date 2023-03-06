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
	while (s[i])
	{
		if (s[i] == c)
		{
			break;
		}
		i++;
	}
	return (s + i);
}
