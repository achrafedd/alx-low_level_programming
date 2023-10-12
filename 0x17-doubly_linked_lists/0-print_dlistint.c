#include "lists.h"

/**
 * print_dlistint - print linked list integers
 *
 * @h: linked list
 *
 * Return: size of linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;
	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		length++;
	}
	return (length);
}
