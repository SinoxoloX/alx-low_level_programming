#include <stdio.h>

/**
 * main -  prints all the numbers of base 16 in lowercase
 * follwed by newline
 * Return: 0 success
 */
int main(void)
{
	int x;
	char p;

	for (x = 0 ; x < 10 ; x++)
		putchar(x + '0');
	for (p = 'a' ; p <= 'f' ; p++)
		putchar(p);
	putchar('\n');
	return (0);
}
