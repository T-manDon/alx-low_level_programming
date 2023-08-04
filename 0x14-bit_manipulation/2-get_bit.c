#include "main.h"

/**
 * get_bit - gives the bit value at the given index
 * @n: the number to extract the bit from
 * @index: the bit index (0-based)
 * Return: the bit value at the specified index, or -1 if index is invalid
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8) - 1)
	return (-1);

	int bit_val = (n >> index) & 1;

	return bit_val;
}
