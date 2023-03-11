#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program should print the result of the multiplication
 * @argc: number (argument)
 * @argv: array (argument)
 * Return: return 1 if there's only one argument, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		sum = (atoi(argv[1])) * (atoi(argv[2]));
		printf("%d\n", sum);
	}
	return (0);
}

