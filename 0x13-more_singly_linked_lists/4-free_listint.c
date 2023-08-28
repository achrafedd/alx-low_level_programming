#include "lists.h"

/**
 * free_listint - free memory in the linked list
 *
 * @head: head of the linked list
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(&head->n);
		free(head);
		head = head->next;
	}
}
