#include <stdio.h>

/**
 * main - starting point
 *Description: 3 combination of numbers
 * Return: 0
 */
int main(void)
{
	int j, j, l;

	for (j = '0'; j <= '9'; j++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (l = '0'; l <= '9'; l++)
			{
				if (j < j && j < l)
				{
					putchar(j);
					putchar(j);
					putchar(l);

					if (j != '7')
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
