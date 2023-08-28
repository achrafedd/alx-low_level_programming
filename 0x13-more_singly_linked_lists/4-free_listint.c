#include "lists.h"

/**
 * free_listint - free memory in the linked list
 *
 * @head: head of the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *nextNode;

	while (head != NULL)
	{
		nextNode = head->next;
		free(head);
		head = nextNode;
	}
}
