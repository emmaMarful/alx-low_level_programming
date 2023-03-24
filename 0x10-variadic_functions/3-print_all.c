#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - this is a function that prints anything
 * @format: format is a list of types of arguments
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list v;
	int i = 0;
	char *s, *sp = "";

	va_start(v, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 's':
					s = va_arg(v, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sp, s);
					break;
				case 'i':
					printf("%s%d", sp, va_arg(v, int));
					break;
				case 'c':
					printf("%s%c", sp, va_arg(v, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(v, double));
					break;
				default:
					i++;
					continue;
			}
			sp = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(v);
}
