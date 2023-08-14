#include <stdio.h>
/**
 * main - print base sixteen
 *
 * Return: (0)
 *
 */
int main(void)
{
	char n;
	char t = 'a';

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (t = 'a'; t <= 'f'; t++)
	{
		putchar(t);
	}
	putchar('\n');

	return (0);
