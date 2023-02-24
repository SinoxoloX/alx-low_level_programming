include "main.h"

/**
 * _isdigit - check if numbers are (0 - 9)
 * @c: char to be checked
 * Return: 1 if number is digit , 0 other
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}	
