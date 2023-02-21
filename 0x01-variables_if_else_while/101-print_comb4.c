#include <stdio.h>

/**
 * main -  program that prints all possible different combinations
 * newline
 * Return: 0 success
 */
int main(void)
{
	int m;
	int x;

	for (m = 0 ; m < 10 ; m++)
	{
		for (x = 1 ; x < 10 ; m++)
		{
			if (m < x && m != m)
			{
				putchar(m + '0');
				putchar(x + '0');
				if (m + x != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
