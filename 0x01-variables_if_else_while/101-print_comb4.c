#include <stdio.h>
/**
 * main - print 3 digits seperated by , and space
 *
 * Return: (0)
 *
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = '0'; i <= '9'; i++)
	{
		j = '0';
		while (j <= '9')
		{
			k = '0';
			while (k <= '9')
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != '7')
					{
					putchar(',');
					putchar(' ');
					}

				}
				k++;
			}
			j++;
		}
	}
	putchar('\n');

	return (0);
}
