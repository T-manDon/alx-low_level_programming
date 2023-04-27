#include <stdlib.h>
#include "lists.h"

/**
 * free_list - the freed link list
 * @head: the head variable
 */

void free_list(list_t *head)

{
	list_t *temp;

	while (head)

	{
	temp = head->next;
	free(head->str);
	free(head);
	head = temp;
	}
}
