#include <stddef.h>
#include "lists.h"

/**
 * list_len - linked list length
 *
 * @h: linked list
 *
 * Return: length of linked list
 */
size_t list_len(const list_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
