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

	while (fw[i])
	{
		while (!(fw[i] >= 'a' && fw[i] <= 'z'))
			index++;

		if (fw[i - 1] == ' ' ||
		    fw[i - 1] == '\t' ||
		    fw[i - 1] == '\n' ||
		    fw[i - 1] == ',' ||
		    fw[i - 1] == ';' ||
		    fw[i - 1] == '.' ||
		    fw[i - 1] == '!' ||
		    fw[i - 1] == '?' ||
		    fw[i - 1] == '"' ||
		    fw[i - 1] == '(' ||
		    fw[i - 1] == ')' ||
		    fw[i - 1] == '{' ||
		    fw[i - 1] == '}' ||
		    i == 0)
			str[i] -= 32;

		i++;
	}

	return (fw);
}
