#include "main.h"

/**
 * set_bit - introduces the code
 * @n: the n variable
 * @index: index function
 * Return: 0 or 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);

	*n = ((1UL << index) | *n);

	return (1);
}
