#ifndef LISTS_H
#define LISTS_H

/* Structure definition for linked list node */
typedef struct list_s
{
    char *str;
    int len;
    struct list_s *next;
} list_t;

/* Function prototype for printing linked list */
size_t print_list(const list_t *h);

#endif /* LISTS_H */
