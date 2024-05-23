#!/usr/bin/env bash
#include "search_algos.h"

/**
  * linear_search - this reps linear search
  * @array: pointer to the array
  * @size: array size
  * @value: value to find
  *
  * Return: 0 or -1
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
