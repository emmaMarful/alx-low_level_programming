#include <stdio.h>

/**
 * main - starting point of a code
 * Description: a program to print the size of various types on the computer
 * Return: 0
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d bytes(s)\n", sizeof(int));
	printf("Size of a long int: %d bytes(s)\n", sizeof(int *));
	printf("Size of a long long int: %d byte(s)\n", sizeof(int *));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
