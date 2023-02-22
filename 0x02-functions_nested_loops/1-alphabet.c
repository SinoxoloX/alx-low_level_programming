#include "main.h"

/**
 * print_alphabet - it should print alphabets in lowercases
 * follwed by newline
 * Return: 0
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
		_putchar(x);
	_putchar('\n');
}
