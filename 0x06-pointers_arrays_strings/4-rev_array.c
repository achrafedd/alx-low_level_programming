#include "main.h"

/**
 * reverse_array - reverse an array
 *
 * @a: the array
 * @n: i don't know WTF is this
 *
 * Return: void
*/
void reverse_array(int *a, int n)
{
	int i, x, y;

	i = 0;
	y = (n - 1) / 2;

	while (i < y)
	{
		x = a[i];
		a[i] = a[n - 1];
		a[n - 1] = x;

		i++;
		n--;
	}
}
