#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: print name
 * @f: a function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
