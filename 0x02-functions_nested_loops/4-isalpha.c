#include "main.h"
/**
 * _isalpha - it must print alphabets in lower and upper
 * @c: perimeter
 * Return: 1
 * otherwise return 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
