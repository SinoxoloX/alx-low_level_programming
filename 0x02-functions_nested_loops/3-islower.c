#include "main.h"

/**
 *  _islower - checks for lower cases
 * @c: parameter
 * Return: 1 in lowercases
 * and 0 other
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
