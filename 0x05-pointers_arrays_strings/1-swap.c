#include "main.h"

/**
 * swap_int - this swaps the two values
 * @a: the value to beswitched
 * @b: the value to be swapped
 * @s: the value used to swap the variables
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
