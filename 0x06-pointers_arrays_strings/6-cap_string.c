#include "main.h"

/**
 * cap_string - a fubction
 * @firstUp: an argument
 * Description: a function that capitalizes all words of a string
 * Return: firstUp
 */

char *cap_string(char *firstUp)
{
	int i = 0;

	for (i = 0; firstUp[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (firstUp[i] >= 'a' && firstUp[i] <= 'z')
				firstUp[i] -= 32;
			continue;
		}
		if (firstUp[i] == ' '
				|| firstUp[i] == ','
				|| firstUp[i] == ';'
				|| firstUp[i] == '.'
				|| firstUp[i] == '!'
				|| firstUp[i] == '?'
				|| firstUp[i] == '"'
				|| firstUp[i] == '('
				|| firstUp[i] == ')'
				|| firstUp[i] == '{'
				|| firstUp[i] == '}'
				|| firstUp[i] == '\n'
				|| firstUp[i] == '\t'
		   )
		{
			i++;
			if (firstUP[i] >= 'a' && firstUp[i] <= 'z')
			{
				firstUp[i] -= 32;
				continue;
			}
			else
			{
				i--;
				continue;
			}
		}
	}
	return (firstUP);
}
