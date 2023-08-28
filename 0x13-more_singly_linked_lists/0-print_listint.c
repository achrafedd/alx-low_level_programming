#include "lists.h"

/**
 * print_listint - print linked list values
 *
 * @h: Head
 *
 * Return: Length of linked list
 */
size_t print_listint(const listint_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		length++;
		h = h->next;
	}

	return (length);
}
