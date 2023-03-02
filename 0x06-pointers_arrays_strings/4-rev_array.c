#include "main.h"

/**
 * reverse_array - is a function
 * @a: is an argument
 * @n: is an argument
 * Description: a function that reverse the content of an array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	while (i < n)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++
	}
}
