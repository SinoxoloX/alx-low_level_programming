#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * follwed by newline
 * Return: 0 success
 */
int main(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
		printf("%d", x);
	printf("\n");
	return (0);
}
