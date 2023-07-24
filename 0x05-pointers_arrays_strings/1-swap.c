#include "main.h"

/**
 * swap_int - swap two integers
 *
 * @a: first int pointer
 *
 * @b: second int pointer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
