#include "main.h"

/**
 * more_numbers - a function that print 10 times a number from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int number, str_num, numX10;

	numX10 = 0;
	while (numX10 < 10)
	{
		number = 0;
		while (number <= 14)
		{
			store_num = number;
			if (number > 9)
			{
				_putchar('1');
				store_num = number % 10;
			}
			_putchar(store_num + '0');
			number++;
		}
		_putchar('\n');
		numX10++;
	}
}
