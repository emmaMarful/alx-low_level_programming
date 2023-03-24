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
	char *sp;

	va_start(v, n);

	for (i = 0; i < n; i++)
	{
		sp = va_arg(v, char *);

		if (sp == NULL)
			printf("(nil)");
		else
			printf("%s", sp);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(v);
}
