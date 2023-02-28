#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/**
 * main - starting point of a program
 * Description: a program to generate password
 * Return: (0);
 */

int main(void)
{
	srand((unsigned int)(time(NULL)));
	int i;
	char pass[12], uppCase, lowerCase;

	for (i = 0; i < 4; i++)
	{
		pass[i] = rand() % 9;
		uppCase = 'A' + (rand() % 26);
		pass[i + 2] = uppCase;
		lowerCase = 'a' + (rand() % 26);
		pass[i + 3] = lowerCase;
		printf("%d%c%c", pass[i], pass[1 + 2], pass[i + 2], pass[i + 3]);
	}
	printf("\n\n");
	return (0);
}
