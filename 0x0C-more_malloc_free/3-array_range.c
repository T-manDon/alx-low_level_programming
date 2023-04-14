#include <stdlib.h>
#include "main.h"

/**
 * *array_range - introduces the code
 * @min: value that stores the minimum range
 * @max: stores the maximum variable
 * Return: 0 success
 */

int *array_range(int min, int max)

{

	int *ptr;

	int i, size;

	if (min > max)
	return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
	return (NULL);

	for (i = 0; min <= max; i++)
	ptr[i] = min++;

	return (ptr);
}
