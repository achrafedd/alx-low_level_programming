#include "lists.h"

/**
 * add_nodeint_end - create node at the end of linked list
 *
 * @head: Head of linked list
 * @n: number
 *
 * Return: the created node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = (listint_t *) malloc(sizeof(listint_t));
	listint_t *curr = (listint_t *) malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}

	curr->next = *head;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}

	curr->next = node;
	return (node);
}
