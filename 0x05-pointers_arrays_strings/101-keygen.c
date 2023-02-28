#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void)
{
	srand ((unsigned int)(time(NULL)));
	int i;
	char pass[12];

	for (i = 0; i < 4; i++)
	{
		pass[i] = rand() % 9;
		char uppCase = 'A' + (rand() % 26);
		pass[i + 2] = uppCase;
		char lowerCase = 'a' + (rand() % 26);
		pass[i + 3] = lowerCase;
		printf("%d%c%c", pass[i], pass[1 + 2], pass[i + 2], pass[i + 3]);
	}
	printf("\n\n");
}
