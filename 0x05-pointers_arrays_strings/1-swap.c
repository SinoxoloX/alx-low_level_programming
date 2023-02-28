#include "main.h"
/**
 * swap_int - swaps the values of integers
 * @a: integer must swap
 * @b: integer must swap
 */
void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
