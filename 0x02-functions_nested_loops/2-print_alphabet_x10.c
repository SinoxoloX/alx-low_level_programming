#include "main.h"
/**
 * print_alphabet_x10 - must print 10x alphabets
 * followed by a newline
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int x;
	char i;

	for (x = 1 ; x <= 10 ; x++)
	{
		for (i = 'a'; i <= 'z' ; i++)
			_putchar(x);
		_putchar('\n');
	}
}
