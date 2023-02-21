/**
 * main - starting point of a code
 * Description: a program that print's _putchar
 * Return: 0
 */

int main(void)
{
	char p [] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	char i;

	for (i = 0; i < sizeof(p); i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
	return (0);
}
