#include "main.h"

/**
 * _strcat - is a function
 * @dest: ia an argument
 * @src: is an argument
 * Description: a function that concatenates two strings
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int lenOfDest, indexOfArr;

	lenOfDest = 0;
	indexOfArr = 0;
	while (dest[indexOfArr++)
		lenOdDest++;
	for (indexOfArr = 0; src[indexOfArr]; indexOfArr++)
		dest[lenOfDest++] = src[indexOfArr];
	return (dest);
}
