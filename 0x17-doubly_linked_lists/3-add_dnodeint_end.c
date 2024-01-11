#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to the head of the list.
 * @n: Number to be stored in the new node.
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
/* Allocate memory for the new node */
dlistint_t *new_node = malloc(sizeof(dlistint_t));

/* Check if the memory allocation was successful */
if (new_node == NULL)
return (NULL);

/* Set the value of 'n' for the new node */
new_node->n = n;

/* Set the 'next' pointer of the new node to NULL */
new_node->next = NULL;

/* Check if the list is empty */
if (*head == NULL)
{
/* If the list is empty, the new node is the only node, so update the head */
new_node->prev = NULL;
*head = new_node;
}
else
{
/* If the list is not empty, find the last node and update its 'next' ptr */
dlistint_t *last_node = *head;
while (last_node->next != NULL)
{
last_node = last_node->next;
}

last_node->next = new_node;
new_node->prev = last_node;
}

return (new_node);
}
