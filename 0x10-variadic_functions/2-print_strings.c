#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - is a function that prints strings
 * @separator: separator is the string to be
 * printed between the strings
 * @n: n is the number of strings to be printed
 * @...: ellipses (unknown arguments)
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list v;
	unsigned int i;
	char *separate;

	va_start(v, n);

	for (i = 0; i < n; i++)
	{
		separate = va_arg(va, char *);

		if (separate != NULL)
			printf("%s", s);
		else
			printf("(nil)");

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(v);
}
