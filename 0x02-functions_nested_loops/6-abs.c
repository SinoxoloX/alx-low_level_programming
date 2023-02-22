#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @y: perimeter
 * Return: 0,y
 */
int _abs(int y)
{
	if (y < 0)
	y = -(y);
	else if (y >= 0)
	y = y;
	return (y);
}
