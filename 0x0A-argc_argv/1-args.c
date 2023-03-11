#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the number
 * of arguments passed into it.
 * the  program should print a number,
 * followed by a new line
 * of arguments passed into it.
 * @argc: arguments
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		for (count = 0; *argv; i++, argv++)
			;

		printf("%d\n", i - 1);
	}

	return (0);
i}
