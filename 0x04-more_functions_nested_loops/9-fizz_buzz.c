#include "stdio.h"

/**
 * main - starting point of the program
 * Description: fizz buzz test
 * Return: 0
 */

int main(void)
{
	int num;

	num = 1;
	while (num <= 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz \n");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz \n");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz \n");
		}
		else
		{
			printf("%d \n", num);
		}
		num++;
	}
}
