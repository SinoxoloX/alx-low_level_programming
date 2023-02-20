#include <stdio.h>

/**
 * main - the use of putchar
 * follwed by newline
 * Return: 0 success
 */
int main(void)
{
	char e;

	for (e = 'a' ; e <= 'z' ; e++)
		putchar(e);
	putchar('\n');
	return (0);
}
