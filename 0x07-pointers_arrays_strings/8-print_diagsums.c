#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers.
 *
 * @a: the square matrix of integers
 * @size: the number of elements
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, res1, res2;

	res1 = res2 = 0;

	for (i = 0; i < size; i++)
	{
		k = (i * size) + i;
		res1 += *(a + k);
	}
	for (j = 0; j < size; j++)
	{
		k = (j * size) + (size - 1 - j);
		res2 += *(a + k);
	}

	printf("%i, %i\n", res1, res2);
}
