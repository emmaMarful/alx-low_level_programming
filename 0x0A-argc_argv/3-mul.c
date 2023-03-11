#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program should print the result of the multiplication
 * @argc: number
 * @argv: name of array
 * Return: 1 if there's only one argument, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		sum += atoi(argv[i]);
	printf("%d", sum);
	return (0);
}
