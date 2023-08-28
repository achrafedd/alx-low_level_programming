#include "lists.h"

/**
 * listint_len - return length of linked list
 *
 * @h: Head
 *
 * Return: Length of linked list
 */
size_t listint_len(const listint_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}

	return (length);
}
