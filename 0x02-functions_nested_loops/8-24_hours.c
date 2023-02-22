#include "main.h"
/**
 * jack_bauer - main function to print hour and min
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int x;
	int z;

	for (x = 0 ; x < 24 ; x++)
	{
		for (z = 0 ; z < 60 ; z++)
		{
			_putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
			_putchar(':');
			_putchar(z / 10 + '0');
			_putchar(z % 10 + '0');
			_putchar('\n');
		}
	}
}
