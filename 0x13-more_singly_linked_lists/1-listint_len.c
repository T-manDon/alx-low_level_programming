#include "lists.h"

/**
 * listint_len - introduces the code
 * @h: the h variable
 * Return: 0 or 1
 */

size_t listint_len(const listint_t *h)

{
	size_t num = 0;

	while (h)
	{
	num++;
	h = h->next;
	}

	return (num);
}
