#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: is a pointer argument (the memory address)
 * @b: b is the value itself
 * @n: number of byte
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}
