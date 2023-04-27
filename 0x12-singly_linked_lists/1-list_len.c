#include <stdlib.h>
#include "lists.h"

/**
 * list_len - gives the number on the list
 * @h: points to the list
 * Return: the listed elements
 */

size_t list_len(const list_t *h)

{
	size_t n = 0;

	while (h)

	{
	n++;
	h = h->next;
	}

	return (n);
}
