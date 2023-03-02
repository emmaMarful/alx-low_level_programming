#include "main.h"

/**
 * cap_string - a fubction
 * @firstUp: an argument
 * Description: a function that capitalizes all words of a string
 * Return: fw (firstWord)
 */

char *cap_string(char *fw)
{
	int i = 0;

	for (i = 0; fw[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (fw[i] >= 'a' && fw[i] <= 'z')
				fw[i] -= 32;
			continue;
		}
		if (fw[i] == ' ' ||
		    fw[i] == '\t' ||
		    fw[i] == '\n' ||
		    fw[i] == ',' ||
		    fw[i] == ';' ||
		    fw[i] == '.' ||
		    fw[i] == '!' ||
		    fw[i] == '?' ||
		    fw[i] == '"' ||
		    fw[i] == '(' ||
		    fw[i] == ')' ||
		    fw[i] == '{' ||
		    fw[i] == '}' ||
		   )
		{
			i++;
			if (fw[i] >= 'a' && fw[i] <= 'z')
			{
				fw[i] -= 32;
				continue;
			}
			else
			{
				i--;
				continue;
			}
		}
	}
	return (fw);
}
