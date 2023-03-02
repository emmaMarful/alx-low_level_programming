#include "main.h"

/**
 * string_toupper - a function
 *  @toUp: is an argument
 *  Description: a function for changing all lowercase
 *  letters of a string to uppercase
 *  Return: u
 */

char *string_toupper(char *toUp)
{
	int i;

	while (toUp[i])
	{
		if (i >= 'a' && i <= 'z')
		{
			toUp[i] -= 32;
		}
		i++;
	}
	return (toUp);
}
