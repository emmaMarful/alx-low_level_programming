/**
 * main - starting point of a code
 * Description: a program that print's _putchar
 * Return: 0
 */

int main(void)
{
	char p [8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	char i;

	for (i = 0; i < 8; i++)
	{
		putchar(p[i]);
	}
	putchar('\n');
	return (0);
}
