#include <stdio.h>
/**
 * main - print 2 digit combo
 *
 * Return: (0)
 *
 */
int main(void)
{
	int i = '0'
	int j;

	for (i = '0'; j <= '9'; j++)
	{
	if (i < j)
	{
			putchar(i);
			putchar(j);
			if (i != '8' || (i == '8' && j != '9'))
			putchar(',');
			putchar(' ');
	}
	}
}
putchar('\n');

return (0);

