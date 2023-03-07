#include "main.h"

/**
 * print_diagsums - is a function that prints the sum of two
 * diagonals of a square matrix of integers
 * @a: integer matrix to be added
 * @size: matrix size
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, f_sum, s_sum;

	f_sum = 0;
	for (i = 0; i < size; i++)
	{
		sum += a[i];
		a += size;
	}
	a = a - size;
	s_sum = 0;
	for (i = 0; i < size; i++)
	{
		s_sum += a[i];
		a -= size;
	}
	printf("%i, %i\n", f_sum, s_sum);
}
