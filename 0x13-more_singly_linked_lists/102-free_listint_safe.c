#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list with a loop
 * @h: A pointer to the head of the listint_t list
 *
 * Return: The size of the list that was freed
 */
void free_listint_safe(listint_t **h);
{
	listint_t *current, *next;

	current = *h;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;

		/* Check for a loop */
		if (current <= next)
			break;
	}

	*h = NULL;
}

