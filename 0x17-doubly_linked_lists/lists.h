#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint - doubly linked list
 *
 * @n: int
 * @next: next node
 * @prev: previos node
 */

typedef struct dlistint
{
	int n;
	struct dlistint *next;
	struct dlistint *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

#endif
