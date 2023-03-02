#include "main.h"

/**
 * _strcmp - is a function
 * @s1: an argument
 * @s2: an argument
 * Description: a function that compares two strings
 * Return: *s1-*s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			break;
		}
	}
	return (*s1 - *s2);
}
