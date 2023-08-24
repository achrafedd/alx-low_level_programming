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
	const list_t *current = h;
	int l = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, current->str);
		current = current->next;
		l++;
	}


	return (l);
}
