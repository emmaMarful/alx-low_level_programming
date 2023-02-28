#include "main.h"

/**
 * puts_half - is a function
 * @str: is an argument of function puts_half
 * Description: a function that prints half ofa string
 * Return: void
 */

void puts_half(char *str)
{
	int lenOfStr, half;

	lenOfStr = 0;
	while (str[lenOfStr])
	{
		lenOfStr++;
	}
	for (half = lenOfStr / 2; str[half] != '\0'; half++)
	{
		_putchar(str[half]);
	}
}
