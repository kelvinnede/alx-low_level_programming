#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _putchar - Custom putchar function.
 * @c: The character to print.
 * Return: Always 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the head of the list_t list.
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		count++;
		h = h->next;
	}

	return (count);
}
