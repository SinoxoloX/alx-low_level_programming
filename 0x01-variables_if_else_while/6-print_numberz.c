#include <stdio.h>

/**
 * main - function numbers
 * followed by newline
 * Return: 0 success
 */
int main(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
		putchar(x + '0');
	putchar('\n');

	return (0);
}
