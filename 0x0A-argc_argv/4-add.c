#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that adds positive numbers.
 * If no number is passed to the program, print 0,
 * followed by a new line
 * If one of the number contains symbols that
 * are not digits, print Error, followed by a
 * new line, and return 1
 * You can assume that numbers and the addition
 * of all the numbers can be stored in an int
 *
 * @argc: number (argument)
 * @argv: array (argument)
 * Return: return 1 if false
 */

int main(int argc, char *argv[])
{
	int i, results, arrLen, j;
	char *a;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		results = 0;
		for (i = 1; i < argc; i++)
		{
			a = argv[i];
			arrLen = strlen(a);

			for (j = 0; j < arrLen; j++)
			{
				if (isdigit(*(a + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			results += atoi(argv[i]);
		}

		printf("%d\n", results);
	}
	return (0);
}
