#include "main.h"

/**
 * _isdigit - checks for numbers between 0 - 9
 * @c: the character under scrutiny
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
