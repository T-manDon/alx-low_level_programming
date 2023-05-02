#include "lists.h"

/**
 * sum_listint - forms the first part of the code
 * @head: this is the head variable
 * Return: the sum
 */

int sum_listint(listint_t *head)

{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{

	sum += temp->n;
	temp = temp->next;

	}

	return (sum);
}
