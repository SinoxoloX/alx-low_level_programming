#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int longx = 0;
	int f;

	while (*s != '\0')
	{
		longx++;
		s++;
	}
	s--;
	for (f = longx; f > 0; f--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
