#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct list - a linked list struct
 *
 * @str: string
 * @len: length
 * @next: pointer of the next element
*/
typedef struct list
{
	char *str;
	int len;
	struct list *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif
