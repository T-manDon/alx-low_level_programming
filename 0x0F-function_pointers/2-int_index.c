#include "function_pointers.h"

/**
 * int_index - introduces the code
 * @array: array variable
 * @size: the size variable
 * @cmp: the third variable
 * Return: 0 success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	return (-1);

	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]))
	return (i);
	}
	return (-1);
}
