#include "main.h"

/**
 * *_strstr - a function that locates a substring
 * @haystack: is the main C string to be scanned
 * @needle: is the small string to be searched with-in haystack string
 * Return: '\0'
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	j = 0;
	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (*haystack == needle[j])
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return ('\0');
}
