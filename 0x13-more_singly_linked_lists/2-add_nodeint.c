#include "lists.h"

/**
 * add_nodeint - add node to the linked list
 *
 * @head: head of the linked list
 * @n: number
 *
 * Return: new added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = (listint_t *)malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
