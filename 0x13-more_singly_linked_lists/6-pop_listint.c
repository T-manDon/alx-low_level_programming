#include "lists.h"

/**
 * pop_listint - introduces the first part of the code
 * @head: this is the head variable
 * Return: 0 for success 1 for null
 * or 0 if the list comes out empy
 */

int pop_listint(listint_t **head)

{
	listint_t *temp;
	int num;

	if (!head || !*head)
	return (0);

	num = (*head)->n;

	temp = (*head)->next;

	free(*head);

	*head = temp;

	return (num);
}
