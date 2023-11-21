#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the beginning of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *checker;
	size_t count = 0;

	current = head;

	while (current != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);

		checker = head;

		for (size_t i = 0; i < count; i++)
		{
			if (checker == current)
			{
				printf("-> [%p] %d\n", (void *)checker, checker->n);
				exit(98);
			}

			checker = checker->next;
		}

		current = current->next;
	}

	return (count);
}
