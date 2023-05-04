#include "main.h"

/**
 * flip_bits - introduces the code
 * to obtain value from another
 * @n: first variable
 * @m: second variable
 * Return: 0 or 1
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
	current = exclusive >> i;
	if (current & 1)
	count++;
	}

	return (count);
}
