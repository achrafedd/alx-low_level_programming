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
	int i;
	int *arr;

	if (min > max)
		return (NULL);

	arr = (int *)malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (NULL);

	for (i = min; i <= max; i++)
		arr[i] = i;

	return (arr);
}
