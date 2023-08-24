#include "lists.h"

/**
 * 
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;
	*head = node;

	return (node);
}
