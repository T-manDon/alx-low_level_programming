#include "lists.h"

/**
 * get_nodeint_at_index - introduces the code
 * @head: this is the head variable
 * @index: this is the index variable
 * Return: 0 for success or 1 for null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
	temp = temp->next;
	i++;
	}

	return (temp ? temp : NULL);
}
