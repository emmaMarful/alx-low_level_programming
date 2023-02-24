#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: an argument
 * Return: void
 */

void print_line(int n)
{
	int start_point;

	start_point = 0;
	while (start_point < n)
	{
		_putchar('_');
		start_p++;
	}
	_putchar('n');
}
