#include "lists.h"

/**
 * add_node_end - add node to the end
 *
 * @head: linked list
 * @str: string
 *
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = (list_t *) malloc(sizeof(list_t));
	list_t *current;

	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = node;

	return (node);
}
