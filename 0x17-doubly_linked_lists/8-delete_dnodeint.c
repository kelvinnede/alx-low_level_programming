#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a
 * given index in a dlistint_t list.
 * @head: Pointer to the pointer to the head of the list.
 * @index: Index of the node to be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i;
dlistint_t *current = *head;

if (!head || !*head)
return (-1);

if (index == 0)
{
*head = (*head)->next;
if (*head)
(*head)->prev = NULL;
free(current);
return (1);
}

for (i = 0; i < index && current; i++)
current = current->next;

if (!current)
return (-1);
if (current->prev)
current->prev->next = current->next;

if (current->next)
current->next->prev = current->prev;

free(current);
return (1);
}
