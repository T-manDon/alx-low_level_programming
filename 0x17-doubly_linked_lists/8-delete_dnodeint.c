#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node
 * @head: head pointer
 * @index: node index
 * Return: 1 success
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)

{
    dlistint_t *h1;  // Temporary pointer to traverse the list.
    dlistint_t *h2;  // Temporary pointer to store previous node.
    unsigned int i;  // Counter for index.

    h1 = *head;

    // Traverse to the actual head of the list if necessary.
    if (h1 != NULL)
        while (h1->prev != NULL)
            h1 = h1->prev;

    i = 0;

    // Traverse the list to find the node at the given index.
    while (h1 != NULL)
    {
        if (i == index)
        {
            if (i == 0)
            {
                *head = h1->next;
                if (*head != NULL)
                    (*head)->prev = NULL;
            }
            else
            {
                h2->next = h1->next;

                if (h1->next != NULL)
                    h1->next->prev = h2;
            }

            free(h1);
            return (1);  // Deletion succeeded.
        }
        h2 = h1;
        h1 = h1->next;
        i++;
    }

    return (-1);  // Deletion failed (node not found at the specified index).
}
