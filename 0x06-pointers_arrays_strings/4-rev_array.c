#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int k;
	int v;

	for (k = 0; k < n--; k++)
	{
		v = a[k];
		a[k] = a[n];
		a[n] = v;
	}
}
