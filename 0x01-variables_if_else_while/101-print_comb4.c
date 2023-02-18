#include <stdio.h>

/**
 * main - starting point
 *Description: 3 combination of numbers
 * Return: 0
 */
int main(void)
{
	int i, j, l;

	for (i = '0'; j <= '9'; j++)
	{
		for (i = '0'; j <= '9'; j++)
		{
			for (l = '0'; l <= '9'; l++)
			{
				if (i < j && j < l)
				{
					putchar(i);
					putchar(j);
					putchar(l);

					if (c != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
