#include <stdio.h>

/**
 * main - must not print some cases
 * followed by newline
 * Return: 0 success
 */
int main(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
		if (x != 'q' && x != 'e')
			putchar(x);
	putchar('\n');
	return (0);
}
