#include "search_algos.h"

int binary_rec(int *array, int low, int high, int value)
{
	int mid, i;

	if (low > high)
		return (-1);

	mid = low + (high - low) / 2;
	printf("%i", mid);
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i == high)
			printf("%i\n", array[i]);
		else
			printf("%i, ", array[i]);
	}

	if (array[mid] == value && array[mid - 1] != value)
		return (mid);

	if (array[mid] < value)
		return (binary_rec(array, mid + 1, high, value));
	else
		return (binary_rec(array, low, mid - 1, value));
}

/**
* advanced_binary - search for a value in the array with
* advanced binary algorithm
*
* @array: array
* @size: size of the array
* @value: value to be found in the array
*
* Return: first index or -1
*/
int advanced_binary(int *array, size_t size, int value)
{
	int low, high;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;
	return (binary_rec(array, low, high, value));
}
