#include "search_algos.h"

/**
  * advanced_binary_recursive - Search recursive value from the sorted
  *                             array of integ through binary search.
  * @array: points to first element.
  * @left: The starting index.
  * @right: The ending index.
  * @value: The value to seek
  * Return: 0 , -1.
  *         Otherwise, index location.
  *
  * Description: Prints the [sub]array.
  */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
  * advanced_binary - Searc value in sorted array
  *                   through advanced binary.
  * @array: points to first element.
  * @size: The number of elements.
  * @value: value to search.
  *
  * Return: NULL, -1.
  *         or index location.
  *
  * Description: Prints the [sub]array.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
