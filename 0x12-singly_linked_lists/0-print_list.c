#include <stdio.h>
#include "lists.h"

/**
 * print_list - print linked list
 *
 * @h: linked list
 *
 * Return: length
 */
size_t print_list(const list_t *h)
{
	int l = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		l++;
	}


	return (l);
}
