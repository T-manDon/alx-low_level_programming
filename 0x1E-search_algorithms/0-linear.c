#include "search_algos.h"

/**
  * linear_search - this is the linearr searrch
  * @array: points to first element in the search array
  * @size: size of array
  * @value: value to find
  *
  * Return: index where found or -1
  */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
