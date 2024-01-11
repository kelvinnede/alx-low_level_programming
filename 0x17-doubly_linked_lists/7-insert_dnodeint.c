#include "lists.h"

dlistint_t *insert_dnodeint_at_index(
				dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node;
dlistint_t *current;
unsigned int i;

if (!h)
return (NULL);

new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->next = *h;
new_node->prev = NULL;
if (*h)
(*h)->prev = new_node;
*h = new_node;
return (new_node);
}

current = *h;

for (i = 0; i < idx - 1 && current; i++)
current = current->next;

if (!current)
{
free(new_node);
return (NULL);
}

new_node->next = current->next;
new_node->prev = current;
if (current->next)
current->next->prev = new_node;
current->next = new_node;

return (new_node);
}
