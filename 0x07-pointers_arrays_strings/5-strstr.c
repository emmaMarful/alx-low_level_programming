#include "main.h"

/**
 * *_strstr - a function that locates a substring
 * @haystack: is the main C string to be scanned
 * @needle: is the small string to be searched with-in haystack string
 * Return: '\0'
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		if (*haystack == needle[i])
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
