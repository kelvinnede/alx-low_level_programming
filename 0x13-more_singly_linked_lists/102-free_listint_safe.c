#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list with a loop
 * @h: A pointer to the head of the listint_t list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h);
{
	size_t count = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
		return (count);

	current = *h;

	while (current != NULL)
	{
		next = current->next;

		/* Check for a loop */
		if (current <= next)
		{
			*h = NULL;
			return (count);
		}

		free(current);
		current = next;
		count++;
	}

	*h = NULL; // Set the head to NULL after freeing the list
	return (count);
}
