#include "search_algos.h"
#include <math.h>

/**
 * minimum_value - determines minimum two values
 * @a: refers to first value
 * @b: second value
 *
 * Return: smaller value or equal
 */
size_t minimum_value(size_t a, size_t b)
{
	if (b < a)
		return (b);
	return (a);
}

/**
 * jump_search - seeks a sorted array of int using
 * Jump search algo
 * @array: points to first element
 * @size: num of elements
 * @value: search value
 *
 * Return: first index or -1 on failure
 */
int jump_search(int *array, size_t size, int value)
{
	size_t l, r, jump;
	int val;

	if (array != NULL && size > 0)
	{
		jump = sqrt(size);
		l = 0;
		r = jump;
		val = array[l];
		printf("Value checked array[%lu] = [%d]\n", l, val);
		while (r < size && val < value)
		{
			if (array[r] >= value)
				break;
			l += jump;
			r += jump;
			val = array[l];
			printf("Value checked array[%lu] = [%d]\n", l, val);
		}
		if (l >= size || val > value)
			return (-1);
		printf("Value found between indexes [%lu] and [%lu]\n", l, r);
		while (l <= minimum_value(size - 1, r) && val <= value)
		{
			val = array[l];
			printf("Value checked array[%lu] = [%d]\n", l, val);
			if (val == value)
				return (l);
			l++;
		}
	}
	return (-1);
}
