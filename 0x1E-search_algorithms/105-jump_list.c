#include <math.h>
#include "search_algos.h"

/**
 * move_forward - moves list forward
 * index, or last node
 * @list: list moved forward
 * @index: the prefered index
 *
 * Return: node index, or the very last node
 */
listint_t *move_forward(listint_t *list, size_t index)
{
	while (list->next != NULL && list->index < index)
		list = list->next;
	return (list);
}

/**
 * jump_list - searches for value sorted
 * with search algorithm
 * @list: points to head list for searchin
 * @size: number of the nodes
 * @value: value to search
 *
 * Return: points to location or NULL on failure
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump;
	listint_t *left, *right;

	if (list != NULL && size > 0)
	{
		jump = sqrt(size);
		left = list;
		right = move_forward(left, jump);
		printf("Value checked at index [%lu] = [%d]\n", right->index, right->n);
		while (right->index < (size - 1) && right->n < value)
		{
			left = right;
			right = move_forward(left, right->index + jump);
			printf("Value checked at index [%lu] = [%d]\n", right->index, right->n);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
		       left->index, right->index);
		printf("Value checked at index [%lu] = [%d]\n", left->index, left->n);
		while (left->index < size - 1 && left->n < value)
		{
			left = left->next;
			if (left == NULL)
				return (NULL);
			printf("Value checked at index [%lu] = [%d]\n", left->index, left->n);
		}
		if (left->n == value)
			return (left);
	}
	return (NULL);
}
