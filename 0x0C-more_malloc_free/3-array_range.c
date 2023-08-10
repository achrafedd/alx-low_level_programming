#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 *
 * @min: minimum number
 * @max: maximum nummber
 *
 * Return: pointer of the array
 */
int *array_range(int min, int max)
{
	int i, s;
	int *arr;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	arr = malloc(sizeof(int) * s);

	if (!arr)
		return (NULL);

	for (i = 0; min <= max; i++)
		arr[i] = min++;

	return (arr);
}
