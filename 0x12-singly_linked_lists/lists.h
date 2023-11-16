#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/* Structure definition for linked list node */
typedef struct list_s
{
	char *str;          /* String data */
	int len;            /* Length of the string */
	struct list_s *next; /* Pointer to the next node */
} list_t;

/* Function prototypes */
size_t print_list(const list_t *h);
int _putchar(char c);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
void print_list(const list_t *head);


#endif /* LISTS_H */

