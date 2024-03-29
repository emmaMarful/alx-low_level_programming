#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all -  this is a function that
 * returns the sum of all its parameters.
 * @n: n is the numbers to be added
 * @...: ellipsis
 * Return: sum of numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list v;
	unsigned int i, total = 0;

	va_start(v, n);

	for (i = 0; i < n; i++)
		total += va_arg(v, int);

	va_end(v);

	return (total);
}
