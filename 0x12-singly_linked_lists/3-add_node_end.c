#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * create_node - Creates a new list node.
 * @str: The string to be duplicated and added to the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
static list_t *create_node(const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	return (new_node);
}

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to the head of the list.
 * @str: The string to be duplicated and added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = create_node(str);
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new_node;

	return (new_node);
}

