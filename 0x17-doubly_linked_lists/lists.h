#ifndef LISTS_H
#define LISTD_H
#include <stdio.h>

typedef struct dlistint {
	int n;
	struct dlistint* next;
	struct dlistint* prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif
