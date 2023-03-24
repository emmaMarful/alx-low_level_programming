#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - this is a function that prints numbers
 * @separator: where separator is the strings
 * to be printed between the numbers
 * @n: n is the numbers of integers passed to the function
 * @...: ellipses
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list v;
	unsigned int i, str;

	va_start(v, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(v, int);
		printf("%d", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(v);
}
